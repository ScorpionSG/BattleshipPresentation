# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/alielnour/CLionProjects/BattleshipGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alielnour/CLionProjects/BattleshipGame/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BattleshipGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BattleshipGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BattleshipGame.dir/flags.make

CMakeFiles/BattleshipGame.dir/main.cpp.o: CMakeFiles/BattleshipGame.dir/flags.make
CMakeFiles/BattleshipGame.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alielnour/CLionProjects/BattleshipGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BattleshipGame.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BattleshipGame.dir/main.cpp.o -c /Users/alielnour/CLionProjects/BattleshipGame/main.cpp

CMakeFiles/BattleshipGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BattleshipGame.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alielnour/CLionProjects/BattleshipGame/main.cpp > CMakeFiles/BattleshipGame.dir/main.cpp.i

CMakeFiles/BattleshipGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BattleshipGame.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alielnour/CLionProjects/BattleshipGame/main.cpp -o CMakeFiles/BattleshipGame.dir/main.cpp.s

CMakeFiles/BattleshipGame.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/BattleshipGame.dir/main.cpp.o.requires

CMakeFiles/BattleshipGame.dir/main.cpp.o.provides: CMakeFiles/BattleshipGame.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/BattleshipGame.dir/build.make CMakeFiles/BattleshipGame.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/BattleshipGame.dir/main.cpp.o.provides

CMakeFiles/BattleshipGame.dir/main.cpp.o.provides.build: CMakeFiles/BattleshipGame.dir/main.cpp.o


CMakeFiles/BattleshipGame.dir/src/Board.cpp.o: CMakeFiles/BattleshipGame.dir/flags.make
CMakeFiles/BattleshipGame.dir/src/Board.cpp.o: ../src/Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alielnour/CLionProjects/BattleshipGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BattleshipGame.dir/src/Board.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BattleshipGame.dir/src/Board.cpp.o -c /Users/alielnour/CLionProjects/BattleshipGame/src/Board.cpp

CMakeFiles/BattleshipGame.dir/src/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BattleshipGame.dir/src/Board.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alielnour/CLionProjects/BattleshipGame/src/Board.cpp > CMakeFiles/BattleshipGame.dir/src/Board.cpp.i

CMakeFiles/BattleshipGame.dir/src/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BattleshipGame.dir/src/Board.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alielnour/CLionProjects/BattleshipGame/src/Board.cpp -o CMakeFiles/BattleshipGame.dir/src/Board.cpp.s

CMakeFiles/BattleshipGame.dir/src/Board.cpp.o.requires:

.PHONY : CMakeFiles/BattleshipGame.dir/src/Board.cpp.o.requires

CMakeFiles/BattleshipGame.dir/src/Board.cpp.o.provides: CMakeFiles/BattleshipGame.dir/src/Board.cpp.o.requires
	$(MAKE) -f CMakeFiles/BattleshipGame.dir/build.make CMakeFiles/BattleshipGame.dir/src/Board.cpp.o.provides.build
.PHONY : CMakeFiles/BattleshipGame.dir/src/Board.cpp.o.provides

CMakeFiles/BattleshipGame.dir/src/Board.cpp.o.provides.build: CMakeFiles/BattleshipGame.dir/src/Board.cpp.o


CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o: CMakeFiles/BattleshipGame.dir/flags.make
CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o: ../src/Tile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alielnour/CLionProjects/BattleshipGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o -c /Users/alielnour/CLionProjects/BattleshipGame/src/Tile.cpp

CMakeFiles/BattleshipGame.dir/src/Tile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BattleshipGame.dir/src/Tile.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alielnour/CLionProjects/BattleshipGame/src/Tile.cpp > CMakeFiles/BattleshipGame.dir/src/Tile.cpp.i

CMakeFiles/BattleshipGame.dir/src/Tile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BattleshipGame.dir/src/Tile.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alielnour/CLionProjects/BattleshipGame/src/Tile.cpp -o CMakeFiles/BattleshipGame.dir/src/Tile.cpp.s

CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o.requires:

.PHONY : CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o.requires

CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o.provides: CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o.requires
	$(MAKE) -f CMakeFiles/BattleshipGame.dir/build.make CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o.provides.build
