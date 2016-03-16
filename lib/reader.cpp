
#include <string>
#include "reader.h"
#include <fstream>

using namespace std;

string* config_reader::read_config(string config_file_path)
{
   string* arr;

    ifstream inFile(config_file_path);

    int count = 0;
    string line;
    for (count = 0; getline(inFile, line); ++count);

    arr = new string[count];
    inFile.close();

    inFile.open(config_file_path);

    for (int i = 0; i < count; i++){
        getline(inFile, line);
        arr[i] = line;
    }

    inFile.close();

    return arr;

}

bool config_writer::write_config(string config_file_path, config write){
    ofstream outFile;
    outFile.open(config_file_path);
    config write;
    if (outFile.open()) {
        outFile >> write.name;
        outFile >> write.email;
        outFile >> write.cypher;
        outFile >> write.timezone_offset;
        outFile >> write.file_path;
    }

    outFile.close();
    return true;
}