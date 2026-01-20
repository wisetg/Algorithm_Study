// https://www.acmicpc.net/problem/5361

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int quarry=0;
    cin >> quarry;

    double blaster_rifle=350.34, eye_sensor=230.90, hear_sensor=190.55, arm=125.30, leg=180.90;

    for (int i=0;i<quarry;i++){
        
    double blaster_rifle_num=0, eye_sensor_num=0, hear_sensor_num=0, arm_num=0, leg_num=0;
    cin >> blaster_rifle_num >> eye_sensor_num >> hear_sensor_num >> arm_num >> leg_num;

    cout << fixed << setprecision(2);
    cout<<"$"<<blaster_rifle*blaster_rifle_num+eye_sensor*eye_sensor_num+hear_sensor*hear_sensor_num+arm*arm_num+leg*leg_num<<"\n";
    }
    
    return 0;
}