.PHONY : CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o.provides

CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o.provides.build: CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o


CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o: CMakeFiles/BattleshipGame.dir/flags.make
CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o: ../src/Cursor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alielnour/CLionProjects/BattleshipGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o -c /Users/alielnour/CLionProjects/BattleshipGame/src/Cursor.cpp

CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alielnour/CLionProjects/BattleshipGame/src/Cursor.cpp > CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.i

CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alielnour/CLionProjects/BattleshipGame/src/Cursor.cpp -o CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.s

CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o.requires:

.PHONY : CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o.requires

CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o.provides: CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o.requires
	$(MAKE) -f CMakeFiles/BattleshipGame.dir/build.make CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o.provides.build
.PHONY : CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o.provides

CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o.provides.build: CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o


CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o: CMakeFiles/BattleshipGame.dir/flags.make
CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o: ../src/Ship.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alielnour/CLionProjects/BattleshipGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o -c /Users/alielnour/CLionProjects/BattleshipGame/src/Ship.cpp

CMakeFiles/BattleshipGame.dir/src/Ship.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BattleshipGame.dir/src/Ship.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alielnour/CLionProjects/BattleshipGame/src/Ship.cpp > CMakeFiles/BattleshipGame.dir/src/Ship.cpp.i

CMakeFiles/BattleshipGame.dir/src/Ship.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BattleshipGame.dir/src/Ship.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alielnour/CLionProjects/BattleshipGame/src/Ship.cpp -o CMakeFiles/BattleshipGame.dir/src/Ship.cpp.s

CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o.requires:

.PHONY : CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o.requires

CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o.provides: CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o.requires
	$(MAKE) -f CMakeFiles/BattleshipGame.dir/build.make CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o.provides.build
.PHONY : CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o.provides

CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o.provides.build: CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o


# Object files for target BattleshipGame
BattleshipGame_OBJECTS = \
"CMakeFiles/BattleshipGame.dir/main.cpp.o" \
"CMakeFiles/BattleshipGame.dir/src/Board.cpp.o" \
"CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o" \
"CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o" \
"CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o"

# External object files for target BattleshipGame
BattleshipGame_EXTERNAL_OBJECTS =

BattleshipGame: CMakeFiles/BattleshipGame.dir/main.cpp.o
BattleshipGame: CMakeFiles/BattleshipGame.dir/src/Board.cpp.o
BattleshipGame: CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o
BattleshipGame: CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o
BattleshipGame: CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o
BattleshipGame: CMakeFiles/BattleshipGame.dir/build.make
BattleshipGame: CMakeFiles/BattleshipGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alielnour/CLionProjects/BattleshipGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable BattleshipGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BattleshipGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BattleshipGame.dir/build: BattleshipGame

.PHONY : CMakeFiles/BattleshipGame.dir/build

CMakeFiles/BattleshipGame.dir/requires: CMakeFiles/BattleshipGame.dir/main.cpp.o.requires
CMakeFiles/BattleshipGame.dir/requires: CMakeFiles/BattleshipGame.dir/src/Board.cpp.o.requires
CMakeFiles/BattleshipGame.dir/requires: CMakeFiles/BattleshipGame.dir/src/Tile.cpp.o.requires
CMakeFiles/BattleshipGame.dir/requires: CMakeFiles/BattleshipGame.dir/src/Cursor.cpp.o.requires
CMakeFiles/BattleshipGame.dir/requires: CMakeFiles/BattleshipGame.dir/src/Ship.cpp.o.requires

.PHONY : CMakeFiles/BattleshipGame.dir/requires

CMakeFiles/BattleshipGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BattleshipGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BattleshipGame.dir/clean

CMakeFiles/BattleshipGame.dir/depend:
	cd /Users/alielnour/CLionProjects/BattleshipGame/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alielnour/CLionProjects/BattleshipGame /Users/alielnour/CLionProjects/BattleshipGame /Users/alielnour/CLionProjects/BattleshipGame/cmake-build-debug /Users/alielnour/CLionProjects/BattleshipGame/cmake-build-debug /Users/alielnour/CLionProjects/BattleshipGame/cmake-build-debug/CMakeFiles/BattleshipGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BattleshipGame.dir/depend

