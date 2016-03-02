#include <iostream>
#include "Assignment3-Libraries.h"

using std::cout;
using std::string;

int main() {
  string file_path = "C:\\Users\\Samantha\\Documents\\Schoolwork\\Spring2016\\C++\\Assignment3\\driver\\Config.txt";
  string* pointer = config_reader::read_config(file_path);
  cout << pointer;
  string file_input[10] = *pointer;
  cout << file_input;

  return 0;
}
