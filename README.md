# RL Open Source Fest Screening Exercise

## General Description

This repository contains the files created on completing the screening exercise of Improve flatbuffer parser support in VowpalWabbit project. 
This is one of the projects of RLOSF for which I am interested in contributing. 

Submitted by: Sharvani Laxmi Somayaji<br>
OS used: Windows 10 <br>
cmake version: 3.22.0-rc2<br>
g++.exe (GCC) 8.3.0<br>

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
- Get `flatc`. <b>Note</b> that this repository already contains the executable file.
  - At the beginning we have to get flatc -- FlatBuffers compiler. It can be built from source code hosted in Google's flatbuffers repository.
  ```
  git clone https://github.com/google/flatbuffers.git
  cd flatbuffers
  ```
  - Build using cmake: (Run the command on the basis of your platform. I have used the first command out of the below three)
  ```
  cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
  cmake -G "Visual Studio 10" -DCMAKE_BUILD_TYPE=Release
  cmake -G "Xcode" -DCMAKE_BUILD_TYPE=Release
  ```
  - Build as normal for your platform. This should result in a flatc executable. I have generated the Binaries outside the root repository and built them using the `make` command. After this, I have pasted the generated `flatc.exe` file in the `schema` folder in the repository.
- Generate the C++ header `screening_schema_generated.h` from the schema `screening_schema.fbs` using the compiler as follows: 
  ```
  ./flatc --cpp screening_schema.fbs
  ```  
- As `screening_schema_generated.h` header relies on `flatbuffers/flatbuffers.h`, it needs to be in the include path. One of the ways to do this would be by adding it to the environment variable as follows:
![image](https://user-images.githubusercontent.com/55979861/161387173-c75608ae-530b-4ace-967a-0d2cb2320372.png)


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

## Output obtained from Step 2 of the Screening exercise:
### Example (1)
![image](https://user-images.githubusercontent.com/55979861/161388625-5232aa2e-42bb-44b1-8419-71dda4418112.png)

### Example (2)
![image](https://user-images.githubusercontent.com/55979861/161388680-73407bd4-1f4f-4830-8531-c93599f6a550.png)


## Output obtained from the last step (Step 3 of the Screening exercise):
### Example (1)
![image](https://user-images.githubusercontent.com/55979861/161388692-e3cf6a48-3538-4708-bad1-f551972eac52.png)

### Example (2)
![image](https://user-images.githubusercontent.com/55979861/161388698-5fa91b7a-b457-45cc-ae36-c9b60ba3d39e.png)
