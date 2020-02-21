# 0x1C. C - Makefiles
## General
##### What are make, Makefiles
###### Make
In software development, Make is a build automation tool that automatically builds executable programs and libraries from source code by reading files called Makefiles which specify how to derive the target program. Though integrated development environments and language-specific compiler features can also be used to manage a build process, Make remains widely used, especially in Unix and Unix-like operating systems.

Besides building programs, Make can be used to manage any project where some files must be updated automatically from others whenever the others change. 
###### Makefiles 
A makefile is a file (by default named "Makefile") containing a set of directives used by a make build automation tool to generate a target/goal. 

Most often, the makefile directs Make on how to compile and link a program. A makefile works upon the principle that files only need recreating if their dependencies are newer than the file being created/recreated. The makefile is recursively carried out (with dependency prepared before each target depending upon them) until everything has been updated (that requires updating) and the primary/ultimate target is complete. These instructions with their dependencies are specified in a makefile. If none of the files that are prerequisites have been changed since the last time the program was compiled, no actions take place. For large software projects, using Makefiles can substantially reduce build times if only a few source files have changed.

Using C/C++ as an example, when a C/C++ source file is changed, it must be recompiled. If a header file has changed, each C/C++ source file that includes the header file must be recompiled to be safe. Each compilation produces an object file corresponding to the source file. Finally, if any source file has been recompiled, all the object files, whether newly made or saved from previous compilations, must be linked together to produce the new executable program.[1] 
##### When, why and how to use Makefiles
##### What are rules and how to set and use them
##### What are explicit and implicit rules
##### What are the most common / useful rules
##### What are variables and how to set and use them
Makefiles contain five kinds of things: explicit rules, implicit rules, variable definitions, directives, and comments. 
| Explicit rule | Implicit rule |
| ------ | ----------- |
| Says when and how to remake one or more files, called the rule's targets. | Says when and how to remake a class of files based on their names |
| It lists the other files that the targets depend on, called the prerequisites of the target, |  Describes how a target may depend on a file with a name similar to the target |
| Give a recipe to use to create or update the targets. | Gives a recipe to create or update such a target.

| Variable definitions | Directives | Comments # |
| ------------------- | ----------- | -------- |
|  Line that specifies a text string value for a variable that can be substituted into the text later. | an instruction for make to do something special while reading the makefile such as reading another makefile. | In a line of a makefile starts a comment. It and the rest of the line is ignored. |

