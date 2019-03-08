CMAKE_MINIMUM_REQUIRED(VERSION 3.10.0)
PROJECT(HELLO_WORLD VERSION 0.1 LANGUAGES CXX)

#Setting the Root of the libraries
SET(OPENSSL_ROOT_DIR D:/Documents/VisualStudio/Libraries/OpenSSL-Win32)

#Setting the Additional Libriries needed
SET(ADITIONAL_LIBRARY_DIRECTORIES
  ${OPENSSL_ROOT_DIR}/lib/VC/static
  ${OPENSSL_ROOT_DIR}/lib
)
#looking for the packages
find_package(OpenSSL REQUIRED)
#Adding the library
add_library(OpenSSL INTERFACE IMPORTED)
#add_library(bar STATIC IMPORTED) # or STATIC instead of SHARED
set_property(TARGET OpenSSL PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${OPENSSL_INCLUDE_DIR})
set_property(TARGET OpenSSL PROPERTY INTERFACE_LINK_DIRECTORIES ${ADITIONAL_LIBRARY_DIRECTORIES})

#link_directories(${ADITIONAL_LIBRARIES})
ADD_EXECUTABLE(CMakeHelloWorld main.cpp)

target_link_libraries(CMakeHelloWorld PUBLIC OpenSSL libcrypto32MT)
