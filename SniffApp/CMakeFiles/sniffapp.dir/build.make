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
CMAKE_SOURCE_DIR = /home/livknight/projects/SniffApp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/livknight/projects/SniffApp

# Include any dependencies generated for this target.
include CMakeFiles/sniffapp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sniffapp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sniffapp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sniffapp.dir/flags.make

CMakeFiles/sniffapp.dir/main.cpp.o: CMakeFiles/sniffapp.dir/flags.make
CMakeFiles/sniffapp.dir/main.cpp.o: main.cpp
CMakeFiles/sniffapp.dir/main.cpp.o: CMakeFiles/sniffapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/livknight/projects/SniffApp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sniffapp.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sniffapp.dir/main.cpp.o -MF CMakeFiles/sniffapp.dir/main.cpp.o.d -o CMakeFiles/sniffapp.dir/main.cpp.o -c /home/livknight/projects/SniffApp/main.cpp

CMakeFiles/sniffapp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sniffapp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/livknight/projects/SniffApp/main.cpp > CMakeFiles/sniffapp.dir/main.cpp.i

CMakeFiles/sniffapp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sniffapp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/livknight/projects/SniffApp/main.cpp -o CMakeFiles/sniffapp.dir/main.cpp.s

CMakeFiles/sniffapp.dir/Params.cpp.o: CMakeFiles/sniffapp.dir/flags.make
CMakeFiles/sniffapp.dir/Params.cpp.o: Params.cpp
CMakeFiles/sniffapp.dir/Params.cpp.o: CMakeFiles/sniffapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/livknight/projects/SniffApp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sniffapp.dir/Params.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sniffapp.dir/Params.cpp.o -MF CMakeFiles/sniffapp.dir/Params.cpp.o.d -o CMakeFiles/sniffapp.dir/Params.cpp.o -c /home/livknight/projects/SniffApp/Params.cpp

CMakeFiles/sniffapp.dir/Params.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sniffapp.dir/Params.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/livknight/projects/SniffApp/Params.cpp > CMakeFiles/sniffapp.dir/Params.cpp.i

CMakeFiles/sniffapp.dir/Params.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sniffapp.dir/Params.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/livknight/projects/SniffApp/Params.cpp -o CMakeFiles/sniffapp.dir/Params.cpp.s

CMakeFiles/sniffapp.dir/Sniff.cpp.o: CMakeFiles/sniffapp.dir/flags.make
CMakeFiles/sniffapp.dir/Sniff.cpp.o: Sniff.cpp
CMakeFiles/sniffapp.dir/Sniff.cpp.o: CMakeFiles/sniffapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/livknight/projects/SniffApp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/sniffapp.dir/Sniff.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sniffapp.dir/Sniff.cpp.o -MF CMakeFiles/sniffapp.dir/Sniff.cpp.o.d -o CMakeFiles/sniffapp.dir/Sniff.cpp.o -c /home/livknight/projects/SniffApp/Sniff.cpp

CMakeFiles/sniffapp.dir/Sniff.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sniffapp.dir/Sniff.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/livknight/projects/SniffApp/Sniff.cpp > CMakeFiles/sniffapp.dir/Sniff.cpp.i

CMakeFiles/sniffapp.dir/Sniff.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sniffapp.dir/Sniff.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/livknight/projects/SniffApp/Sniff.cpp -o CMakeFiles/sniffapp.dir/Sniff.cpp.s

CMakeFiles/sniffapp.dir/FileID.cpp.o: CMakeFiles/sniffapp.dir/flags.make
CMakeFiles/sniffapp.dir/FileID.cpp.o: FileID.cpp
CMakeFiles/sniffapp.dir/FileID.cpp.o: CMakeFiles/sniffapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/livknight/projects/SniffApp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/sniffapp.dir/FileID.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sniffapp.dir/FileID.cpp.o -MF CMakeFiles/sniffapp.dir/FileID.cpp.o.d -o CMakeFiles/sniffapp.dir/FileID.cpp.o -c /home/livknight/projects/SniffApp/FileID.cpp

CMakeFiles/sniffapp.dir/FileID.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sniffapp.dir/FileID.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/livknight/projects/SniffApp/FileID.cpp > CMakeFiles/sniffapp.dir/FileID.cpp.i

CMakeFiles/sniffapp.dir/FileID.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sniffapp.dir/FileID.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/livknight/projects/SniffApp/FileID.cpp -o CMakeFiles/sniffapp.dir/FileID.cpp.s

CMakeFiles/sniffapp.dir/tools.cpp.o: CMakeFiles/sniffapp.dir/flags.make
CMakeFiles/sniffapp.dir/tools.cpp.o: tools.cpp
CMakeFiles/sniffapp.dir/tools.cpp.o: CMakeFiles/sniffapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/livknight/projects/SniffApp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/sniffapp.dir/tools.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sniffapp.dir/tools.cpp.o -MF CMakeFiles/sniffapp.dir/tools.cpp.o.d -o CMakeFiles/sniffapp.dir/tools.cpp.o -c /home/livknight/projects/SniffApp/tools.cpp

CMakeFiles/sniffapp.dir/tools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sniffapp.dir/tools.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/livknight/projects/SniffApp/tools.cpp > CMakeFiles/sniffapp.dir/tools.cpp.i

CMakeFiles/sniffapp.dir/tools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sniffapp.dir/tools.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/livknight/projects/SniffApp/tools.cpp -o CMakeFiles/sniffapp.dir/tools.cpp.s

# Object files for target sniffapp
sniffapp_OBJECTS = \
"CMakeFiles/sniffapp.dir/main.cpp.o" \
"CMakeFiles/sniffapp.dir/Params.cpp.o" \
"CMakeFiles/sniffapp.dir/Sniff.cpp.o" \
"CMakeFiles/sniffapp.dir/FileID.cpp.o" \
"CMakeFiles/sniffapp.dir/tools.cpp.o"

# External object files for target sniffapp
sniffapp_EXTERNAL_OBJECTS =

sniffapp: CMakeFiles/sniffapp.dir/main.cpp.o
sniffapp: CMakeFiles/sniffapp.dir/Params.cpp.o
sniffapp: CMakeFiles/sniffapp.dir/Sniff.cpp.o
sniffapp: CMakeFiles/sniffapp.dir/FileID.cpp.o
sniffapp: CMakeFiles/sniffapp.dir/tools.cpp.o
sniffapp: CMakeFiles/sniffapp.dir/build.make
sniffapp: CMakeFiles/sniffapp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/livknight/projects/SniffApp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable sniffapp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sniffapp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sniffapp.dir/build: sniffapp
.PHONY : CMakeFiles/sniffapp.dir/build

CMakeFiles/sniffapp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sniffapp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sniffapp.dir/clean

CMakeFiles/sniffapp.dir/depend:
	cd /home/livknight/projects/SniffApp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/livknight/projects/SniffApp /home/livknight/projects/SniffApp /home/livknight/projects/SniffApp /home/livknight/projects/SniffApp /home/livknight/projects/SniffApp/CMakeFiles/sniffapp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sniffapp.dir/depend

