#include "./reader.h"

int main() {
    std::string *ptr = config_reader::read_config("C:\\Users\\Seth\\Desktop\\WCCC\\CPT 180 - C++ Programming\\Assignment2\\knownrecipients.txt");
    int i = 0;
    do {
        std::cout << *(ptr + i);
        i++;
    } while (*(ptr + i) != "");
    return 0;
}