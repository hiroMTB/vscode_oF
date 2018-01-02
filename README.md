![Screenshot](ss.png)

# vscode_oF
openFrameworks empty example for visual studio code
Curretly only tested on OSX.
Now we can browse source code of /libs/openFrameworks and /addons/* folder

## Known issue
+ "make clean" does not work (bug of openFrameworks Make system)
+ MacOSX.sdk path hard coded
+ "#include error detected" for header files which is not actualy included
    for example GL/gl.h is for Linux wihch is not included on osx. This shold be fixed with limitSymbolsToIncludedHeaders property in c_cpp_properties.json
    But still vs code claim it is missing.
