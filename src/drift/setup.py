from setuptools import find_packages, setup
import os
from glob import glob
package_name = 'drift'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share',package_name,'launch'),glob(os.path.join('launch', '*launch.[pxy][yma]*')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='stefano',
    maintainer_email='stefano.dellarossa9@gmail.com',
    description='Nodo per far fare al RoboMaster un cerchio driftato',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'drift_circle_node = drift.drift_circle_node:main',
            'play_sound_node = drift.play_sound_node:main'
        ],
},

)
