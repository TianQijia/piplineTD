#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H
#include "score.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>

class ScoreManager {
public:
    void addScore(const Score& score);
    void modifyScore(const std::string& name, const std::string& subject, int newScore);
    Score findScoreByName(const std::string& name) const;
    Score findHighestScore(const std::string& subject) const;
    Score findLowestScore(const std::string& subject) const;
    std::vector<Score> sortScoresBySubject(const std::string& subject) const;
    double calculateAverage(const std::string& subject) const;

private:
    std::vector<Score> scores;
};

#endif