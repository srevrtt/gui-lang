# GuiLang test-v1.0.0

## **About**

GuiLang is going to be a special purpose programming language aimed for desktop app development. **GuiLang is *not* intended for actual use yet.**

### **Purpose**

There are many problems with today's current programming languages for desktop app development. Some of them are slow, while others are too complicated. This is the problem that GuiLang is aiming at solving. It is going to be a fast, compiled programming language with built-in cross platform windowing & GUI support. The scope of this project is going to be fairly small at the beginning.

### **Building**
If you really want to build this hot garbage state of this project, then you can use CMake on all platforms. On Windows, make sure you have CMake and MinGW installed. Clone the repository, make a build directory, navigate into the build directory, and run the command `cmake .. -G "MinGW Makefiles"`. Run `make` to build and run the final executable.

On UNIX and UNIX-like systems, do the same thing with a Windows build but the CMake command should just be `cmake ..`. Then run `make` and run the executable.

### **Documentation**
Coming soon. (once this project is in alpha)

### **Current State**
The current state of this project is simply a lexer. Nothing much else.

### **Roadmap**

**The Language**
- [ ] Parser and interpreter
- [ ] Print statement
- [ ] Variables
- [ ] If/elseif/else statements
- [ ] Functions
- [ ] Loops (for loop, while loop)
- [ ] Scope
- [ ] Dynamic types
- [ ] Null safety
- [ ] Memory safety
- [ ] C API

**GUI Stuff**

Once the language is semi-complete.
