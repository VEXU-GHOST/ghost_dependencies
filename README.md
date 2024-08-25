
### Description
This repository hosts pre-compiled debian packages of each submodule required in the main VEXU-GHOST repository.

---
### Usage
Download the required debian and install it using `dpkg -i [pkg_name.deb]`.

---
### For Maintainers
When adding new submodule packages,
- Determine your system architecture using `dpkg --print-architecture`.
- For Non-ROS packages,
  - Build the package on a donor machine.
  - Create a new manifest file following the structure convention (folders, separator, files)
  - Add a new makefile target for your package:
    - Invoke prepare_pkg to prepare manifest contents.
    - Invoke build_pkg to pack contents into a .deb file.
    - Add new package target to 'all' target.
  - Build package using makefile, and push new additions.
- For ROS packages follow [this link](https://gist.github.com/awesomebytes/196eab972a94dd8fcdd69adfe3bd1152), or:
  - Navigate to package folder (same folder as package.xml).
  - Run `bloom-generate rosdebian --ros-distro humble; fakeroot debian/rules binary` to create source files
  - Copy generated package folder (named "ros-humble-..." under the generated "debian" folder) to this repository under src/.
  - Rename folder to adhere with naming convention. 
  - Add a new makefile target for your package:
    - Invoke build_pkg to pack contents into a .deb file.
    - Add new package target to 'all' target.
  - Build package using makefile, and push new additions.

---
### Contact
- Xander Wilson
  - Discord: chief_himself
  - Email: xanderwilson2014@gmail.com
