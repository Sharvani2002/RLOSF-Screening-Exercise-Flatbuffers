#include <iostream> // C++ header file for printing
#include <fstream> // C++ header file for file access
// #include "schema/flatbuffers/flatbuffers.h"
#include "schema/screening_schema_generated.h"
#include <stdlib.h>

using namespace myTable::Sample; // Specified in the schema.

int main(int argc, char* argv[]) {
  // Build up a serialized buffer algorithmically:
  flatbuffers::FlatBufferBuilder builder(1024);

  // Using predefined data
  // auto a_name = builder.CreateString("Hello");
  // float a_value = 12.2;
  // bool a_flag = 1;

  // Using data from the command line
  auto a_name = builder.CreateString(argv[1]);
  float a_value = atof(argv[2]);
  bool a_flag = argv[3];

  // Creating rlosf with all fields set
  auto rlosf = CreateScreeningTable(builder, a_name, a_value, a_flag);

  builder.Finish(rlosf);  // Serialize the root of the object.

  // Get access to the root
  uint8_t *buf = builder.GetBufferPointer();
  int size = builder.GetSize();

  std::ofstream ofile("data.bin", std::ios::binary);
  ofile.write((char *)buf, size);
  ofile.close();

  printf("The FlatBuffer was successfully created!\n");
}
