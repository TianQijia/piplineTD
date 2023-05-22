#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "score.h"

class Score {
public:
    std::string name;
    std::map<std::string, int> scores;
    
    Score(const std::string& name, const std::map<std::string, int>& scores)
        : name(name), scores(scores) {}
};