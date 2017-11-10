# Install script for directory: /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Debug")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/pnl.def")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpnl.so.1.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpnl.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/lib")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/libpnl.so.1.8.0"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/libpnl.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpnl.so.1.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpnl.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
           NEW_RPATH "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/lib")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pnl" TYPE FILE FILES "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/PnlConfig.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/include/pnl/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/objects/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/libamos/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/librand/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/fft/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/math/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/linalg/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/sort/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/specfun/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/libcephes/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/libinteg/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/interpol/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/roots/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/libminpack/cmake_install.cmake")
  INCLUDE("/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/optim/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

