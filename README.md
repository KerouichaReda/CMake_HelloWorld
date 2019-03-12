## This Project is an initiation to CMAKE on Windows

**CMake version :3.14** [link](https://cmake.org/)

Editor: **Atom**

IDE: **Visual Studio 2017**

you can use the cmake GUI to config and generate the project and also you use
the cmd achieve this point so the following command used to achieve
##### generating the PROJECT
```Bash
cmake <cmake_project> -G "Visual Studio Win64"
```

##### building the PROJECT
```Bash
cmake --build . --config Release
```
## Tips and macros
**Display the contain of the CMake variables**

```c++
get_cmake_property(_variableNames VARIABLES)
list (SORT _variableNames)
foreach (_variableName ${_variableNames})
    message(STATUS "${_variableName}=${${_variableName}}")
endforeach()
```
