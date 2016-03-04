#include <iostream>
#include <fstream>
#include <./config.h>


using std::string;
using std::ifstream;
int main() {
    string *read_config(string config_file_path);

    ifstream inputfile;
    inputfile.open("config.txt");

    string config_input[5];

    if (inputfile.is_open()) {
        while (!inputfile.eof()){
            int i = 0;
            string config_line;
            getline(inputfile, config_line);
            config_input[i] = config_line;
            i = i + 1;

        }
        }
    inputfile.close();

return 0;
}
