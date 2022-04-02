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

## Build Instructions:
- Clone this repository and go to the location of the cloned repo.
- Go to the schema subfolder. Generate the C++ header `myTable_generated.h` from the schema `myTable.fbs` using the compiler as follows:
  `flatc -cpp myTable.fbs`  
- As `myTable_generated.h` header relies on `flatbuffers/flatbuffers.h`, it needs to be in the include path. One of the ways to do this would be by adding it to the environment variable as follows:
![image](https://user-images.githubusercontent.com/55979861/161386380-ea90c312-395a-4a89-b6a6-9683702d09b3.png)

- 


## Output obtained from the last step (Step 3 of the Screening exercise):

