#include "../Header_Files/myclass.hpp"
#include "../Header_Files/hash.hpp"
#include<iostream>
MyClass::MyClass()
{
	std::cout << "Hello MyClass" << std::endl;
	std::cout << "This the hash of'Hello World' " << std::endl << hash::sha256("Hello MyClass");
}
