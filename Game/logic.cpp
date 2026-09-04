#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

vector<vector<pair<string,int>>> cards(){
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

    return {spades, clubs, diamonds, hearts};
}

vector<pair<string, int>> players(){
    int n;
    vector<pair<string, int>> player_id;

    cout<<"how many players do you want to play against ?(10 is max): "<<endl;
    while (true){
        cin>> n;

        if(n >=2 && n<=10)
            break;
        
        cout<<"Enter the Correct number of players to play against "<<endl;
    }
    for(int i = 2; i<=n; i++){
            player_id.push_back(make_pair(" Bot ", i));
    }

    return player_id;
}

void logic(){

}