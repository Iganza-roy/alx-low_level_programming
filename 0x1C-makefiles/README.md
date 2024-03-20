# C - Makefiles

**Makefiles** are text files that contain a set of rules for the Make utility to follow. These rules specify how to compile source files, link them together, and generate the final executable or other output files.

## How to Use Makefiles:
- Create a Makefile in the root directory of your project.
- Define rules in the Makefile to specify how to compile source files and generate output files.
- Use variables to store commonly used values such as compiler flags and file paths.
- Use implicit rules to define generic rules for compiling source files based on their file extensions.
- Use explicit rules to specify custom rules for compiling specific files or generating specific targets.

### Common/Useful Rules:
**all:** A rule to build all targets in the Makefile.
**clean:** A rule to remove all generated files (e.g., object files, executables).
**install:** A rule to install the built software or files to the system.
**dist:** A rule to create a distribution package (e.g., tarball, zip file) of the project.

