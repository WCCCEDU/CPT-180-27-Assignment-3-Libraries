// Read data from config file #
include <iostream> 
#include <fstream> 
#include <string> 
#include "getConfig.h"
  
namespace config_reader{
      using namespace std:

    void read_config(CONFIG_FILE_PATH){
    ifstream inputFile;
     
    inputFile.open(CONFIG_FILE_PATH);

    const int CONFIG_ITEM_SIZE = 6;
     
    string configArray[CONFIG_ITEM_SIZE];
     
    int counter = 0;
      
    while(counter<CONFIG_ITEM_SIZE && inputFile >> configArray[counter]) counter++;  

    inputFile.close();
    }
}

