#include <iostream>
#include "./lib/reader.h"

using namespace config_reader;
using std::string;
using std::cout;
using std::endl;

const string CONFIG_FILE_PATH = "./config/app.cfg";
const int ARRAY_SIZE = linecount(CONFIG_FILE_PATH);

int main() {
    //string settings_pointer[] = config_reader::read_config(CONFIG_FILE_PATH);
    string* settings_values = read_config(CONFIG_FILE_PATH);
    cout << "Name\t\t\t\t\tValue" << endl;

    string setting_name = "";
    string setting_value = "";
for (int i=0; i<ARRAY_SIZE; i++){
    if(static_cast<string>(settings_values[i]) != ""){

        setting_name = settings_values[i].substr(0,settings_values[i].find(';'));
        setting_value = settings_values[i].substr(settings_values[i].find(';') + 1,
                                                  settings_values[i].length()-settings_values[i].find(';') + 1);

        cout << setting_name << "\t\t\t\t\t" << setting_value << endl;
        setting_name = "";
        setting_value = "";

    }else{
        break;
    }

}

    return 0;
}