#include <iostream>
#include <string>
#include <cstdlib> // cstdlib in needed for atoi()
#include <sstream> // for using stringstream

using namespace std;
#include "main.h";

int main()
{
  // Example 1: C++ string to int Using stoi()
  exampleOne();
  // Example 2: char Array to int Using atoi()
  exampleTwo();
  // Example 3: C++ int to string Using to_string()
  exampleThree();
  // Example 4: C++ int to string Using stringstream
  exampleFour();

  std::cout << "\n\n"
            << std::endl;

  return 0;
}

void exampleOne()
{
  string str = "123";
  int num;

  // using stoi() to store the value of str1 to x
  num = stoi(str);
  cout << "num 01: " << num << endl;
}

void exampleTwo()
{
  // declaring and initializing character  array
  char str[] = "456";
  int num = std::atoi(str);

  std::cout << "num 02: " << num << std::endl;
}

void exampleThree()
{
  int num = 162;

  std::string str = to_string(num);

  std::cout << "num 03: " << num << std::endl;
}

void exampleFour()
{
  int num = 2021;

  // creating stringstream object ss
  std::stringstream ss;

  // assigning the value of num to ss
  ss << num;

  // initializing string variable with the value of ss
  // and converting it to string format with str() function
  std::string strNum = ss.str();

  std::cout << "num 04: " << strNum;
}