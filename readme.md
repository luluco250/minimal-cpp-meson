# Minimalist C++ Meson Project

This is an example project for C++ development using the Meson build system.

A basic project structure is provided with example source code, as well as
utility PowerShell scripts for building and running from within a `Test` folder.

Whether you wish to use the `Test` scripts or not, remove it from git using
`git rm -r Test/` to prevent the files from being versioned in your project
(the folder is already included in the `.gitignore`).

By default, the project targets C++ 20 (or at least `c++2a`), sets the maximum
default warning level in Meson (`warning_level=3`), treats warnings as errors
(`werror`) and sets the build type to `plain` (non-debug).

You may wish to change some of this, but it's a simple quick start.
