# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build

# Include any dependencies generated for this target.
include examples/CMakeFiles/list_test.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/list_test.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/list_test.dir/flags.make

examples/CMakeFiles/list_test.dir/list_test.c.o: examples/CMakeFiles/list_test.dir/flags.make
examples/CMakeFiles/list_test.dir/list_test.c.o: /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/examples/list_test.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object examples/CMakeFiles/list_test.dir/list_test.c.o"
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/list_test.dir/list_test.c.o   -c /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/examples/list_test.c

examples/CMakeFiles/list_test.dir/list_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/list_test.dir/list_test.c.i"
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/examples/list_test.c > CMakeFiles/list_test.dir/list_test.c.i

examples/CMakeFiles/list_test.dir/list_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/list_test.dir/list_test.c.s"
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/examples/list_test.c -o CMakeFiles/list_test.dir/list_test.c.s

examples/CMakeFiles/list_test.dir/list_test.c.o.requires:
.PHONY : examples/CMakeFiles/list_test.dir/list_test.c.o.requires

examples/CMakeFiles/list_test.dir/list_test.c.o.provides: examples/CMakeFiles/list_test.dir/list_test.c.o.requires
	$(MAKE) -f examples/CMakeFiles/list_test.dir/build.make examples/CMakeFiles/list_test.dir/list_test.c.o.provides.build
.PHONY : examples/CMakeFiles/list_test.dir/list_test.c.o.provides

examples/CMakeFiles/list_test.dir/list_test.c.o.provides.build: examples/CMakeFiles/list_test.dir/list_test.c.o

examples/CMakeFiles/list_test.dir/tests_utils.c.o: examples/CMakeFiles/list_test.dir/flags.make
examples/CMakeFiles/list_test.dir/tests_utils.c.o: /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/examples/tests_utils.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object examples/CMakeFiles/list_test.dir/tests_utils.c.o"
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/list_test.dir/tests_utils.c.o   -c /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/examples/tests_utils.c

examples/CMakeFiles/list_test.dir/tests_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/list_test.dir/tests_utils.c.i"
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/examples/tests_utils.c > CMakeFiles/list_test.dir/tests_utils.c.i

examples/CMakeFiles/list_test.dir/tests_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/list_test.dir/tests_utils.c.s"
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/examples/tests_utils.c -o CMakeFiles/list_test.dir/tests_utils.c.s

examples/CMakeFiles/list_test.dir/tests_utils.c.o.requires:
.PHONY : examples/CMakeFiles/list_test.dir/tests_utils.c.o.requires

examples/CMakeFiles/list_test.dir/tests_utils.c.o.provides: examples/CMakeFiles/list_test.dir/tests_utils.c.o.requires
	$(MAKE) -f examples/CMakeFiles/list_test.dir/build.make examples/CMakeFiles/list_test.dir/tests_utils.c.o.provides.build
.PHONY : examples/CMakeFiles/list_test.dir/tests_utils.c.o.provides

examples/CMakeFiles/list_test.dir/tests_utils.c.o.provides.build: examples/CMakeFiles/list_test.dir/tests_utils.c.o

# Object files for target list_test
list_test_OBJECTS = \
"CMakeFiles/list_test.dir/list_test.c.o" \
"CMakeFiles/list_test.dir/tests_utils.c.o"

# External object files for target list_test
list_test_EXTERNAL_OBJECTS =

examples/list_test: examples/CMakeFiles/list_test.dir/list_test.c.o
examples/list_test: examples/CMakeFiles/list_test.dir/tests_utils.c.o
examples/list_test: examples/CMakeFiles/list_test.dir/build.make
examples/list_test: src/libpnl.so.1.8.0
examples/list_test: /usr/lib/libf77blas.so.3gf
examples/list_test: /usr/lib/libatlas.so.3gf
examples/list_test: /usr/lib/liblapack.so
examples/list_test: /usr/lib/libf77blas.so.3gf
examples/list_test: /usr/lib/libatlas.so.3gf
examples/list_test: /usr/lib/liblapack.so
examples/list_test: examples/CMakeFiles/list_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable list_test"
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/list_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/list_test.dir/build: examples/list_test
.PHONY : examples/CMakeFiles/list_test.dir/build

examples/CMakeFiles/list_test.dir/requires: examples/CMakeFiles/list_test.dir/list_test.c.o.requires
examples/CMakeFiles/list_test.dir/requires: examples/CMakeFiles/list_test.dir/tests_utils.c.o.requires
.PHONY : examples/CMakeFiles/list_test.dir/requires

examples/CMakeFiles/list_test.dir/clean:
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/examples && $(CMAKE_COMMAND) -P CMakeFiles/list_test.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/list_test.dir/clean

examples/CMakeFiles/list_test.dir/depend:
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0 /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/examples /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/examples /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/examples/CMakeFiles/list_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/list_test.dir/depend

