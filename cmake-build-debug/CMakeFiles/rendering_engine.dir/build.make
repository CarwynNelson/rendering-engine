# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /Users/carwynnelson/code/rendering-engine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/carwynnelson/code/rendering-engine/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/rendering_engine.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rendering_engine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rendering_engine.dir/flags.make

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o: CMakeFiles/rendering_engine.dir/flags.make
CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o: ../RenderEngine/Private/Application.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/carwynnelson/code/rendering-engine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o -c /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Application.cpp

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Application.cpp > CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.i

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Application.cpp -o CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.s

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o.requires:

.PHONY : CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o.requires

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o.provides: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o.requires
	$(MAKE) -f CMakeFiles/rendering_engine.dir/build.make CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o.provides.build
.PHONY : CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o.provides

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o.provides.build: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o


CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o: CMakeFiles/rendering_engine.dir/flags.make
CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o: ../RenderEngine/Private/Display.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/carwynnelson/code/rendering-engine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o -c /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Display.cpp

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Display.cpp > CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.i

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Display.cpp -o CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.s

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o.requires:

.PHONY : CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o.requires

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o.provides: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o.requires
	$(MAKE) -f CMakeFiles/rendering_engine.dir/build.make CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o.provides.build
.PHONY : CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o.provides

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o.provides.build: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o


CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o: CMakeFiles/rendering_engine.dir/flags.make
CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o: ../RenderEngine/Private/Filesystem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/carwynnelson/code/rendering-engine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o -c /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Filesystem.cpp

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Filesystem.cpp > CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.i

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Filesystem.cpp -o CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.s

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o.requires:

.PHONY : CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o.requires

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o.provides: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o.requires
	$(MAKE) -f CMakeFiles/rendering_engine.dir/build.make CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o.provides.build
.PHONY : CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o.provides

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o.provides.build: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o


CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o: CMakeFiles/rendering_engine.dir/flags.make
CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o: ../RenderEngine/Private/Loader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/carwynnelson/code/rendering-engine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o -c /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Loader.cpp

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Loader.cpp > CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.i

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Loader.cpp -o CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.s

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o.requires:

.PHONY : CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o.requires

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o.provides: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o.requires
	$(MAKE) -f CMakeFiles/rendering_engine.dir/build.make CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o.provides.build
.PHONY : CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o.provides

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o.provides.build: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o


CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o: CMakeFiles/rendering_engine.dir/flags.make
CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o: ../RenderEngine/Private/Renderer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/carwynnelson/code/rendering-engine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o -c /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Renderer.cpp

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Renderer.cpp > CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.i

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Renderer.cpp -o CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.s

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o.requires:

.PHONY : CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o.requires

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o.provides: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o.requires
	$(MAKE) -f CMakeFiles/rendering_engine.dir/build.make CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o.provides.build
.PHONY : CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o.provides

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o.provides.build: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o


CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o: CMakeFiles/rendering_engine.dir/flags.make
CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o: ../RenderEngine/Private/Shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/carwynnelson/code/rendering-engine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o -c /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Shader.cpp

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Shader.cpp > CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.i

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/carwynnelson/code/rendering-engine/RenderEngine/Private/Shader.cpp -o CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.s

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o.requires:

.PHONY : CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o.requires

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o.provides: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o.requires
	$(MAKE) -f CMakeFiles/rendering_engine.dir/build.make CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o.provides.build
.PHONY : CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o.provides

CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o.provides.build: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o


CMakeFiles/rendering_engine.dir/Main.cpp.o: CMakeFiles/rendering_engine.dir/flags.make
CMakeFiles/rendering_engine.dir/Main.cpp.o: ../Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/carwynnelson/code/rendering-engine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/rendering_engine.dir/Main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rendering_engine.dir/Main.cpp.o -c /Users/carwynnelson/code/rendering-engine/Main.cpp

CMakeFiles/rendering_engine.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rendering_engine.dir/Main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/carwynnelson/code/rendering-engine/Main.cpp > CMakeFiles/rendering_engine.dir/Main.cpp.i

CMakeFiles/rendering_engine.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rendering_engine.dir/Main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/carwynnelson/code/rendering-engine/Main.cpp -o CMakeFiles/rendering_engine.dir/Main.cpp.s

CMakeFiles/rendering_engine.dir/Main.cpp.o.requires:

.PHONY : CMakeFiles/rendering_engine.dir/Main.cpp.o.requires

CMakeFiles/rendering_engine.dir/Main.cpp.o.provides: CMakeFiles/rendering_engine.dir/Main.cpp.o.requires
	$(MAKE) -f CMakeFiles/rendering_engine.dir/build.make CMakeFiles/rendering_engine.dir/Main.cpp.o.provides.build
.PHONY : CMakeFiles/rendering_engine.dir/Main.cpp.o.provides

CMakeFiles/rendering_engine.dir/Main.cpp.o.provides.build: CMakeFiles/rendering_engine.dir/Main.cpp.o


# Object files for target rendering_engine
rendering_engine_OBJECTS = \
"CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o" \
"CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o" \
"CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o" \
"CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o" \
"CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o" \
"CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o" \
"CMakeFiles/rendering_engine.dir/Main.cpp.o"

# External object files for target rendering_engine
rendering_engine_EXTERNAL_OBJECTS =

rendering_engine: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o
rendering_engine: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o
rendering_engine: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o
rendering_engine: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o
rendering_engine: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o
rendering_engine: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o
rendering_engine: CMakeFiles/rendering_engine.dir/Main.cpp.o
rendering_engine: CMakeFiles/rendering_engine.dir/build.make
rendering_engine: vendor/glfw/src/libglfw3.a
rendering_engine: /usr/local/lib/libGLEW.dylib
rendering_engine: CMakeFiles/rendering_engine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/carwynnelson/code/rendering-engine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable rendering_engine"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rendering_engine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rendering_engine.dir/build: rendering_engine

.PHONY : CMakeFiles/rendering_engine.dir/build

CMakeFiles/rendering_engine.dir/requires: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Application.cpp.o.requires
CMakeFiles/rendering_engine.dir/requires: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Display.cpp.o.requires
CMakeFiles/rendering_engine.dir/requires: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Filesystem.cpp.o.requires
CMakeFiles/rendering_engine.dir/requires: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Loader.cpp.o.requires
CMakeFiles/rendering_engine.dir/requires: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Renderer.cpp.o.requires
CMakeFiles/rendering_engine.dir/requires: CMakeFiles/rendering_engine.dir/RenderEngine/Private/Shader.cpp.o.requires
CMakeFiles/rendering_engine.dir/requires: CMakeFiles/rendering_engine.dir/Main.cpp.o.requires

.PHONY : CMakeFiles/rendering_engine.dir/requires

CMakeFiles/rendering_engine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rendering_engine.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rendering_engine.dir/clean

CMakeFiles/rendering_engine.dir/depend:
	cd /Users/carwynnelson/code/rendering-engine/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/carwynnelson/code/rendering-engine /Users/carwynnelson/code/rendering-engine /Users/carwynnelson/code/rendering-engine/cmake-build-debug /Users/carwynnelson/code/rendering-engine/cmake-build-debug /Users/carwynnelson/code/rendering-engine/cmake-build-debug/CMakeFiles/rendering_engine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rendering_engine.dir/depend
