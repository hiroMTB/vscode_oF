![Screenshot](ss.png)

[![Build Status](https://travis-ci.org/hiroMTB/vscode_oF.svg?branch=master)](https://travis-ci.org/hiroMTB/vscode_oF)
[![Build status](https://ci.appveyor.com/api/projects/status/gp66lfcygw2mtnld/branch/master?svg=true)](https://ci.appveyor.com/project/hiroMTB/vscode-of/branch/master)

# vscode_oF
openFrameworks empty example for Microsoft Visual Studio Code IDE(vscode).
This is not addon. (folder structure is same with addoon)

# How to compile example project
1. download and install vscode.
2. download or clone this repositry to your /oF/apps folder
2. open project file with vscode(vscode_oF.code-workspace).
3. default `Ctrl+Shift+B` shortcut act as `build test(release)`(I edited original tasks.json, which is "build debug").
4. also, I add task for "make RunRelease". just type "Ctrl+Shift+P" and "test.

## for linux user
since update linux kernel, original `c_cpp_properties.json` is not working for me. i fixed part of lines of `"configurations" > "name":"linus" - "includePath"`. I'm not sure it's work for other linux users but it works well for me. for example, my linux c++ version is `7.3.1`, not `5`. so i edited `/usr/include/c++/5` to `/usr/include/c++/7.3.1`. there are other lines which is not matched with mine. check if that location is exists with yours and fix it"

# How to start your own project
1. Copy and paste /exampleEmpty folder and start your own project.
2. Edit addons.make file if you want to add addons
3. You might need to edit setting files inside of ./vscode

It provides quick auto complete feature.
Since vscode does not provide built-in debugger, debugging feature is depends on platform.

Curretly tested on OSX and Ubuntu(by @anselanza), and arch Linux(manjaro distribution, by @icq4ever).
Now we can browse source code under /libs/openFrameworks and /addons/* folders.

## Folder Structure
```
/of
  /apps
    /vscode_oF
      /exampleEmpty
```

## oF version
- 0.9.8 (works confirm)
- 0.10.0

## Known issue
+ "make clean" does not work (bug of openFrameworks Make system)
+ MacOSX.sdk path is hard coded
+ "#include error detected" for header files which is not actualy included
    for example GL/gl.h is for Linux wihch is not included on osx. This shold be fixed with limitSymbolsToIncludedHeaders property in c_cpp_properties.json
    But still vs code claims it is missing.