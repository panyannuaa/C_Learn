# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /home/yapan/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/yapan/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yapan/CLionProjects/Test-20220512

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yapan/CLionProjects/Test-20220512/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Test_20220512.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Test_20220512.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test_20220512.dir/flags.make

CMakeFiles/Test_20220512.dir/main.c.o: CMakeFiles/Test_20220512.dir/flags.make
CMakeFiles/Test_20220512.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yapan/CLionProjects/Test-20220512/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Test_20220512.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Test_20220512.dir/main.c.o   -c /home/yapan/CLionProjects/Test-20220512/main.c

CMakeFiles/Test_20220512.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Test_20220512.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yapan/CLionProjects/Test-20220512/main.c > CMakeFiles/Test_20220512.dir/main.c.i

CMakeFiles/Test_20220512.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Test_20220512.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yapan/CLionProjects/Test-20220512/main.c -o CMakeFiles/Test_20220512.dir/main.c.s

# Object files for target Test_20220512
Test_20220512_OBJECTS = \
"CMakeFiles/Test_20220512.dir/main.c.o"

# External object files for target Test_20220512
Test_20220512_EXTERNAL_OBJECTS =

Test_20220512: CMakeFiles/Test_20220512.dir/main.c.o
Test_20220512: CMakeFiles/Test_20220512.dir/build.make
Test_20220512: CMakeFiles/Test_20220512.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yapan/CLionProjects/Test-20220512/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Test_20220512"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test_20220512.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test_20220512.dir/build: Test_20220512

.PHONY : CMakeFiles/Test_20220512.dir/build

CMakeFiles/Test_20220512.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Test_20220512.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Test_20220512.dir/clean

CMakeFiles/Test_20220512.dir/depend:
	cd /home/yapan/CLionProjects/Test-20220512/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yapan/CLionProjects/Test-20220512 /home/yapan/CLionProjects/Test-20220512 /home/yapan/CLionProjects/Test-20220512/cmake-build-debug /home/yapan/CLionProjects/Test-20220512/cmake-build-debug /home/yapan/CLionProjects/Test-20220512/cmake-build-debug/CMakeFiles/Test_20220512.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Test_20220512.dir/depend
