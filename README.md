![Screenshot](ss.png)

[![Build Status](https://travis-ci.org/hiroMTB/vscode_oF.svg?branch=master)](https://travis-ci.org/hiroMTB/vscode_oF)
[![Build status](https://ci.appveyor.com/api/projects/status/gp66lfcygw2mtnld/branch/master?svg=true)](https://ci.appveyor.com/project/hiroMTB/vscode-of/branch/master)

# vscode_oF
openFrameworks empty example for visual studio code.
Curretly only tested on OSX and Ubuntu(by @anselanza).
Now we can browse source code under /libs/openFrameworks and /addons/* folders.

## Known issue
+ "make clean" does not work (bug of openFrameworks Make system)
+ MacOSX.sdk path hard coded
+ "#include error detected" for header files which is not actualy included
    for example GL/gl.h is for Linux wihch is not included on osx. This shold be fixed with limitSymbolsToIncludedHeaders property in c_cpp_properties.json
    But still vs code claims it is missing.
