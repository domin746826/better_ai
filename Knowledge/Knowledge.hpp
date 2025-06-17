#ifndef KNOWLEDGE_HPP_
#define KNOWLEDGE_HPP_
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include "yaml-cpp/yaml.h"

using namespace std;


class Knowledge {
private:
    YAML::Parser parser;

public:
    Knowledge(string filename);


};

#endif