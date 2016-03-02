#include <iostream>
#include "Assignment3-Libraries.h"

using std::cout;
using std::string;
using std:: endl;

int main() {
  string file_path = "C:\\Users\\Samantha\\Documents\\Schoolwork\\Spring2016\\C++\\Assignment3\\driver\\Config.txt";
  string* pointer = config_reader::read_config(file_path);
  string file_input[10];
  for(int i = 0; i < 10; i++){
    // should print address
    pointer = pointer + i;
    cout << pointer << endl;

    // CANT GET THE DEREFERENCING WORKING HERE
    //file_input[i] = *pointer[i];
    //cout << file_input[i];
  }

  return 0;
}
