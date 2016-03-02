
#include <iostream>
#include <fstream>
#include "./Assignment3-Libraries.h"

namespace config_reader{
    using std::string;
    using std::cout;
    using std::ifstream;
    using std::endl;

    // define function for reading config files
    string* read_config(string file_path){
      // Console output used for testing

      // test for beginning of library function
      cout << "Now running read_config";

      // declare input file and open path
      ifstream config;
      cout << "config ifstream created" << endl;
      config.open(file_path);
      cout << "config opened" << endl;

      // declare an array to hold 10 lines (5 headers with 5 values)
      string file_input[10];
      cout << "array created" << endl;
      string line = "";

      int i = 0;
      do{
        getline(config, line);
        file_input[i] = line;
        //test for lines being read correctly from file
        cout << file_input[i] << endl;
        i++;
      } while(!config.eof());

      // file closes after finished reading input
      config.close();

      // Create string pointer variable and assign address of array
      string *lines = file_input;
      // test for pointer address of array
      cout << lines << endl;
      return lines;
    }
}
