#include <iostream>
#include <fstream>
#include "./reader.h"

namespace config_reader {
    using namespace std;

    std::string *read_config(std::string config_file_path) {

        std::string count;

        std::ifstream inputFile;
        inputFile.open(config_file_path);

        string line_count[10];

        while (inputFile >> count) {
            cout << count << endl;
        }

        return 0;

    }
}