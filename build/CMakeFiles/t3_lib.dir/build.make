# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/maverick/personal_projects/t3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maverick/personal_projects/t3/build

# Include any dependencies generated for this target.
include CMakeFiles/t3_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/t3_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/t3_lib.dir/flags.make

CMakeFiles/t3_lib.dir/src/square.cpp.o: CMakeFiles/t3_lib.dir/flags.make
CMakeFiles/t3_lib.dir/src/square.cpp.o: ../src/square.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maverick/personal_projects/t3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/t3_lib.dir/src/square.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/t3_lib.dir/src/square.cpp.o -c /home/maverick/personal_projects/t3/src/square.cpp

CMakeFiles/t3_lib.dir/src/square.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/t3_lib.dir/src/square.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maverick/personal_projects/t3/src/square.cpp > CMakeFiles/t3_lib.dir/src/square.cpp.i

CMakeFiles/t3_lib.dir/src/square.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/t3_lib.dir/src/square.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maverick/personal_projects/t3/src/square.cpp -o CMakeFiles/t3_lib.dir/src/square.cpp.s

CMakeFiles/t3_lib.dir/src/board.cpp.o: CMakeFiles/t3_lib.dir/flags.make
CMakeFiles/t3_lib.dir/src/board.cpp.o: ../src/board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maverick/personal_projects/t3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/t3_lib.dir/src/board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/t3_lib.dir/src/board.cpp.o -c /home/maverick/personal_projects/t3/src/board.cpp

CMakeFiles/t3_lib.dir/src/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/t3_lib.dir/src/board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maverick/personal_projects/t3/src/board.cpp > CMakeFiles/t3_lib.dir/src/board.cpp.i

CMakeFiles/t3_lib.dir/src/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/t3_lib.dir/src/board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maverick/personal_projects/t3/src/board.cpp -o CMakeFiles/t3_lib.dir/src/board.cpp.s

# Object files for target t3_lib
t3_lib_OBJECTS = \
"CMakeFiles/t3_lib.dir/src/square.cpp.o" \
"CMakeFiles/t3_lib.dir/src/board.cpp.o"

# External object files for target t3_lib
t3_lib_EXTERNAL_OBJECTS =

libt3_lib.a: CMakeFiles/t3_lib.dir/src/square.cpp.o
libt3_lib.a: CMakeFiles/t3_lib.dir/src/board.cpp.o
libt3_lib.a: CMakeFiles/t3_lib.dir/build.make
libt3_lib.a: CMakeFiles/t3_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maverick/personal_projects/t3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libt3_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/t3_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/t3_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/t3_lib.dir/build: libt3_lib.a

.PHONY : CMakeFiles/t3_lib.dir/build

CMakeFiles/t3_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/t3_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/t3_lib.dir/clean

CMakeFiles/t3_lib.dir/depend:
	cd /home/maverick/personal_projects/t3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maverick/personal_projects/t3 /home/maverick/personal_projects/t3 /home/maverick/personal_projects/t3/build /home/maverick/personal_projects/t3/build /home/maverick/personal_projects/t3/build/CMakeFiles/t3_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/t3_lib.dir/depend

