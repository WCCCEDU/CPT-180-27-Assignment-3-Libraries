#include <iostream>
#include "./config.h"

int main() {
    config_reader::read_config( "config.txt" );
    return 0;
}
