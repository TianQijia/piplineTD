#ifndef SCORE_H
#define SCORE_H

class Score {
public:
    std::string name;
    std::map<std::string, int> scores;

    Score(const std::string& name, const std::map<std::string, int>& scores);
};

#endif