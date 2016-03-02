#include <iostream>
#include <fstream>
#include "./libraries.h"


using  std::string;

namespace config_reader {

    string *read_config(string config_file_path) {


        std::ifstream file(PATH);
        file.open(PATH);

        if (file.is_open()) {
            string *config_Array[4];
            for (int i = 0; i < 4; i++) {
                file >> *config_Array[i];
            }
        }
    }
}
