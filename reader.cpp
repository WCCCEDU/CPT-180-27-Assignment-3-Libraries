#include <iostream>
#include <fstream>
#include "./reader.h"

using std::string;
using std::ifstream;

int linecount(string input_file_path);
namespace config_reader {
    string *read_config(string config_file_path){

        ifstream infile;

        const int FILE_LINES = linecount(config_file_path);

        string *setting_values = new string[FILE_LINES];
        infile.open(config_file_path);

        string read_line = "";
        int current_line = 0;
        string temp_setting_name = "";
        string temp_setting_value = "";
        bool found_bracket = false;

        while (std::getline(infile, read_line)) {

            temp_setting_name = "";
            temp_setting_value = "";
            found_bracket = false;

            if (read_line[0] == '[') {

                for (int i = 1; i < read_line.length(); i++) {

                    if (read_line[i] == ']') {
                        // Need to add two to compensate for "]" ad "="
                        i++;
                        i++;
                        found_bracket = true;
                    }
                    if (!found_bracket) {
                        temp_setting_name = temp_setting_name + read_line[i];
                    } else {
                        temp_setting_value = temp_setting_value + read_line[i];
                    }

                }

                // Use the ";" to delimit the setting name and value
                setting_values[current_line] = temp_setting_name + ";" + temp_setting_value;
                std::cout << setting_values[current_line] << std::endl;
                current_line++;
            }
        }


        infile.close();
        return 0;
    }

    int linecount(string input_file_path) {
        int total_lines = 0;
        ifstream infile;
        infile.open(input_file_path);

        string read_line;
        while (std::getline(infile, read_line)) {

            if (read_line[0] == '[') {
                total_lines++;
            }
        }
        infile.close();
        return total_lines;
    }
}

