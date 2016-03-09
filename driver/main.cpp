#include <iostream>
#include <fstream>
#include "reader.h"
using namespace reader;
int main() {

    read_config("C:\\Users\\Hanko\\Documents\\Assignment3\\config.txt");
    return 0;
}

int size_finder()
{
    int count = 0;
    string line;
    ifstream myFile("C:\\Users\\Hanko\\Documents\\Assignment3\\config.txt");
    while(getline(myFile,line))
    {
        count++;
    }
    return count;
}

string* read_config(string config_file_path) {
    int const SIZE = size_finder();
    ifstream file(config_file_path);
    if (file.is_open()) {
        string myArray[SIZE];

        for (int i = 0; i < SIZE; ++i) {
            file >> myArray[i];
        }
        for (int i = 0; i < SIZE; ++i) {
            cout << myArray[i];
        }
    }
}
