# 0x1C. C - Makefiles
## General
##### What are make, Makefiles
###### Make
In software development, Make is a build automation tool that automatically builds executable programs and libraries from source code by reading files called Makefiles which specify how to derive the target program. Though integrated development environments and language-specific compiler features can also be used to manage a build process, Make remains widely used, especially in Unix and Unix-like operating systems.

Besides building programs, Make can be used to manage any project where some files must be updated automatically from others whenever the others change. 
###### Makefiles 
A makefile is a file (by default named "Makefile") containing a set of directives used by a make build automation tool to generate a target/goal. 
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

