#include <iostream>
using namespace std;
int main() {
    int wins = 0, teamA, teamB, temp;
    for(int i = 0; i < 2; i++){
        teamA = teamB = 0;
        for(int j = 0; j < 4; j++){
            cin >> temp;
            teamA += temp;
        }
        for(int j = 0; j < 4; j++){
            cin >> temp;
            teamB += temp;
        }
        cout<<teamA<<":"<<teamB<<endl;
        if(teamA > teamB) wins++;
    }
    if(wins == 2) cout<<"Win";
    if(wins == 1) cout<<"Tie";
    if(wins == 0) cout<<"Lose";
}