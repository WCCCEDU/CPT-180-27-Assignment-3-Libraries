
#include <iostream>
#include <fstream>
#include "./Assignment3-Libraries.h"

namespace config_reader{
    using std::string;
    using std::cout;
    using std::ifstream;

    // define function for reading config files
    string* read_config(string file_path){
      // declare input file and open path
      cout << file_path;
      ifstream config;
      config.open(file_path);

      // declare an array to hold 10 lines (5 headers with 5 values)
      string file_input[10];
      string line = "";

      int i = 0;
      do{
        getline(config, line);
        file_input[i] = line;
        cout << file_input[i];
        i++;
      } while(!config.eof());

      // file closes after finished reading input
      config.close();

      // Create string pointer variable and assign address of first array element
      string *lines = file_input;
      return lines;
    }
}
