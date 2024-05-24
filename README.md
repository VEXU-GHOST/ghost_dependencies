
### Description
This repository hosts pre-compiled debian packages of each submodule required in the main VEXU-GHOST repository.

---
### Usage
Download the required debian and install it using `dpkg -i [pkg_name.deb]`.

---
### For Maintainers
When adding new submodule packages,
- Determine your system architecture using `dpkg --print-architecture`.
- Create a new folder for the package following the naming convention.
- Copy the DEBIAN folder from a different package and change the contents as necessary.
  - Feel free to leave the existing maintainer information if you don't want to change it!
- Add your new package to the makefile; ensure the new target you create is ran by the 'all' target as well.
- Build your new package using the makefile and push the resulting changes. 

---
### Contact
- Xander Wilson
  - Discord: chief_himself
  - Email: xanderwilson2014@gmail.com
