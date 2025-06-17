#ifndef THOUGHT_HPP_
#define THOUGHT_HPP_
#include <vector>
#include <map>
#include <string>
#include "../Knowledge/Knowledge.hpp"
using namespace std;

typedef enum {
    Action,
    Analyze,
    Create,
    Remember,
    Decide,
} ThoughtType;



class Thought {
private:
    // meaning
    ThoughtType type;
    vector<int>* payload;
    Knowledge *knowledge;
    // Recent memory here, 20 recent thoughts or something, but without this recent memory
    // 

public:
    Thought(ThoughtType t, vector<int>* p);
    map<float, string>* try_executing_thought();

};

#endif