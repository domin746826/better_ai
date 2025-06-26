#include "Thought.hpp"



Thought::Thought(ThoughtType t, vector<int>* p, Memory *mem) {
    type = t;
    payload = p;
    memory = mem;
}

map<float, string>* Thought::try_executing_thought() {
    map<float, string> result;

    map<float, string> find_result;

    switch(type) {
        case Action: {
            find_result = knowledge->search_for_action(payload, 3);
        }
        break;
    }
    result = find_result;

    // if(find_result.)
    // CHECK IF ANY FLOAT OF LIST ACTION IS CLOSE TO 1
    // IF NOT, RETHINK, POSSIBLY UPDATE EMOTION OR SOMETHING
    // 

    return &result;
}