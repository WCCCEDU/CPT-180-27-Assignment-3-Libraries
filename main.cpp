#include <iostream>
#include "lib/reader.h"


using namespace std;

int main() {

    sting* arr;

    arr = config_reader::read_config("C:\\Users\\bonni\\Documents\\progwork\\CPT-180-27-Assignment-2-Config-Generator\\knownrecipients.txt");

    for (int i = 0; i < 9; i++){
        cout << arr[i];
    }

    return 0;
}