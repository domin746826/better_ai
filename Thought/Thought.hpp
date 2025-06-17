#ifndef THOUGHT_HPP_
#define THOUGHT_HPP_
#include <vector>
#include <map>
#include <string>
#include "../Knowledge/Knowledge.hpp"
#include "../Memory/Memory.hpp"
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
    Memory *memory;

public:
    Thought(ThoughtType t, vector<int>* p, Memory *mem);
    map<float, string>* try_executing_thought();

};

#endif