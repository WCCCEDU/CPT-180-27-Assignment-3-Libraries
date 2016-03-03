//
// Created by Chris Perkins on 3/3/2016.
//

#ifndef LIB_READER_FILE_READER_H
#define LIB_READER_FILE_READER_H

#endif //LIB_READER_FILE_READER_H

#include <iostream>
#include <fstream>

using std::endl;
using std::cout;
using std::string;

namespace config_reader {

    string *read_config(string config_file_path);
}