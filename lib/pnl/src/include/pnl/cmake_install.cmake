# Install script for directory: /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/pnl" TYPE FILE FILES
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_array.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_band_matrix.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_basis.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_cdf.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_complex.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_deprecated.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_fft.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_finance.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_integration.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_interpolation.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_laplace.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_linalgsolver.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_list.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_machine.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_mathtools.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_matrix.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_matvect.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_mpi.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_object.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_optim.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_perm.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_random.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_root.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_sp_matrix.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_specfun.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_templates_off.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_templates_on.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_tridiag_matrix.h"
    "/home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/include/pnl/pnl_vector.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

