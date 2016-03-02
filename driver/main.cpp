#include <iostream>
#include <fstream>
#include "reader.h"
using namespace reader;
using std::cout;using std::string;using std::ifstream;
int size_finder()
{
    int count =0;
    string line;
    ifstream myFile("C:\\Users\\Hanko\\Documents\\Assignment3\\config.txt");
    while(std::getline(myFile,line))
    {
        count++;
    }
    return count;
}
string* read_config(string config_file_path) {
    int SIZE = size_finder();
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

int main() {

    read_config("C:\\Users\\Hanko\\Documents\\Assignment3\\config.txt");
    return 0;
}




