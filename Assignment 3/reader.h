#include <iostream>

void Initialization();
void EditFile();
void ConfigGenerator();

namespace  ConfigReader{
    std::string* ReadConfig(std::string config_file_path);