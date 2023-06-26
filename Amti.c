#include <iostream>

#include <stdio.h>

using namespace std;

int main() {
  char str[100];
  int i, totChar;
  totChar = 0;
  cout << "Please enter the string or number : ";
  cin >> str;
  //count characters of a string wit out space
  i = 0;
  while (str[i] != '\0') {
    if (str[i] != ' ') // this condition is used to avoid counting space
    {
      totChar++;
    }
    i++;
  }

  cout << "The total characters of the given string or number = " << totChar << "\n";

  cout << "W";
  for (i = 0; i < totChar; i++) {
    cout << "O";
  }
  cout << "W";
  return 0;
}
