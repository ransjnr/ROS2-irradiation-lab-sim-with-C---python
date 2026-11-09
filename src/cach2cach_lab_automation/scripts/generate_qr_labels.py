#!/usr/bin/env python3
"""Generate deterministic QR label texture PNGs using OpenCV only."""
from pathlib import Path
import cv2


def main():
    directory = Path(__file__).resolve().parents[1] / "media" / "qr"
    directory.mkdir(parents=True, exist_ok=True)
    encoder = cv2.QRCodeEncoder_create()
    for sample_id in ("LAB-SAMPLE-001", "LAB-SAMPLE-002", "LAB-SAMPLE-003"):
        qr = encoder.encode(sample_id)
        qr = cv2.copyMakeBorder(qr, 4, 4, 4, 4, cv2.BORDER_CONSTANT, value=255)
        qr = cv2.resize(qr, (512, 512), interpolation=cv2.INTER_NEAREST)
        cv2.imwrite(str(directory / f"{sample_id}.png"), qr)


if __name__ == "__main__":
    main()
