#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

vector<vector<pair<string,int>>> cards(pair<string,int>& card){
    // Black Spade
    vector<pair<string, int>> spades;
    for (int i = 1; i<=13; i++){
        spades.push_back(make_pair("Spade", i));
    }

    // Black Club
    vector<pair<string, int>> clubs;
    for( int i = 1; i<=13; i++){
        clubs.push_back(make_pair("Club", i));
    }

    // Red Diamond
    vector<pair<string , int>> diamonds;
    for(int i= 1; i<=13; i++){
        diamonds.push_back(make_pair("Diamond", i));
    }

    // Red heart
    vector<pair<string, int>> hearts;
    for (int i=1; i<=13; i++){
        hearts.push_back(make_pair("Heart", i));
    }
}

void logic(){
    
}