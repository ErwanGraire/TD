# Install script for directory: C:/Users/erwan.graire/source/repos/TD/Projet_2024_2025

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/erwan.graire/Source/Repos/TD/out/install/x64-Debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/erwan.graire/source/repos/TD/out/build/x64-Debug/Projet_2024_2025/thread/cmake_install.cmake")
  include("C:/Users/erwan.graire/source/repos/TD/out/build/x64-Debug/Projet_2024_2025/SFML_examples/cmake_install.cmake")
  include("C:/Users/erwan.graire/source/repos/TD/out/build/x64-Debug/Projet_2024_2025/Test_Plane/cmake_install.cmake")
  include("C:/Users/erwan.graire/source/repos/TD/out/build/x64-Debug/Projet_2024_2025/Forward_declaration/cmake_install.cmake")

endif()

