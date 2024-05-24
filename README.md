
### Description
This repository hosts pre-compiled debian packages of each submodule required in the main VEXU-GHOST repository.

---
### Usage
Download the required debian and install it using `dpkg -i [pkg_name.deb]`.

---
### For Maintainers
When using the helper scripts, beware of any files containing the name of two packages; they will cause conflicts and must be manually removed.

Example: <u>**libcasadi**\_nlpsol\_**ipopt**.so</u> will be included both in <u>ghost-casadi</u> AND <u>ghost-ipopt</u>.
