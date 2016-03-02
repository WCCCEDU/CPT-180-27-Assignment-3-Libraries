#include <iostream>
#include "Assignment3-Libraries.h"

using std::cout;
using std::string;

int main() {
  string *pointer = config_reader::read_config("Config.txt");
  cout << pointer;

  return 0;
}
