/*  This Program is using to print numbers from 1 to 100,
excepting The multiples of 3,5and 7 that show  respectively strings (Hello,World,Yoo)*/


//Declaration of iostream library that provides us with various functions to handle the input and output stream in c++ 
//for exemple cin,cout...
#include <iostream>

// function
void Multiple3_5and7()  
{ 
    for (int j= 1; j <= 100; j++) 
 {
    
     if (j % 3 == 0 && j % 5 == 0)
     {
      std::cout << "Hello World" << std::endl;
     } 
    else if (j % 3 == 0 && j % 7 == 0)
    {
      std::cout << "Hello Yoo" << std::endl;
    }
    else if (j % 5 == 0 && j % 7 == 0) 
    {
      std::cout << "World Yoo" << std::endl;
    } 
    else if (j % 3 == 0) 
    {
      std::cout << "Hello" << std::endl;
    } 
    else if (j % 5 == 0) 
    {
      std::cout << "World" << std::endl;
    } 
    else if (j % 7 == 0) 
    {
      std::cout << "Yoo" << std::endl;
    } 
    else 
    {
      std::cout << j << std::endl;
    }
  }
 }
 
int main() //The main function
 {
    Multiple3_5and7();
	
return 0;
 }





 