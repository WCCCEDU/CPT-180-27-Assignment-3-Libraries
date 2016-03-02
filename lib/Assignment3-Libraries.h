#include <fstream>

namespace config_reader {
    using std::cout;
    using std::string;

// signature for function that will read the config file
    string *read_config(string config_file_path);
}