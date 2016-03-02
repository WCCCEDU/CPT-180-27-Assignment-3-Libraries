// Declarations and existance of things 

#ifndef ASSIGNMENT3_GETCONFIG_H
#define ASSIGNMENT3_GETCONFIG_H

#endif //ASSIGNMENT3_GETCONFIG_H

#include <string>  

namespace config_reader{ 
    using namespace std;  
    // Function prototype 
    string* read_config(string);  

    // Location of config txt file 
    const std::string CONFIG_FILE_PATH = "/Users/naomibrown/assignments/Assignment2/MyConfigFile.txt"; 
}