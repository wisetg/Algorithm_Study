// https://www.acmicpc.net/problem/4435

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    int battles=0, gandalf_army=0, sauron_army=0;
    vector<int> gandalf(6);
    vector<int> sauron(7);

    cin>>battles;
    for(int i=1; i<battles+1; i++){
        cin>>gandalf[0]>>gandalf[1]>>gandalf[2]>>gandalf[3]>>gandalf[4]>>gandalf[5];
        gandalf[0]=gandalf[0]*1;
        gandalf[1]=gandalf[1]*2;
        gandalf[2]=gandalf[2]*3;
        gandalf[3]=gandalf[3]*3;
        gandalf[4]=gandalf[4]*4;
        gandalf[5]=gandalf[5]*10;
        gandalf_army = accumulate(gandalf.begin(), gandalf.end(), 0);
        //cout<<"간달프 군대 : "<<gandalf_army<<"\n";

        cin>>sauron[0]>>sauron[1]>>sauron[2]>>sauron[3]>>sauron[4]>>sauron[5]>>sauron[6];
        sauron[0]=sauron[0]*1;
        sauron[1]=sauron[1]*2;
        sauron[2]=sauron[2]*2;
        sauron[3]=sauron[3]*2;
        sauron[4]=sauron[4]*3;
        sauron[5]=sauron[5]*5;
        sauron[6]=sauron[6]*10;
        sauron_army = accumulate(sauron.begin(), sauron.end(), 0);
        //cout<<"사우론 군대 : "<<sauron_army<<"\n";

        if(gandalf_army>sauron_army){
            cout<<"Battle "<<i<<": Good triumphs over Evil"<<"\n";
        }
        
        else if(gandalf_army==sauron_army){
            cout<<"Battle "<<i<<": No victor on this battle field"<<"\n";
        }

        else{
            cout<<"Battle "<<i<<": Evil eradicates all trace of Good"<<"\n";
        }
    }

    return 0;
}