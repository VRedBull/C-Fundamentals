# Streams (File Handling)

Streams are used for input and output data in a C++ program.  Like iostream is used by cin and cout.

Similarly, In file handling in c++ we can write and read data from a file.

Files are mainly dealt by using three classes fstream, ifstream, ofstream available in **fstream** headerfile.
**ofstream:** Stream class to write on files
**ifstream:** Stream class to read from files
**fstream:** Stream class to both read and write from/to files.

So we use fstream for writing and reading data from a file.



## Writing to a file

We can think of writing to a file as, a program **output** so we ostream for output.

- We use an object of ostream to write to a file.

- We can write to a file like this below eg.

  ```c++
  #include<iostream>
  #include<fstream>
  using namespace std;
  
  int main(){
      ofstream ofs("my.txt", ios::trunc);	//we can either truncate(i.e. overwrite data) or append using(ios::app)
  										
      ofs<<"Vikas"<<endl;
      ofs<<20<<endl;
      ofs<<"CompEngg."<<endl;
      
      ofs.close();
  }
  ```

- If there's no file named my.txt then it'll create one itself.

- So we can either clear the data and rewrite it by using (ios::trunc). *though if we do specify anything then by default it'll truncate the data*

- Or we can append more data by using (ios::app).

- We use the object of ofstream and insertion operator(<<) to write data to it.

- We should always close the opened file at the end or after use.



## Reading from a file

- We use object of **ifstream** to read files.

- We can read from a file like the given below eg.

  ```c++
  #include<iostream>
  #include<fstream>
  using namespace std;
  
  int main(){
      ifstream ifs("my.txt");
  
      string name;
      int n;
      string branch;
      
      if(ifs)		//this will check if the file exists. Or we can also say ifs.is_open() inside the if statement
          ifs>>name>>n>>branch;	//We should already know the sequence inside the file.
      else
          cout<<"No such file"<<endl;
      ifs.close();
  
      cout<<"Name: "<<name<<endl;
      cout<<"Age: "<<n<<endl;
      cout<<"Branch: "<<branch<<endl;
  }
  //output
  Name: Vikas
  Age: 20
  Branch: CompEngg.
  ```

- When we create the object we need to pass the name of the file we want to read as an argument. 

- The file name we are passing should already have been created. Otherwise it may give an error.

- As in the program, we need variables to store the data from the file.

- So to assign the variables the data from the file we use the object of ifstream and exertion operator(>>).

- And we should also already know the sequence of data type while reading from the file. So we can store the data to the corresponding variable data type.

- And always remember to close the opened file.

- Then we use the variables to show the data in the console.