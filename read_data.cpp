#include <iostream> // C++ header file for printing
#include <fstream> // C++ header file for file access
#include "schema/screening_schema_generated.h"
#include <stdlib.h>

int main() {
   std::ifstream infile;
   infile.open("data.bin", std::ios::binary | std::ios::in);
   infile.seekg(0,std::ios::end);
   int length = infile.tellg();
   infile.seekg(0,std::ios::beg);
   char *data = new char[length];
   infile.read(data, length);
   infile.close();
   auto tableData = flatbuffers::GetRoot<MyTable>(data);

   std::cout << "Name : " << tableData->a_name()->str() << std::endl;
   std::cout << "Value : " << tableData->a_value() << std::endl;
   std::cout << "Flag : " << tableData->a_flag() << std::endl;

  printf("The FlatBuffer was successfully read!\n");
}
