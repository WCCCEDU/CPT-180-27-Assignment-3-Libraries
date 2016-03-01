#include <iostream>
#include "./libassignment.h"

namespace config_reader{
    using namespace std;

    // define function for reading config files
    string* read_config(string config_file_path){
      // declare input file and open path
      cout << "Running read_config";
      ifstream config;
      config.open(config_file_path);

      // declare an array to hold 10 lines (5 headers with 5 values)
      string file_input[10];

      // if file path is accurate, read until end of file and store in array
      if(config) {
        int i = 0;
        while (!config.eof()) {
          getline(config, file_input[i]);
          i++;
        }
      }else{
        cout << "cannot locate file";
      }
      // file closes after finished reading input
      config.close();

      // Create string pointer variable and assign address of first array element
      string* lines = &file_input[0];
      return lines;
    }
}


