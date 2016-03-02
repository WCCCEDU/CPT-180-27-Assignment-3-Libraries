#include "./reader.h"

namespace config_reader {
    using namespace std;

    std::string *read_config(std::string config_file_path) {
        int count = 0;
        std::ifstream inputFile;
        inputFile.open(config_file_path);

        string line_count[10];

        while (inputFile >> count) {
            cout << count << endl;
        }

        inputFile.close();

        return 0;

    }
}