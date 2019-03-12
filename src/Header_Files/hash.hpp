#ifndef HASH_HPP
#define HASH_HPP
//#include<iostream>
//#include<string>
#include<sstream>
#include<iomanip>
#include<openssl/sha.h>
#include<openssl/ripemd.h>
namespace hash
{



std::string sha256(std::string str)
{
 unsigned char hash[SHA256_DIGEST_LENGTH];
 SHA256_CTX sha256;
 SHA256_Init(&sha256);
 SHA256_Update(&sha256, str.c_str(), str.size());
 SHA256_Final(hash, &sha256);
 std::stringstream ss;
 for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
 {
   ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
 }
 return ss.str();
}
}
#endif
