# Install script for directory: /home/xander/VEXU_GHOST/09_External/plotjuggler

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/xander/VEXU_GHOST/install/plotjuggler")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/xander/VEXU_GHOST/build/plotjuggler/ament_cmake_symlink_install/ament_cmake_symlink_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake/plotjugglerTargetsExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake/plotjugglerTargetsExport.cmake"
         "/home/xander/VEXU_GHOST/build/plotjuggler/CMakeFiles/Export/share/plotjuggler/cmake/plotjugglerTargetsExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake/plotjugglerTargetsExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake/plotjugglerTargetsExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake" TYPE FILE FILES "/home/xander/VEXU_GHOST/build/plotjuggler/CMakeFiles/Export/share/plotjuggler/cmake/plotjugglerTargetsExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake" TYPE FILE FILES "/home/xander/VEXU_GHOST/build/plotjuggler/CMakeFiles/Export/share/plotjuggler/cmake/plotjugglerTargetsExport-relwithdebinfo.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake/export_plotjuggler_qwtExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake/export_plotjuggler_qwtExport.cmake"
         "/home/xander/VEXU_GHOST/build/plotjuggler/CMakeFiles/Export/share/plotjuggler/cmake/export_plotjuggler_qwtExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake/export_plotjuggler_qwtExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake/export_plotjuggler_qwtExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake" TYPE FILE FILES "/home/xander/VEXU_GHOST/build/plotjuggler/CMakeFiles/Export/share/plotjuggler/cmake/export_plotjuggler_qwtExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake" TYPE FILE FILES "/home/xander/VEXU_GHOST/build/plotjuggler/CMakeFiles/Export/share/plotjuggler/cmake/export_plotjuggler_qwtExport-relwithdebinfo.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/xander/VEXU_GHOST/build/plotjuggler/libplotjuggler_base.a")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/xander/VEXU_GHOST/build/plotjuggler/3rdparty/qwt/src/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/3rdparty/lz4-1.9.4/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/3rdparty/zstd-1.5.5/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/3rdparty/QCodeEditor/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/3rdparty/color_widgets/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/3rdparty/Qt-Advanced-Docking/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/3rdparty/lua-5.4.3/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/3rdparty/backward-cpp/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_app/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/DataLoadCSV/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/DataLoadMCAP/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/DataLoadParquet/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/DataLoadULog/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/DataStreamSample/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/DataStreamWebsocket/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/DataStreamUDP/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/DataStreamMQTT/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/DataStreamZMQ/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/StatePublisherCSV/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/VideoViewer/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/ToolboxQuaternion/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/ToolboxFFT/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/ToolboxLuaEditor/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/ParserProtobuf/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/ParserROS/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/ParserDataTamer/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/ParserLineInflux/cmake_install.cmake")
  include("/home/xander/VEXU_GHOST/build/plotjuggler/plotjuggler_plugins/PluginsZcm/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/xander/VEXU_GHOST/build/plotjuggler/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
