#include "Memory.hpp"

Memory::Memory(int limit) {
    thought_limit = limit;
}

void Memory::push_thought(Thought *thought) {
    thoughts.push_back(*thought);
    if(thoughts.size() > thought_limit)
        thoughts.erase(thoughts.begin()); // deque?
}
