# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/126/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/126/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/arseny/CLionProjects/lab-01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/arseny/CLionProjects/lab-01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/json.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/json.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/json.dir/flags.make

CMakeFiles/json.dir/sources/source.cpp.o: CMakeFiles/json.dir/flags.make
CMakeFiles/json.dir/sources/source.cpp.o: ../sources/source.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arseny/CLionProjects/lab-01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/json.dir/sources/source.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/json.dir/sources/source.cpp.o -c /home/arseny/CLionProjects/lab-01/sources/source.cpp

CMakeFiles/json.dir/sources/source.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/json.dir/sources/source.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arseny/CLionProjects/lab-01/sources/source.cpp > CMakeFiles/json.dir/sources/source.cpp.i

CMakeFiles/json.dir/sources/source.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/json.dir/sources/source.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arseny/CLionProjects/lab-01/sources/source.cpp -o CMakeFiles/json.dir/sources/source.cpp.s

CMakeFiles/json.dir/sources/cast.cpp.o: CMakeFiles/json.dir/flags.make
CMakeFiles/json.dir/sources/cast.cpp.o: ../sources/cast.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arseny/CLionProjects/lab-01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/json.dir/sources/cast.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/json.dir/sources/cast.cpp.o -c /home/arseny/CLionProjects/lab-01/sources/cast.cpp

CMakeFiles/json.dir/sources/cast.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/json.dir/sources/cast.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arseny/CLionProjects/lab-01/sources/cast.cpp > CMakeFiles/json.dir/sources/cast.cpp.i

CMakeFiles/json.dir/sources/cast.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/json.dir/sources/cast.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arseny/CLionProjects/lab-01/sources/cast.cpp -o CMakeFiles/json.dir/sources/cast.cpp.s

# Object files for target json
json_OBJECTS = \
"CMakeFiles/json.dir/sources/source.cpp.o" \
"CMakeFiles/json.dir/sources/cast.cpp.o"

# External object files for target json
json_EXTERNAL_OBJECTS =

json: CMakeFiles/json.dir/sources/source.cpp.o
json: CMakeFiles/json.dir/sources/cast.cpp.o
json: CMakeFiles/json.dir/build.make
json: CMakeFiles/json.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/arseny/CLionProjects/lab-01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable json"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/json.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/json.dir/build: json

.PHONY : CMakeFiles/json.dir/build

CMakeFiles/json.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/json.dir/cmake_clean.cmake
.PHONY : CMakeFiles/json.dir/clean

CMakeFiles/json.dir/depend:
	cd /home/arseny/CLionProjects/lab-01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/arseny/CLionProjects/lab-01 /home/arseny/CLionProjects/lab-01 /home/arseny/CLionProjects/lab-01/cmake-build-debug /home/arseny/CLionProjects/lab-01/cmake-build-debug /home/arseny/CLionProjects/lab-01/cmake-build-debug/CMakeFiles/json.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/json.dir/depend

