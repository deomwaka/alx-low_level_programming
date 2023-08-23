# C - Makefiles
A Makefile is a text file that contains a set of instructions, known as rules, that define how to build a project. Each rule consists of a target, dependencies, and a series of commands. When you run the make command, it reads the Makefile and executes the commands associated with the specified target. Makefile rules are written in a specific syntax, which is typically tab-indented and is designed to be human-readable.
## Here's a breakdown of the main components of a Makefile:
1. Targets:
*These are the things you want to build, such as executable files, libraries, documentation, etc. Each target has associated rules that specify how to build it.*

2. Dependencies:
*These are the files or other targets that need to be available before the target can be built. If a dependency is newer than the target or doesn't exist, the associated commands are executed to update the target.*

3. Commands:
*These are the shell commands that are executed when a target needs to be built. They typically involve compilation, linking, copying files, or any other necessary steps.*
