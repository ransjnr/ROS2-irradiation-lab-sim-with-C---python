#!/usr/bin/env python3
"""Generate Code-128 PNG labels for 101–109 and 201–709."""

from pathlib import Path

import barcode
from barcode.writer import ImageWriter
from PIL import Image, ImageDraw, ImageFont


def identifiers():
    return [str(value) for value in range(101, 110)] + [str(value) for value in range(201, 710)]


def main():
    media = Path(__file__).resolve().parents[1] / "media"
    destination = media / "barcodes"
    destination.mkdir(parents=True, exist_ok=True)
    writer = ImageWriter()
    options = {"module_width": 0.80, "module_height": 30.0, "quiet_zone": 6.0,
               "font_size": 20, "text_distance": 2.0, "dpi": 300}
    for sample_id in identifiers():
        barcode.get("code128", sample_id, writer=writer).save(str(destination / sample_id), options=options)
    generate_floor_layout(media / "floor_layout.png")
    print(f"Generated {len(identifiers())} Code-128 labels in {destination}")


def generate_floor_layout(destination: Path):
    """Create the single floor map: source corner, robot start and 63 slots."""
    width, height, margin = 2400, 1800, 80
    image = Image.new("RGB", (width, height), "#383d43")
    draw = ImageDraw.Draw(image)
    try:
        title = ImageFont.truetype("/usr/share/fonts/truetype/dejavu/DejaVuSans-Bold.ttf", 46)
        label = ImageFont.truetype("/usr/share/fonts/truetype/dejavu/DejaVuSans-Bold.ttf", 28)
        small = ImageFont.truetype("/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf", 22)
    except OSError:
        title = label = small = ImageFont.load_default()
    draw.rectangle((margin, margin, width - margin, height - margin), outline="#e2e7eb", width=5)
    draw.text((120, 105), "IRRADIATION FLOOR LAYOUT", fill="white", font=title)
    # Source and robot start are visibly marked corners of the same map.
    draw.rounded_rectangle((130, 260, 560, 530), radius=20, outline="#f0c94c", width=6)
    draw.text((175, 315), "SOURCE", fill="#f0c94c", font=label)
    draw.text((158, 372), "Samples 101–109", fill="white", font=small)
    draw.rounded_rectangle((130, 1260, 560, 1530), radius=20, outline="#78cae8", width=6)
    draw.text((165, 1315), "ROBOT START", fill="#78cae8", font=label)
    draw.text((190, 1372), "Navigation corner", fill="white", font=small)
    # 6 x 9 numbered placement grid: 201–209 through 701–709.
    left, top, cell_w, cell_h = 720, 310, 170, 175
    for row in range(6):
        for col in range(9):
            x0, y0 = left + col * cell_w, top + row * cell_h
            x1, y1 = x0 + cell_w, y0 + cell_h
            draw.rectangle((x0, y0, x1, y1), outline="#e2e7eb", width=4)
            position = f"{row + 2}{col + 1:02d}"
            bbox = draw.textbbox((0, 0), position, font=label)
            draw.text((x0 + (cell_w - (bbox[2] - bbox[0])) / 2,
                       y0 + (cell_h - (bbox[3] - bbox[1])) / 2), position,
                      fill="#e2e7eb", font=label)
    draw.text((730, 1580), "Numbered irradiation positions • Code-128 samples remain in SOURCE", fill="white", font=small)
    image.save(destination)


if __name__ == "__main__":
    main()
