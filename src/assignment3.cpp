/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jose Malave
 */
//ex03

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  
  vector<int> number = {0,1,2,3,4,5,6,7,8,9};
  vector<string> numStr = {"0","1","2","3","4","5","6","7","8","9"};
  vector<string> nWord = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  


  char x;

  string str1, str2;
  int y = 0, z = 0;
  cin>> str1;
  cin >> x; // Get user input from the keyboard
  cin>> str2;

  for_each(str1.begin(), str1.end(), [](char & c){
    c = ::tolower(c);
  });

  for_each(str2.begin(), str2.end(), [](char & c){
    c = ::tolower(c);
  });

  for(int i = 0; i < 10; i++)
  {
    if(nWord[i] == str1 || numStr[i] == str1)
    {
      y = number[i];
    }
    if(nWord[i] == str2 || numStr[i] == str2)
    {
      z = number[i];
    }
  }


  switch(x) {
      case '+' :
         cout << y+z; 
         break;
      case '-' :
        cout << y-z; 
         break;
      case '*' :
         cout << y*z;
         break;
      case '/' :
         cout << y/z;
         break;
      }
    return 0;
}
