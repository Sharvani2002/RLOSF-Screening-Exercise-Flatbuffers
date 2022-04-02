# RL Open Source Fest Screening Exercise

## General Description

This repository contains the files created on completing the screening exercise of Improve flatbuffer parser support in VowpalWabbit project. 
This is one of the projects of RLOSF for which I am interested in contributing. 

Name: Sharvani Laxmi Somayaji

## Description of the Screening exercise
1.
```
Create a simple flatbuffer schema file. It should be a table with 3 fields:
a_name – string
a_value – float
a_flag - bool
```
The flatbuffer schema file has been created and can be found in <a href="https://github.com/Sharvani2002/RLOSF-Screening-Exercise-Flatbuffers/blob/master/schema/screening_schema.fbs">`screening_schema.fbs`</a>
2.
```
Create a C++ command line application that writes data to a file using the flatbuffer schema.
```
For this purpose, <a href="https://github.com/Sharvani2002/RLOSF-Screening-Exercise-Flatbuffers/blob/master/write_data.cpp">`write_data.cpp`</a> has been created.
3.
```
Create a C++ command line application that reads the file from previous step and writes the contents to stdout.
```
For this purpose, <a href="https://github.com/Sharvani2002/RLOSF-Screening-Exercise-Flatbuffers/blob/master/read_data.cpp">`read_data.cpp`</a> has been created.

### Note:
All the files created can be found in this repository. For this purpose, none have been added to `.gitignore`.

## Instructions to build and run the applications:
- Clone this repository and go to the location of the cloned repo.
- Go to the schema subfolder. 
  ```
  cd schema
  ```
Generate the C++ header `screening_schema_generated.h` from the schema `myTable.fbs` using the compiler as follows: 
  ```
  ./flatc --cpp screening_schema.fbs
  ```  
- As `screening_schema_generated.h` header relies on `flatbuffers/flatbuffers.h`, it needs to be in the include path. One of the ways to do this would be by adding it to the environment variable as follows:
![image](https://user-images.githubusercontent.com/55979861/161386380-ea90c312-395a-4a89-b6a6-9683702d09b3.png)

- Go back to the root of the repository
  ```
  cd ..
  ```
- Write the data to a file, `data.bin` using the flatbuffer schema using the following commands:
  ```
  g++ write_data.cpp -o main
  ```
  ```
  ./main Sharvani 12.2 1
  ```
  The above command takes input from the command line as follows:
  ```
  ./main <string> <float> <bool>
  ```
- Read the data to a file, `data.bin` and write the contents to stdout using the following commands:
  ```
  g++ read_data.cpp -o main
  ```
  ```
  ./main
  ```

## Output obtained from the last step (Step 3 of the Screening exercise):

