#include "Thought.hpp"



Thought::Thought(ThoughtType t, vector<int>* p) {
    type = t;
    payload = p;
}

map<float, string>* Thought::try_executing_thought() {
    map<float, string> result;

    // decide based on type, use knowledge

    return &result;
}