#ifndef MEMORY_HPP_
#define MEMORY_HPP_
#include <vector>
#include <map>
#include <string>
#include "../Knowledge/Knowledge.hpp"
#include "../Thought/Thought.hpp"

using namespace std;


class Memory {
private:
    Knowledge *knowledge;
    
    vector<Thought> thoughts;
    int thought_limit;
public:
    Memory(int limit);
    void push_thought(Thought *thought);

    

};

#endif