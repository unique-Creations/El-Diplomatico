# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/El_Diplomatico.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/El_Diplomatico.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/El_Diplomatico.dir/flags.make

CMakeFiles/El_Diplomatico.dir/graduate_list_generator.c.o: CMakeFiles/El_Diplomatico.dir/flags.make
CMakeFiles/El_Diplomatico.dir/graduate_list_generator.c.o: ../graduate_list_generator.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/El_Diplomatico.dir/graduate_list_generator.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/El_Diplomatico.dir/graduate_list_generator.c.o -c "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/graduate_list_generator.c"

CMakeFiles/El_Diplomatico.dir/graduate_list_generator.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/El_Diplomatico.dir/graduate_list_generator.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/graduate_list_generator.c" > CMakeFiles/El_Diplomatico.dir/graduate_list_generator.c.i

CMakeFiles/El_Diplomatico.dir/graduate_list_generator.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/El_Diplomatico.dir/graduate_list_generator.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/graduate_list_generator.c" -o CMakeFiles/El_Diplomatico.dir/graduate_list_generator.c.s

CMakeFiles/El_Diplomatico.dir/LinkedList.c.o: CMakeFiles/El_Diplomatico.dir/flags.make
CMakeFiles/El_Diplomatico.dir/LinkedList.c.o: ../LinkedList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/El_Diplomatico.dir/LinkedList.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/El_Diplomatico.dir/LinkedList.c.o -c "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/LinkedList.c"

CMakeFiles/El_Diplomatico.dir/LinkedList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/El_Diplomatico.dir/LinkedList.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/LinkedList.c" > CMakeFiles/El_Diplomatico.dir/LinkedList.c.i

CMakeFiles/El_Diplomatico.dir/LinkedList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/El_Diplomatico.dir/LinkedList.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/LinkedList.c" -o CMakeFiles/El_Diplomatico.dir/LinkedList.c.s

# Object files for target El_Diplomatico
El_Diplomatico_OBJECTS = \
"CMakeFiles/El_Diplomatico.dir/graduate_list_generator.c.o" \
"CMakeFiles/El_Diplomatico.dir/LinkedList.c.o"

# External object files for target El_Diplomatico
El_Diplomatico_EXTERNAL_OBJECTS =

El_Diplomatico: CMakeFiles/El_Diplomatico.dir/graduate_list_generator.c.o
El_Diplomatico: CMakeFiles/El_Diplomatico.dir/LinkedList.c.o
El_Diplomatico: CMakeFiles/El_Diplomatico.dir/build.make
El_Diplomatico: CMakeFiles/El_Diplomatico.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable El_Diplomatico"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/El_Diplomatico.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/El_Diplomatico.dir/build: El_Diplomatico
.PHONY : CMakeFiles/El_Diplomatico.dir/build

CMakeFiles/El_Diplomatico.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/El_Diplomatico.dir/cmake_clean.cmake
.PHONY : CMakeFiles/El_Diplomatico.dir/clean

CMakeFiles/El_Diplomatico.dir/depend:
	cd "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico" "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico" "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/cmake-build-debug" "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/cmake-build-debug" "/Users/ernesto/Library/Mobile Documents/iCloud~com~getrocketbook~Rocketbook/Documents/CommunicationNetwork/El-Diplomatico/cmake-build-debug/CMakeFiles/El_Diplomatico.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/El_Diplomatico.dir/depend

