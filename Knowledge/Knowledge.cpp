#include "Knowledge.hpp"
#include <fstream>
#include "yaml-cpp/yaml.h"


Knowledge::Knowledge(string filename) {
    std::ifstream fin(filename);
    YAML::Parser parser_(fin);

    YAML::Node doc;
    
}