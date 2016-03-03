#include "./file_reader.h"

string* read_config(string config_file_path) {

        // "C:\\Users\\Owner\\Documents\\cp_repo\\config_file.txt"

        std::ifstream myfile(config_file_path);

        string line;
        int line_count = 0;

        if (myfile.is_open()) {
            while (getline(myfile, line)) {
                line_count++;
            }
        }
        myfile.close();
        // cout << line_count << endl;

        string* pointer_array = new string[line_count];


        return pointer_array;
    }




