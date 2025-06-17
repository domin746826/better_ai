#include "Thought.hpp"



Thought::Thought(ThoughtType t, vector<int>* p, Memory *mem) {
    type = t;
    payload = p;
    memory = mem;
}

map<float, string>* Thought::try_executing_thought() {
    map<float, string> result;

    // decide based on type, use knowledge

    return &result;
}