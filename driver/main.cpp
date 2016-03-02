// Main program - uses functions within body of code
#include <iostream>
#include "getConfig.h"

using namespace std;

int main() {

        // Display contents of config file
        string configPtr*;
        configPtr* = read_config(CONFIG_FILE_PATH);


        cout << "The info from the config file is: ";
        //for(int counter = 0; counter < configItems; counter++)
        //    cout << configArray[counter] << endl;

    return 0;
}