#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "score.h"
#include "scoremanager.h"
using namespace std;


void readScoresFromCmdLine(ScoreManager& scoreManager) {
    std::string line;
    while (std::getline(std::cin, line)) {
        // analyze score from commandline input
        // pattern: name subject1 score1 subject2 score2 ...
        if (line == "exit") {
            break;
        }
        else {
            // append the record to scoreManager
            vector <string> tokens;
            stringstream input(line);
            string intermediate;
            while ( input >> intermediate ) {
                tokens.push_back(intermediate);
            }

            /*
            cout << "name: " << tokens[0] << "\t";
            for (int i = 1; i < tokens.size(); i+=2) {
                cout << tokens[i] << " " << tokens[i+1] << "\t";
            }
            cout << endl;
            */

            string name = tokens[0];
            map <string, int> scores;
            for (int i = 1; i < tokens.size(); i+=2) {
                scores[tokens[i]] = stoi(tokens[i+1]);
            }
            Score score(name, scores);
            scoreManager.addScore(score);
            cout << "Add " << name << "'s score successfully " << endl;
        }

    }
}

void readScoresFromFile(const std::string& fileName, ScoreManager& scoreManager) {
    std::ifstream file(fileName);
    std::string line;
    while (std::getline(file, line)) {
        // 解析文件中的成绩数据
        // 添加成绩到 scoreManager
    }
}

int main(){
    ScoreManager scoreManager;
    readScoresFromCmdLine(scoreManager);
    cout << "Exiting..."<< endl;
    return 0;
}