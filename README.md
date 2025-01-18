# Nuertey-SCL3300-Mbed - Type-Driven SPI Framing Protocol For Murata Manufacturing Co. Ltd.'s SCL3300 3-Axis Inclinometer.

SCL3300 - 3-axis inclinometer with angle output and digital SPI interface. 

This sensor driver is targetted for the ARM Mbed platform. For ease of use, power, flexibility and readability of the code, the protocol has been written in a modern C++ (C++17/C++20) metaprogrammed and templatized class-encapsulated idiom. 

A goal of the design is to encourage and promote zero-cost abstractions, even and especially so, in the embedded realms. Note that care has been taken to deduce and glean those abstractions from the problem-domain itself. And in the doing so, care has also been taken to shape the abstractions logically.

![SCL3300 Sensor Driver Class Diagram](https://github.com/nuertey/RandomArtifacts/blob/master/NuerteySCL3300Device2.png?raw=true)

The SCL3300 is targeted at applications demanding high stability and accuracy with tough environmental requirements. Typical applications would include:
 
  - Leveling
  - Tilt sensing
  - Machine control
  - Structural health monitoring
  - Inertial measurement units (IMUs)
  - Robotics
  - Positioning and guidance system
 
Key features of the sensor are as follows:
 
  - 3-axis (XYZ) inclinometer
  - User selectable measurement modes:
    - 3000 LSB/g with 70 Hz LPF
    - 6000 LSB/g with 40 Hz LPF
    - 12000 LSB/g with 10 Hz LPF
  - Angle output resolution 0.0055°/LSB
  - −40°C…+125°C operating range
  - 3.0V…3.6V supply voltage
  - SPI digital interface
  - Ultra-low 0.001 °/√Hz noise density
  - Excellent offset stability
  - Size 8.6 x 7.6 x 3.3 mm (l × w × h)
  - Proven capacitive 3D-MEMS technology

## DEPENDENCIES - CODING LANGUAGE/OS/COMPILATION TARGET/COMPILER:
  - C++20
  - mbed-ce
    - https://github.com/mbed-ce/mbed-os.git
    - commit 8a8bc9ca361d1cc8590832c35298551ec2d265cc (HEAD -> master, origin/master, origin/HEAD)
  - NUCLEO F767ZI
  - GCC ARM 14.2.1 (GNU Arm Embedded Toolchain)
    - arm-none-eabi-g++ (Arm GNU Toolchain 14.2.Rel1 (Build arm-14.52)) 14.2.1 20241119
    - arm-none-eabi-gcc (Arm GNU Toolchain 14.2.Rel1 (Build arm-14.52)) 14.2.1 20241119

```console 
(py312-venv) osboxes@osboxes:~/Workspace/mbed-ce-Nuertey-SCL3300/build$ cmake .. -GNinja -DMBED_TARGET=NUCLEO_F767ZI -DCMAKE_BUILD_TYPE=Develop 
-- Found Python3: /usr/bin/python3 (found version "3.12.7") found components: Interpreter
-- Mbed: Creating virtual environment with Python interpreter /usr/bin/python3
-- Found Python3: /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/venv/bin/python3 (found version "3.12.7") found components: Interpreter
-- Mbed: Installing Python requirements for Mbed into venv
Requirement already satisfied: pip in /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/venv/lib/python3.12/site-packages (24.2)
Collecting pip
  Using cached pip-24.3.1-py3-none-any.whl.metadata (3.7 kB)
Using cached pip-24.3.1-py3-none-any.whl (1.8 MB)
Installing collected packages: pip
  Attempting uninstall: pip
    Found existing installation: pip 24.2
    Uninstalling pip-24.2:
      Successfully uninstalled pip-24.2
Successfully installed pip-24.3.1
Ignoring PrettyTable: markers 'python_version < "3.6"' don't match your environment
Ignoring pywin32: markers 'platform_system == "Windows"' don't match your environment
Ignoring beautifulsoup4: markers 'sys_platform == "darwin"' don't match your environment
Ignoring lxml: markers 'sys_platform == "darwin"' don't match your environment
Ignoring cffi: markers 'python_version >= "3.13"' don't match your environment
Collecting prettytable<4.0,>=2.0 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 2))
  Using cached prettytable-3.12.0-py3-none-any.whl.metadata (30 kB)
Collecting future<1.0,>=0.18.0 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 3))
  Using cached future-0.18.3-py3-none-any.whl
Collecting jinja2>=2.11.3 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 4))
  Using cached jinja2-3.1.5-py3-none-any.whl.metadata (2.6 kB)
Collecting intelhex<3.0.0,>=2.3.0 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 5))
  Using cached intelhex-2.3.0-py2.py3-none-any.whl.metadata (2.7 kB)
Collecting python-dotenv (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 6))
  Using cached python_dotenv-1.0.1-py3-none-any.whl.metadata (23 kB)
Collecting Click<9,>=7.1 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 7))
  Using cached click-8.1.8-py3-none-any.whl.metadata (2.3 kB)
Collecting GitPython (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 8))
  Using cached GitPython-3.1.44-py3-none-any.whl.metadata (13 kB)
Collecting tqdm (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 9))
  Using cached tqdm-4.67.1-py3-none-any.whl.metadata (57 kB)
Collecting tabulate (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 10))
  Using cached tabulate-0.9.0-py3-none-any.whl.metadata (34 kB)
Collecting requests>=2.20 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 11))
  Using cached requests-2.32.3-py3-none-any.whl.metadata (4.6 kB)
Collecting psutil (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 13))
  Using cached psutil-6.1.1-cp36-abi3-manylinux_2_12_x86_64.manylinux2010_x86_64.manylinux_2_17_x86_64.manylinux2014_x86_64.whl.metadata (22 kB)
Collecting pyudev (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 14))
  Using cached pyudev-0.24.3-py3-none-any.whl.metadata (4.6 kB)
Collecting typing-extensions (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 15))
  Using cached typing_extensions-4.12.2-py3-none-any.whl.metadata (3.0 kB)
Collecting pyserial (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 16))
  Using cached pyserial-3.5-py2.py3-none-any.whl.metadata (1.6 kB)
Collecting fasteners (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 17))
  Using cached fasteners-0.19-py3-none-any.whl.metadata (4.9 kB)
Collecting appdirs<2.0,>=1.4 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 18))
  Using cached appdirs-1.4.4-py2.py3-none-any.whl.metadata (9.0 kB)
Collecting junit-xml<2.0,>=1.0 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 19))
  Using cached junit_xml-1.9-py2.py3-none-any.whl.metadata (3.2 kB)
Collecting lockfile (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 20))
  Using cached lockfile-0.12.2-py2.py3-none-any.whl.metadata (2.4 kB)
Collecting six<2.0,>=1.0 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 21))
  Using cached six-1.17.0-py2.py3-none-any.whl.metadata (1.7 kB)
Collecting colorama<0.5,>=0.3 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 22))
  Using cached colorama-0.4.6-py2.py3-none-any.whl.metadata (17 kB)
Collecting pyjson5~=1.6 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 23))
  Using cached pyjson5-1.6.8-cp312-cp312-manylinux_2_17_x86_64.manylinux2014_x86_64.whl.metadata (2.9 kB)
Collecting humanize~=4.9.0 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 24))
  Using cached humanize-4.9.0-py3-none-any.whl.metadata (7.9 kB)
Collecting pyocd (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached pyocd-0.36.0-py3-none-any.whl.metadata (11 kB)
Collecting cryptography (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 34))
  Using cached cryptography-44.0.0-cp39-abi3-manylinux_2_28_x86_64.whl.metadata (5.7 kB)
Collecting cbor (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 35))
  Using cached cbor-1.0.0-cp312-cp312-linux_x86_64.whl
Collecting cysecuretools~=6.0 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached cysecuretools-6.1.0-py3-none-any.whl.metadata (12 kB)
Collecting cmsis-pack-manager~=0.5.0 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 39))
  Using cached cmsis_pack_manager-0.5.3-py3-none-manylinux_2_17_x86_64.manylinux2014_x86_64.whl.metadata (3.7 kB)
Collecting wcwidth (from prettytable<4.0,>=2.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 2))
  Using cached wcwidth-0.2.13-py2.py3-none-any.whl.metadata (14 kB)
Collecting MarkupSafe>=2.0 (from jinja2>=2.11.3->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 4))
  Using cached MarkupSafe-3.0.2-cp312-cp312-manylinux_2_17_x86_64.manylinux2014_x86_64.whl.metadata (4.0 kB)
Collecting gitdb<5,>=4.0.1 (from GitPython->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 8))
  Using cached gitdb-4.0.12-py3-none-any.whl.metadata (1.2 kB)
Collecting charset-normalizer<4,>=2 (from requests>=2.20->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 11))
  Using cached charset_normalizer-3.4.1-cp312-cp312-manylinux_2_17_x86_64.manylinux2014_x86_64.whl.metadata (35 kB)
Collecting idna<4,>=2.5 (from requests>=2.20->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 11))
  Using cached idna-3.10-py3-none-any.whl.metadata (10 kB)
Collecting urllib3<3,>=1.21.1 (from requests>=2.20->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 11))
  Using cached urllib3-2.3.0-py3-none-any.whl.metadata (6.5 kB)
Collecting certifi>=2017.4.17 (from requests>=2.20->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 11))
  Using cached certifi-2024.12.14-py3-none-any.whl.metadata (2.3 kB)
Collecting capstone<5.0,>=4.0 (from pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached capstone-4.0.2-py2.py3-none-manylinux1_x86_64.whl.metadata (525 bytes)
Collecting importlib-metadata>=3.6 (from pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached importlib_metadata-8.5.0-py3-none-any.whl.metadata (4.8 kB)
Collecting importlib-resources (from pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached importlib_resources-6.5.2-py3-none-any.whl.metadata (3.9 kB)
Collecting intervaltree<4.0,>=3.0.2 (from pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached intervaltree-3.1.0-py2.py3-none-any.whl
Collecting lark<2.0,>=1.1.5 (from pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached lark-1.2.2-py3-none-any.whl.metadata (1.8 kB)
Collecting libusb-package<2.0,>=1.0 (from pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached libusb_package-1.0.26.1-cp312-cp312-linux_x86_64.whl
Collecting natsort<9.0,>=8.0.0 (from pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached natsort-8.4.0-py3-none-any.whl.metadata (21 kB)
Collecting pyelftools<1.0 (from pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached pyelftools-0.31-py3-none-any.whl.metadata (381 bytes)
Collecting pylink-square<2.0,>=1.0 (from pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached pylink_square-1.4.0-py2.py3-none-any.whl.metadata (5.1 kB)
Collecting pyusb<2.0,>=1.2.1 (from pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached pyusb-1.3.1-py3-none-any.whl.metadata (2.5 kB)
Collecting pyyaml<7.0,>=6.0 (from pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached PyYAML-6.0.2-cp312-cp312-manylinux_2_17_x86_64.manylinux2014_x86_64.whl.metadata (2.1 kB)
Collecting cffi>=1.12 (from cryptography->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 34))
  Using cached cffi-1.17.1-cp312-cp312-manylinux_2_17_x86_64.manylinux2014_x86_64.whl.metadata (1.5 kB)
Collecting setuptools==69.5.1 (from cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached setuptools-69.5.1-py3-none-any.whl.metadata (6.2 kB)
Collecting cryptography (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 34))
  Using cached cryptography-36.0.1-cp36-abi3-manylinux_2_24_x86_64.whl.metadata (5.4 kB)
Collecting Click<9,>=7.1 (from -r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 7))
  Using cached click-8.0.4-py3-none-any.whl.metadata (3.2 kB)
Collecting python-jose==3.3.0 (from cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached python_jose-3.3.0-py2.py3-none-any.whl.metadata (5.4 kB)
Collecting jsonschema<=4.22.0,>=4.0.0 (from cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached jsonschema-4.22.0-py3-none-any.whl.metadata (8.2 kB)
Collecting packaging==21.3 (from cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached packaging-21.3-py3-none-any.whl.metadata (15 kB)
Collecting lief==0.14.1 (from cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached lief-0.14.1-cp312-cp312-manylinux_2_28_x86_64.manylinux_2_27_x86_64.whl.metadata (4.0 kB)
Collecting pyparsing!=3.0.5,>=2.0.2 (from packaging==21.3->cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached pyparsing-3.2.1-py3-none-any.whl.metadata (5.0 kB)
Collecting ecdsa!=0.15 (from python-jose==3.3.0->cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached ecdsa-0.19.0-py2.py3-none-any.whl.metadata (29 kB)
Collecting rsa (from python-jose==3.3.0->cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached rsa-4.9-py3-none-any.whl.metadata (4.2 kB)
Collecting pyasn1 (from python-jose==3.3.0->cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached pyasn1-0.6.1-py3-none-any.whl.metadata (8.4 kB)
Collecting pycparser (from cffi>=1.12->cryptography->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 34))
  Using cached pycparser-2.22-py3-none-any.whl.metadata (943 bytes)
Collecting smmap<6,>=3.0.1 (from gitdb<5,>=4.0.1->GitPython->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 8))
  Using cached smmap-5.0.2-py3-none-any.whl.metadata (4.3 kB)
Collecting zipp>=3.20 (from importlib-metadata>=3.6->pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached zipp-3.21.0-py3-none-any.whl.metadata (3.7 kB)
Collecting sortedcontainers<3.0,>=2.0 (from intervaltree<4.0,>=3.0.2->pyocd->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 27))
  Using cached sortedcontainers-2.4.0-py2.py3-none-any.whl.metadata (10 kB)
Collecting attrs>=22.2.0 (from jsonschema<=4.22.0,>=4.0.0->cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached attrs-24.3.0-py3-none-any.whl.metadata (11 kB)
Collecting jsonschema-specifications>=2023.03.6 (from jsonschema<=4.22.0,>=4.0.0->cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached jsonschema_specifications-2024.10.1-py3-none-any.whl.metadata (3.0 kB)
Collecting referencing>=0.28.4 (from jsonschema<=4.22.0,>=4.0.0->cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached referencing-0.35.1-py3-none-any.whl.metadata (2.8 kB)
Collecting rpds-py>=0.7.1 (from jsonschema<=4.22.0,>=4.0.0->cysecuretools~=6.0->-r /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/cmake/../requirements.txt (line 36))
  Using cached rpds_py-0.22.3-cp312-cp312-manylinux_2_17_x86_64.manylinux2014_x86_64.whl.metadata (4.2 kB)
Using cached prettytable-3.12.0-py3-none-any.whl (31 kB)
Using cached jinja2-3.1.5-py3-none-any.whl (134 kB)
Using cached intelhex-2.3.0-py2.py3-none-any.whl (50 kB)
Using cached python_dotenv-1.0.1-py3-none-any.whl (19 kB)
Using cached GitPython-3.1.44-py3-none-any.whl (207 kB)
Using cached tqdm-4.67.1-py3-none-any.whl (78 kB)
Using cached tabulate-0.9.0-py3-none-any.whl (35 kB)
Using cached requests-2.32.3-py3-none-any.whl (64 kB)
Using cached psutil-6.1.1-cp36-abi3-manylinux_2_12_x86_64.manylinux2010_x86_64.manylinux_2_17_x86_64.manylinux2014_x86_64.whl (287 kB)
Using cached pyudev-0.24.3-py3-none-any.whl (62 kB)
Using cached typing_extensions-4.12.2-py3-none-any.whl (37 kB)
Using cached pyserial-3.5-py2.py3-none-any.whl (90 kB)
Using cached fasteners-0.19-py3-none-any.whl (18 kB)
Using cached appdirs-1.4.4-py2.py3-none-any.whl (9.6 kB)
Using cached junit_xml-1.9-py2.py3-none-any.whl (7.1 kB)
Using cached lockfile-0.12.2-py2.py3-none-any.whl (13 kB)
Using cached six-1.17.0-py2.py3-none-any.whl (11 kB)
Using cached colorama-0.4.6-py2.py3-none-any.whl (25 kB)
Using cached pyjson5-1.6.8-cp312-cp312-manylinux_2_17_x86_64.manylinux2014_x86_64.whl (185 kB)
Using cached humanize-4.9.0-py3-none-any.whl (126 kB)
Using cached pyocd-0.36.0-py3-none-any.whl (14.0 MB)
Using cached cysecuretools-6.1.0-py3-none-any.whl (1.3 MB)
Using cached click-8.0.4-py3-none-any.whl (97 kB)
Using cached cryptography-36.0.1-cp36-abi3-manylinux_2_24_x86_64.whl (3.6 MB)
Using cached lief-0.14.1-cp312-cp312-manylinux_2_28_x86_64.manylinux_2_27_x86_64.whl (2.7 MB)
Using cached packaging-21.3-py3-none-any.whl (40 kB)
Using cached python_jose-3.3.0-py2.py3-none-any.whl (33 kB)
Using cached setuptools-69.5.1-py3-none-any.whl (894 kB)
Using cached cmsis_pack_manager-0.5.3-py3-none-manylinux_2_17_x86_64.manylinux2014_x86_64.whl (4.5 MB)
Using cached capstone-4.0.2-py2.py3-none-manylinux1_x86_64.whl (2.1 MB)
Using cached certifi-2024.12.14-py3-none-any.whl (164 kB)
Using cached cffi-1.17.1-cp312-cp312-manylinux_2_17_x86_64.manylinux2014_x86_64.whl (479 kB)
Using cached charset_normalizer-3.4.1-cp312-cp312-manylinux_2_17_x86_64.manylinux2014_x86_64.whl (145 kB)
Using cached gitdb-4.0.12-py3-none-any.whl (62 kB)
Using cached idna-3.10-py3-none-any.whl (70 kB)
Using cached importlib_metadata-8.5.0-py3-none-any.whl (26 kB)
Using cached jsonschema-4.22.0-py3-none-any.whl (88 kB)
Using cached lark-1.2.2-py3-none-any.whl (111 kB)
Using cached MarkupSafe-3.0.2-cp312-cp312-manylinux_2_17_x86_64.manylinux2014_x86_64.whl (23 kB)
Using cached natsort-8.4.0-py3-none-any.whl (38 kB)
Using cached pyelftools-0.31-py3-none-any.whl (180 kB)
Using cached pylink_square-1.4.0-py2.py3-none-any.whl (84 kB)
Using cached pyusb-1.3.1-py3-none-any.whl (58 kB)
Using cached PyYAML-6.0.2-cp312-cp312-manylinux_2_17_x86_64.manylinux2014_x86_64.whl (767 kB)
Using cached urllib3-2.3.0-py3-none-any.whl (128 kB)
Using cached importlib_resources-6.5.2-py3-none-any.whl (37 kB)
Using cached wcwidth-0.2.13-py2.py3-none-any.whl (34 kB)
Using cached attrs-24.3.0-py3-none-any.whl (63 kB)
Using cached ecdsa-0.19.0-py2.py3-none-any.whl (149 kB)
Using cached jsonschema_specifications-2024.10.1-py3-none-any.whl (18 kB)
Using cached pyparsing-3.2.1-py3-none-any.whl (107 kB)
Using cached referencing-0.35.1-py3-none-any.whl (26 kB)
Using cached rpds_py-0.22.3-cp312-cp312-manylinux_2_17_x86_64.manylinux2014_x86_64.whl (385 kB)
Using cached smmap-5.0.2-py3-none-any.whl (24 kB)
Using cached sortedcontainers-2.4.0-py2.py3-none-any.whl (29 kB)
Using cached zipp-3.21.0-py3-none-any.whl (9.6 kB)
Using cached pyasn1-0.6.1-py3-none-any.whl (83 kB)
Using cached pycparser-2.22-py3-none-any.whl (117 kB)
Using cached rsa-4.9-py3-none-any.whl (34 kB)
Installing collected packages: wcwidth, sortedcontainers, pyserial, pyelftools, lockfile, intelhex, cbor, appdirs, zipp, urllib3, typing-extensions, tqdm, tabulate, smmap, six, setuptools, rpds-py, pyyaml, pyusb, pyudev, python-dotenv, pyparsing, pyjson5, pycparser, pyasn1, psutil, prettytable, natsort, MarkupSafe, lief, libusb-package, lark, intervaltree, importlib-resources, idna, humanize, future, fasteners, colorama, Click, charset-normalizer, certifi, capstone, attrs, rsa, requests, referencing, pylink-square, packaging, junit-xml, jinja2, importlib-metadata, gitdb, ecdsa, cffi, python-jose, jsonschema-specifications, GitPython, cryptography, cmsis-pack-manager, pyocd, jsonschema, cysecuretools
Successfully installed Click-8.0.4 GitPython-3.1.44 MarkupSafe-3.0.2 appdirs-1.4.4 attrs-24.3.0 capstone-4.0.2 cbor-1.0.0 certifi-2024.12.14 cffi-1.17.1 charset-normalizer-3.4.1 cmsis-pack-manager-0.5.3 colorama-0.4.6 cryptography-36.0.1 cysecuretools-6.1.0 ecdsa-0.19.0 fasteners-0.19 future-0.18.3 gitdb-4.0.12 humanize-4.9.0 idna-3.10 importlib-metadata-8.5.0 importlib-resources-6.5.2 intelhex-2.3.0 intervaltree-3.1.0 jinja2-3.1.5 jsonschema-4.22.0 jsonschema-specifications-2024.10.1 junit-xml-1.9 lark-1.2.2 libusb-package-1.0.26.1 lief-0.14.1 lockfile-0.12.2 natsort-8.4.0 packaging-21.3 prettytable-3.12.0 psutil-6.1.1 pyasn1-0.6.1 pycparser-2.22 pyelftools-0.31 pyjson5-1.6.8 pylink-square-1.4.0 pyocd-0.36.0 pyparsing-3.2.1 pyserial-3.5 python-dotenv-1.0.1 python-jose-3.3.0 pyudev-0.24.3 pyusb-1.3.1 pyyaml-6.0.2 referencing-0.35.1 requests-2.32.3 rpds-py-0.22.3 rsa-4.9 setuptools-69.5.1 six-1.17.0 smmap-5.0.2 sortedcontainers-2.4.0 tabulate-0.9.0 tqdm-4.67.1 typing-extensions-4.12.2 urllib3-2.3.0 wcwidth-0.2.13 zipp-3.21.0
-- Mbed: venv created successfully
-- Mbed: First CMake run detected, generating configs...
INFO: Found existing Mbed program at path '/home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300'
Summary of available memory banks:
Target RAM banks: -----------------------------------------------------------
0. IRAM1, start addr 0x20020000, size 384.0 KiB
1. IRAM2, start addr 0x20000000, size 128.0 KiB

Target ROM banks: -----------------------------------------------------------
0. ROM_VIA_ITCM_BUS, start addr 0x00200000, size 2.0 MiB
1. ROM_VIA_AXIM_BUS, start addr 0x08000000, size 2.0 MiB

mbed_config.cmake has been generated and written to '/home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/build/mbed_config.cmake'
CMake Warning (dev) at mbed-os/tools/cmake/app.cmake:37 (enable_language):
  project() should be called prior to this enable_language() call.
Call Stack (most recent call first):
  CMakeLists.txt:6 (include)
This warning is for project developers.  Use -Wno-dev to suppress it.

-- The C compiler identification is GNU 14.2.1
-- The CXX compiler identification is GNU 14.2.1
-- The ASM compiler identification is GNU
-- Found assembler: /usr/local/gcc-arm/bin/arm-none-eabi-gcc
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/local/gcc-arm/bin/arm-none-eabi-gcc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/local/gcc-arm/bin/arm-none-eabi-g++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Mbed: Loading default upload method configuration from /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/targets/upload_method_cfg/NUCLEO_F767ZI.cmake
-- Mbed: Not building any Mbed OS tests.
-- Mbed: Code upload enabled via upload method MBED
-- Configuring done (12.6s)
-- Generating done (0.2s)
-- Build files have been written to: /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/build

```
 
## Compilation Output (Mbed CLI 1)

```console
(py312-venv) osboxes@osboxes:~/Workspace/mbed-ce-Nuertey-SCL3300/build$ ninja
[1/255] Generating ../mbed-nucleo-f767zi.link_script.ld
Preprocess linker script: STM32F767xI.ld -> mbed-nucleo-f767zi.link_script.ld
[255/255] Linking CXX executable Nuertey-SCL3300.elf
-- built: /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/build/Nuertey-SCL3300.bin
-- built: /home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/build/Nuertey-SCL3300.hex
/home/osboxes/Workspace/mbed-ce-Nuertey-SCL3300/mbed-os/tools/python/memap/memap.py:63: DeprecationWarning: the 'HEADER' constant is deprecated, use the 'HRuleStyle' and 'VRuleStyle' enums instead
  from prettytable import PrettyTable, HEADER
| Module                         |           .text |       .data |          .bss |
|--------------------------------|-----------------|-------------|---------------|
| CMakeFiles/Nuertey-SCL3300.dir |   20815(+20815) |     11(+11) |     696(+696) |
| [fill]                         |       415(+415) |     22(+22) |       42(+42) |
| [lib]/c.a                      | 126451(+126451) | 4071(+4071) |     862(+862) |
| [lib]/gcc.a                    |     7548(+7548) |       0(+0) |         0(+0) |
| [lib]/m.a                      |     4256(+4256) |       0(+0) |         0(+0) |
| [lib]/misc                     |       292(+292) |     12(+12) |       25(+25) |
| [lib]/stdc++.a                 | 228782(+228782) |   172(+172) |   4328(+4328) |
| mbed-os/CMakeFiles             |   51815(+51815) |   456(+456) | 10135(+10135) |
| Subtotals                      | 440374(+440374) | 4744(+4744) | 16088(+16088) |
Total Static RAM memory (data + bss): 20832(+20832) bytes
Total Flash memory (text + data): 445118(+445118) bytes

RAM Bank IRAM1: 0(+0)/393216 bytes used, 0.0% (+0.0%) used
RAM Bank IRAM2: 21088(+0)/131072 bytes used, 16.1% (+0.0%) used
ROM Bank ROM_VIA_ITCM_BUS: 458714(+0)/2097152 bytes used, 21.9% (+0.0%) used
ROM Bank ROM_VIA_AXIM_BUS: 0(+0)/2097152 bytes used, 0.0% (+0.0%) used

(py312-venv) osboxes@osboxes:~/Workspace/mbed-ce-Nuertey-SCL3300/build$ ls -ll
total 32984
-rw-rw-r--  1 osboxes osboxes 11411859 Jan 13 08:34 build.ninja
-rw-rw-r--  1 osboxes osboxes    21810 Jan 13 08:34 CMakeCache.txt
drwxrwxr-x  6 osboxes osboxes     4096 Jan 13 08:34 CMakeFiles
-rw-rw-r--  1 osboxes osboxes     2067 Jan 13 08:34 cmake_install.cmake
-rw-rw-r--  1 osboxes osboxes    29994 Jan 13 08:34 mbed_config.cmake
-rw-rw-r--  1 osboxes osboxes     2704 Jan 13 08:36 mbed-nucleo-f767zi.link_script.ld
drwxrwxr-x 15 osboxes osboxes     4096 Jan 13 08:34 mbed-os
-rw-rw-r--  1 osboxes osboxes     4173 Jan 13 08:34 memory_banks.json
-rwxrwxr-x  1 osboxes osboxes   437804 Jan 13 08:36 Nuertey-SCL3300.bin
-rwxrwxr-x  1 osboxes osboxes  5919080 Jan 13 08:36 Nuertey-SCL3300.elf
-rw-rw-r--  1 osboxes osboxes 15182628 Jan 13 08:36 Nuertey-SCL3300.elf.map
-rw-rw-r--  1 osboxes osboxes        0 Jan 13 08:36 Nuertey-SCL3300.elf.map.old
-rw-rw-r--  1 osboxes osboxes  1231493 Jan 13 08:36 Nuertey-SCL3300.hex


```

## Execution Output Snippet: 

```shell-session

nuertey@nuertey-PC-LL850RSB:~$ kermit -c
Connecting to /dev/ttyACM0, speed 115200
 Escape character: Ctrl-\ (ASCII 28, FS): enabled
Type the escape character followed by C to get back,
or followed by ? to see other options.
----------------------------------------------------


Nuertey-SCL3300-Mbed - Beginning... 

Software resetting the SCL3300 sensor...
Switching the SCL3300 sensor operations to memory bank 0...
Error! std::error_code NuerteySCL3300Device::WriteCommandOperation() [with std::array<unsigned char, 4> V = SPICommandFrame_t{"\37777777664\000 "}]: 
    [-4] -> SPI Response Frame Opcode ADDRESS does NOT match transmitted command frame
Changing the Operation Mode of the SCL3300 sensor to MODE_4...
Switching the SCL3300 sensor operations to memory bank 0...
Error! std::error_code NuerteySCL3300Device::WriteCommandOperation() [with std::array<unsigned char, 4> V = SPICommandFrame_t{"\37777777664\000\003"}]: 
    [-1] -> SPI Command Frame invalid or has incorrect frame CRC
Software resetting the SCL3300 sensor...
Switching the SCL3300 sensor operations to memory bank 0...
Error! std::error_code NuerteySCL3300Device::WriteCommandOperation() [with std::array<unsigned char, 4> V = SPICommandFrame_t{"\37777777664\000 "}]: 
    [-4] -> SPI Response Frame Opcode ADDRESS does NOT match transmitted command frame
Switching the SCL3300 sensor operations to memory bank 0...
Error! std::error_code NuerteySCL3300Device::EnableAngleOutputs(): 
    [-1] -> SPI Command Frame invalid or has incorrect frame CRC
Switching the SCL3300 sensor operations to memory bank 1...
Error! std::error_code NuerteySCL3300Device::ClearStatusSummaryRegister(): 
    [-6] -> Return Status indicates Startup is in progress
Success! std::error_code NuerteySCL3300Device::ValidateSPIResponseFrame(T&, const SPICommandFrame_t&, const SPICommandFrame_t&) [with T = short unsigned int; SPICommandFrame_t = std::array<unsigned char, 4>]: 
    [1] -> First response where STATUS has been                                 cleared. RS bits are indicating proper start-up.
Error! std::error_code NuerteySCL3300Device::ClearStatusSummaryRegister(): 
    [-15] -> Start-up indication or External voltage levels too extreme - SW or HW reset needed
Success! std::error_code NuerteySCL3300Device::ClearStatusSummaryRegister(): 
    [0] -> Completed clearing                                 the STATUS Summary register.
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
-0.37 g. Gravitational Acceleration Constant, g = 9.819 m/s2
0.17 g. Gravitational Acceleration Constant, g = 9.819 m/s2
-0.29 g. Gravitational Acceleration Constant, g = 9.819 m/s2
312.25°
19.75°
324.46°
21.07 °C
69.93 °F
294.07 K
Switching the SCL3300 sensor operations to memory bank 1...
Success! std::error_code NuerteySCL3300Device::ReadSerialNumber(std::string&): 
    [0] -> Successfully received                         contents of SERIAL1 register.
Switching the SCL3300 sensor operations to memory bank 0...
Success! std::error_code NuerteySCL3300Device::ReadSerialNumber(std::string&): 
    [0] -> Successfully received                                 contents of SERIAL2 register.
    Serial Number = 852308482B33
Switching the SCL3300 sensor operations to memory bank 0...
SCL3300 Device Serial Number = 852308482B33Switching the SCL3300 sensor operations to memory bank 1...
Switching the SCL3300 sensor operations to memory bank 0...
Success! std::error_code NuerteySCL3300Device::ReadCurrentBank(ProtocolDefinitions::MemoryBank_t&): 
    [0] -> Successfully read                         current bank register. 
    1
Switching the SCL3300 sensor operations to memory bank 0...
SCL3300 Device Current Memory Bank = 1Switching the SCL3300 sensor operations to memory bank 0...
Success! std::error_code NuerteySCL3300Device::ReadCommandRegister(SixteenBits_t&): 
    [0] -> Successfully read                         command register of the SCL3300 sensor.
    Command Response Value: 0000000000000000

         [0] "MODE_1 -> SCL3300 Operation Mode 1"

Switching the SCL3300 sensor operations to memory bank 0...
Success! std::error_code NuerteySCL3300Device::ReadErrorFlag1Reason(uint16_t&, ErrorFlag1Reason_t&): 
    [0] -> Successfully received                         contents of ERR_FLAG1 register.
    Error Flag Bit Value Received From SCL3300 Sensor: 0000000000000000

         [0] => 0000000000000000
         "No errors present"

Switching the SCL3300 sensor operations to memory bank 0...
Success! std::error_code NuerteySCL3300Device::ReadErrorFlag2Reason(uint16_t&, ErrorFlag2Reason_t&): 
    [0] -> Successfully received                         contents of ERR_FLAG2 register.
    Error Flag Bit Value Received From SCL3300 Sensor: 0000000000010000

         [16] => 0000000000010000
         "Digital power error - SW or HW reset needed"

Switching the SCL3300 sensor operations to memory bank 1...
Success! std::error_code NuerteySCL3300Device::ClearStatusSummaryRegister(): 
    [0] -> Completed clearing                                 the STATUS Summary register.
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_SELF_TEST_OUTPUT
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_TEMPERATURE
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_X_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ANGLE_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_STATUS_SUMMARY
Switching the SCL3300 sensor operations to memory bank 0...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_WHO_AM_I
Switching the SCL3300 sensor operations to memory bank 0...
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_X_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Y_AXIS
Switching the SCL3300 sensor operations to memory bank 1...
Success! void NuerteySCL3300Device::ReadSensorData(T&) [with auto:41 = std::tuple<std::array<unsigned char, 4>, std::array<unsigned char, 4>, short int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&]: 
    [0] -> Successfully retrieved                         sensor data from the SCL3300 sensor device.
    READ_ACCELERATION_Z_AXIS
Switching the SCL3300 sensor operations to memory bank 1...

```

## Pictures Of STM32F767 MCU, the Running Code and SCL3300 Inclinometer in Action

![alt text](https://github.com/nuertey/RandomArtifacts/blob/master/20250118_125154.jpg?raw=true)

![alt text](https://github.com/nuertey/RandomArtifacts/blob/master/20250118_125216.jpg?raw=true)

![alt text](https://github.com/nuertey/RandomArtifacts/blob/master/20250118_125245.jpg?raw=true)

![alt text](https://github.com/nuertey/RandomArtifacts/blob/master/20250118_125251.jpg?raw=true)

![alt text](https://github.com/nuertey/RandomArtifacts/blob/master/20250118_125308.jpg?raw=true)


## License
MIT License

Copyright (c) 2025 Nuertey Odzeyem

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
