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
include src/sort/CMakeFiles/sort.dir/depend.make

# Include the progress variables for this target.
include src/sort/CMakeFiles/sort.dir/progress.make

# Include the compile flags for this target's objects.
include src/sort/CMakeFiles/sort.dir/flags.make

src/sort/CMakeFiles/sort.dir/qsort.c.o: src/sort/CMakeFiles/sort.dir/flags.make
src/sort/CMakeFiles/sort.dir/qsort.c.o: /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/sort/qsort.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/sort/CMakeFiles/sort.dir/qsort.c.o"
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/sort && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/sort.dir/qsort.c.o   -c /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/sort/qsort.c

src/sort/CMakeFiles/sort.dir/qsort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sort.dir/qsort.c.i"
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/sort && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/sort/qsort.c > CMakeFiles/sort.dir/qsort.c.i

src/sort/CMakeFiles/sort.dir/qsort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sort.dir/qsort.c.s"
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/sort && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/sort/qsort.c -o CMakeFiles/sort.dir/qsort.c.s

src/sort/CMakeFiles/sort.dir/qsort.c.o.requires:
.PHONY : src/sort/CMakeFiles/sort.dir/qsort.c.o.requires

src/sort/CMakeFiles/sort.dir/qsort.c.o.provides: src/sort/CMakeFiles/sort.dir/qsort.c.o.requires
	$(MAKE) -f src/sort/CMakeFiles/sort.dir/build.make src/sort/CMakeFiles/sort.dir/qsort.c.o.provides.build
.PHONY : src/sort/CMakeFiles/sort.dir/qsort.c.o.provides

src/sort/CMakeFiles/sort.dir/qsort.c.o.provides.build: src/sort/CMakeFiles/sort.dir/qsort.c.o

sort: src/sort/CMakeFiles/sort.dir/qsort.c.o
sort: src/sort/CMakeFiles/sort.dir/build.make
.PHONY : sort

# Rule to build all files generated by this target.
src/sort/CMakeFiles/sort.dir/build: sort
.PHONY : src/sort/CMakeFiles/sort.dir/build

src/sort/CMakeFiles/sort.dir/requires: src/sort/CMakeFiles/sort.dir/qsort.c.o.requires
.PHONY : src/sort/CMakeFiles/sort.dir/requires

src/sort/CMakeFiles/sort.dir/clean:
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/sort && $(CMAKE_COMMAND) -P CMakeFiles/sort.dir/cmake_clean.cmake
.PHONY : src/sort/CMakeFiles/sort.dir/clean

src/sort/CMakeFiles/sort.dir/depend:
	cd /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0 /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-win64-1.8.0/src/sort /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/sort /home/ETU/charmont/Documents/PhyNumM1/PhysiqueNumerique/lib/pnl-build/src/sort/CMakeFiles/sort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/sort/CMakeFiles/sort.dir/depend

