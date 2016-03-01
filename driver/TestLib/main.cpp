#include <iostream>
#include "libassignment.h"

using namespace std;
using namespace config_reader;

int main() {
  string* pointer = read_config("C:\\Users\\Samantha\\ClionProjects\\Assignment2-Config-Files\\Config.txt");
  cout << pointer;

  return 0;
}