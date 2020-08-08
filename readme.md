# Minimalist C++ Meson Project Template

This is an example project for C++ development using the Meson build system.
It is intended as a simple quick start for new projects.

While I created this for my own use, I felt it'd be useful for others.
Some aspects may be updated later, but it should generally help you get started
or simply serve as reference.

A basic project structure is provided with example source code, as well as
utility PowerShell scripts for building and running from within a `Test` folder.

Whether you wish to use the `Test` scripts or not, remove it from git using
`git rm -r Test/` to prevent the files from being versioned in your project
(the folder is already included in the `.gitignore`).

By default, the project targets C++ 20 (or at least `c++2a`), sets the maximum
default warning level in Meson (`warning_level=3`), treats warnings as errors
(`werror`) and sets the build type to `plain` (non-debug).

You'll also want to edit the `.editorconfig` file to match your preferences or
delete it altogether.

I've only used this with Clang + Ninja, you may need to modify the build script
to generate files for Visual Studio or other environments.
