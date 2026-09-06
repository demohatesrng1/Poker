#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

pair<string,int> cards(){
    // Black Spade
    pair<string, int> spades;
    for (int i = 1; i<=13; i++){
        make_pair("spade", i);
    }

    // Black Club
    pair<string, int> clubs;
    for( int i = 1; i<=13; i++){
        make_pair("clubs", i);;
    }

    // Red Diamond
    pair<string , int> diamonds;
    for(int i= 1; i<=13; i++){
        make_pair("diamonds", i);
    }

    // Red heart
    pair<string, int> hearts;
    for (int i=1; i<=13; i++){
        make_pair("hearts", i);
    }

    return spades, clubs, diamonds, hearts;
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

void dealcards(pair<string,int> cards, int player_id){

    for(int i = 1; i<=player_id; i++){
        vector<pair<string, int>> card_1;
        vector<pair<string, int>> card_2;

    }
}

int betting(pair<string, int> players){

    int n = players.size();
    int bet_amount;

    cout<<"how much do you want to bet ? "<<endl;
    cin>> bet_amount;

    for(int i = 2; i<=n; i++){
        player_id.betting = rand();

    }
    return sum(betting);
}

void logic(pair<string,int> cards){
    // win cases logic conditions
        vector<pair<string, int>> RoyalFlush = {
        {"spades", 1}, {"spades", 10}, {"spades", 11}, {"spades", 12}, {"spades", 13}
    };

    vector<pair<string, int>> StraightFlush = {
        {"spades", 1}, {"spades", 10}, {"spades", 11}, {"spades", 12}, {"spades", 13}
    };

    vector<pair<string, int>> FourKind = {
        {"spades", 1}, {"spades", 10}, {"spades", 11}, {"spades", 12}, {"spades", 13}
    };

    vector<pair<string, int>> FullHouse = {
        {"spades", 1}, {"spades", 10}, {"spades", 11}, {"spades", 12}, {"spades", 13}
    };

    vector<pair<string, int>> Flush = {
        {"spades", 1}, {"spades", 10}, {"spades", 11}, {"spades", 12}, {"spades", 13}
    };

    vector<pair<string, int>> Straight = {
        {"spades", 1}, {"spades", 10}, {"spades", 11}, {"spades", 12}, {"spades", 13}
    };

    vector<pair<string, int>> ThreeKind = {
        {"spades", 1}, {"spades", 10}, {"spades", 11}, {"spades", 12}, {"spades", 13}
    };

    vector<pair<string, int>> TwoPair = {
        {"spades", 1}, {"spades", 10}, {"spades", 11}, {"spades", 12}, {"spades", 13}
    };

    vector<pair<string, int>> Pair = {
        {"spades", 1}, {"spades", 10}, {"spades", 11}, {"spades", 12}, {"spades", 13}
    };

    vector<pair<string, int>> HighCard = {
        {"spades", 1}, {"spades", 10}, {"spades", 11}, {"spades", 12}, {"spades", 13}
    };
    betting(players);
    int total_table_bet = sum(player_id.bet);

    for(int i = 0; i<=player_id; i++){
        if (player_id[cards] + Flop + River == RoyalFlush){
            player_id_amount += total_table_bet;
            total_table_bet = 0;
        }
        else if (player_id[cards] + Flop + River == StraightFlush){
            player_id_amount += total_table_bet;
            total_table_bet--;

        }
        else if (player_id[cards] + Flop + River == FourKind){
            player_id_amount += total_table_bet;
            total_table_bet = 0;

        }
        else if (player_id[cards] + Flop + River == FullHouse){
            player_id_amount += total_table_bet;
            total_table_bet = 0;

        }
        else if (player_id[cards] + Flop + River == Flush){
            player_id_amount += total_table_bet;
            total_table_bet = 0;

        }
        else if (player_id[cards] + Flop + River == Straight){
            player_id_amount += total_table_bet;
            total_table_bet = 0;

        }
        else if (player_id[cards] + Flop + River == ThreeKind){
            player_id_amount += total_table_bet;
            total_table_bet = 0;

        }
        else if (player_id[cards] + Flop + River == TwoPair){
            player_id_amount += total_table_bet;
            total_table_bet = 0;

        }
        else if (player_id[cards] + Flop + River == Pair){
            player_id_amount += total_table_bet;
            total_table_bet = 0;

        }
        else {
            player_id_amount += total_table_bet;
            total_table_bet = 0;

        }

    }


}