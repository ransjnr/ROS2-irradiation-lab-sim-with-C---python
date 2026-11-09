from setuptools import find_packages
from setuptools import setup

setup(
    name='pick_place_orchestrator',
    version='0.0.0',
    packages=find_packages(
        include=('pick_place_orchestrator', 'pick_place_orchestrator.*')),
)
