# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = "/Users/carlbechie/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/223.7571.171/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/carlbechie/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/223.7571.171/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/carlbechie/Dev/advent_of_code_2022

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/carlbechie/Dev/advent_of_code_2022/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/advent_of_code_2022.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/advent_of_code_2022.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/advent_of_code_2022.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/advent_of_code_2022.dir/flags.make

CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.o: CMakeFiles/advent_of_code_2022.dir/flags.make
CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.o: /Users/carlbechie/Dev/advent_of_code_2022/day_01/challenge_1.c
CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.o: CMakeFiles/advent_of_code_2022.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/carlbechie/Dev/advent_of_code_2022/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.o -MF CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.o.d -o CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.o -c /Users/carlbechie/Dev/advent_of_code_2022/day_01/challenge_1.c

CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/carlbechie/Dev/advent_of_code_2022/day_01/challenge_1.c > CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.i

CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/carlbechie/Dev/advent_of_code_2022/day_01/challenge_1.c -o CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.s

CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.o: CMakeFiles/advent_of_code_2022.dir/flags.make
CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.o: /Users/carlbechie/Dev/advent_of_code_2022/day_01/linked_list.c
CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.o: CMakeFiles/advent_of_code_2022.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/carlbechie/Dev/advent_of_code_2022/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.o -MF CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.o.d -o CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.o -c /Users/carlbechie/Dev/advent_of_code_2022/day_01/linked_list.c

CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/carlbechie/Dev/advent_of_code_2022/day_01/linked_list.c > CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.i

CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/carlbechie/Dev/advent_of_code_2022/day_01/linked_list.c -o CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.s

CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.o: CMakeFiles/advent_of_code_2022.dir/flags.make
CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.o: /Users/carlbechie/Dev/advent_of_code_2022/day_01/file_handler.c
CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.o: CMakeFiles/advent_of_code_2022.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/carlbechie/Dev/advent_of_code_2022/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.o -MF CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.o.d -o CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.o -c /Users/carlbechie/Dev/advent_of_code_2022/day_01/file_handler.c

CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/carlbechie/Dev/advent_of_code_2022/day_01/file_handler.c > CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.i

CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/carlbechie/Dev/advent_of_code_2022/day_01/file_handler.c -o CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.s

CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.o: CMakeFiles/advent_of_code_2022.dir/flags.make
CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.o: /Users/carlbechie/Dev/advent_of_code_2022/day_01/error_handler.c
CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.o: CMakeFiles/advent_of_code_2022.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/carlbechie/Dev/advent_of_code_2022/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.o -MF CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.o.d -o CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.o -c /Users/carlbechie/Dev/advent_of_code_2022/day_01/error_handler.c

CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/carlbechie/Dev/advent_of_code_2022/day_01/error_handler.c > CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.i

CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/carlbechie/Dev/advent_of_code_2022/day_01/error_handler.c -o CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.s

# Object files for target advent_of_code_2022
advent_of_code_2022_OBJECTS = \
"CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.o" \
"CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.o" \
"CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.o" \
"CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.o"

# External object files for target advent_of_code_2022
advent_of_code_2022_EXTERNAL_OBJECTS =

advent_of_code_2022: CMakeFiles/advent_of_code_2022.dir/day_01/challenge_1.c.o
advent_of_code_2022: CMakeFiles/advent_of_code_2022.dir/day_01/linked_list.c.o
advent_of_code_2022: CMakeFiles/advent_of_code_2022.dir/day_01/file_handler.c.o
advent_of_code_2022: CMakeFiles/advent_of_code_2022.dir/day_01/error_handler.c.o
advent_of_code_2022: CMakeFiles/advent_of_code_2022.dir/build.make
advent_of_code_2022: CMakeFiles/advent_of_code_2022.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/carlbechie/Dev/advent_of_code_2022/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable advent_of_code_2022"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/advent_of_code_2022.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/advent_of_code_2022.dir/build: advent_of_code_2022
.PHONY : CMakeFiles/advent_of_code_2022.dir/build

CMakeFiles/advent_of_code_2022.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/advent_of_code_2022.dir/cmake_clean.cmake
.PHONY : CMakeFiles/advent_of_code_2022.dir/clean

CMakeFiles/advent_of_code_2022.dir/depend:
	cd /Users/carlbechie/Dev/advent_of_code_2022/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/carlbechie/Dev/advent_of_code_2022 /Users/carlbechie/Dev/advent_of_code_2022 /Users/carlbechie/Dev/advent_of_code_2022/cmake-build-debug /Users/carlbechie/Dev/advent_of_code_2022/cmake-build-debug /Users/carlbechie/Dev/advent_of_code_2022/cmake-build-debug/CMakeFiles/advent_of_code_2022.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/advent_of_code_2022.dir/depend

