# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xander/VEXU_GHOST/09_External/plotjuggler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xander/VEXU_GHOST/build/plotjuggler

# Utility rule file for ToolboxQuaternion_autogen.

# Include any custom commands dependencies for this target.
include plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen.dir/progress.make

plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/xander/VEXU_GHOST/build/plotjuggler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target ToolboxQuaternion"
	cd /home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/ToolboxQuaternion && /usr/bin/cmake -E cmake_autogen /home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen.dir/AutogenInfo.json RelWithDebInfo

ToolboxQuaternion_autogen: plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen
ToolboxQuaternion_autogen: plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen.dir/build.make
.PHONY : ToolboxQuaternion_autogen

# Rule to build all files generated by this target.
plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen.dir/build: ToolboxQuaternion_autogen
.PHONY : plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen.dir/build

plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen.dir/clean:
	cd /home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/ToolboxQuaternion && $(CMAKE_COMMAND) -P CMakeFiles/ToolboxQuaternion_autogen.dir/cmake_clean.cmake
.PHONY : plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen.dir/clean

plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen.dir/depend:
	cd /home/xander/VEXU_GHOST/build/plotjuggler && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xander/VEXU_GHOST/09_External/plotjuggler /home/xander/VEXU_GHOST/09_External/plotjuggler/plotjuggler_plugins/ToolboxQuaternion /home/xander/VEXU_GHOST/build/plotjuggler /home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/ToolboxQuaternion /home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plotjuggler_plugins/ToolboxQuaternion/CMakeFiles/ToolboxQuaternion_autogen.dir/depend

