# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vardank/ICS46/ics-46-hw-9-VardanUCI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vardank/ICS46/ics-46-hw-9-VardanUCI/build

# Include any dependencies generated for this target.
include CMakeFiles/ladder_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ladder_main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ladder_main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ladder_main.dir/flags.make

CMakeFiles/ladder_main.dir/src/ladder.cpp.o: CMakeFiles/ladder_main.dir/flags.make
CMakeFiles/ladder_main.dir/src/ladder.cpp.o: ../src/ladder.cpp
CMakeFiles/ladder_main.dir/src/ladder.cpp.o: CMakeFiles/ladder_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vardank/ICS46/ics-46-hw-9-VardanUCI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ladder_main.dir/src/ladder.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ladder_main.dir/src/ladder.cpp.o -MF CMakeFiles/ladder_main.dir/src/ladder.cpp.o.d -o CMakeFiles/ladder_main.dir/src/ladder.cpp.o -c /home/vardank/ICS46/ics-46-hw-9-VardanUCI/src/ladder.cpp

CMakeFiles/ladder_main.dir/src/ladder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladder_main.dir/src/ladder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vardank/ICS46/ics-46-hw-9-VardanUCI/src/ladder.cpp > CMakeFiles/ladder_main.dir/src/ladder.cpp.i

CMakeFiles/ladder_main.dir/src/ladder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladder_main.dir/src/ladder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vardank/ICS46/ics-46-hw-9-VardanUCI/src/ladder.cpp -o CMakeFiles/ladder_main.dir/src/ladder.cpp.s

CMakeFiles/ladder_main.dir/src/ladder_main.cpp.o: CMakeFiles/ladder_main.dir/flags.make
CMakeFiles/ladder_main.dir/src/ladder_main.cpp.o: ../src/ladder_main.cpp
CMakeFiles/ladder_main.dir/src/ladder_main.cpp.o: CMakeFiles/ladder_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vardank/ICS46/ics-46-hw-9-VardanUCI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ladder_main.dir/src/ladder_main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ladder_main.dir/src/ladder_main.cpp.o -MF CMakeFiles/ladder_main.dir/src/ladder_main.cpp.o.d -o CMakeFiles/ladder_main.dir/src/ladder_main.cpp.o -c /home/vardank/ICS46/ics-46-hw-9-VardanUCI/src/ladder_main.cpp

CMakeFiles/ladder_main.dir/src/ladder_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladder_main.dir/src/ladder_main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vardank/ICS46/ics-46-hw-9-VardanUCI/src/ladder_main.cpp > CMakeFiles/ladder_main.dir/src/ladder_main.cpp.i

CMakeFiles/ladder_main.dir/src/ladder_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladder_main.dir/src/ladder_main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vardank/ICS46/ics-46-hw-9-VardanUCI/src/ladder_main.cpp -o CMakeFiles/ladder_main.dir/src/ladder_main.cpp.s

# Object files for target ladder_main
ladder_main_OBJECTS = \
"CMakeFiles/ladder_main.dir/src/ladder.cpp.o" \
"CMakeFiles/ladder_main.dir/src/ladder_main.cpp.o"

# External object files for target ladder_main
ladder_main_EXTERNAL_OBJECTS =

ladder_main: CMakeFiles/ladder_main.dir/src/ladder.cpp.o
ladder_main: CMakeFiles/ladder_main.dir/src/ladder_main.cpp.o
ladder_main: CMakeFiles/ladder_main.dir/build.make
ladder_main: CMakeFiles/ladder_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vardank/ICS46/ics-46-hw-9-VardanUCI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ladder_main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ladder_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ladder_main.dir/build: ladder_main
.PHONY : CMakeFiles/ladder_main.dir/build

CMakeFiles/ladder_main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ladder_main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ladder_main.dir/clean

CMakeFiles/ladder_main.dir/depend:
	cd /home/vardank/ICS46/ics-46-hw-9-VardanUCI/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vardank/ICS46/ics-46-hw-9-VardanUCI /home/vardank/ICS46/ics-46-hw-9-VardanUCI /home/vardank/ICS46/ics-46-hw-9-VardanUCI/build /home/vardank/ICS46/ics-46-hw-9-VardanUCI/build /home/vardank/ICS46/ics-46-hw-9-VardanUCI/build/CMakeFiles/ladder_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ladder_main.dir/depend

