#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int sampleInput,winPerson = 0, temp = 1;
    long long int score = 0, power[1000000]={0}, scorea = 0, scoreb = 0;
    cin >> sampleInput;
    for(int i = 0 ; i < sampleInput ; i++){
        cin >> power[i];
    }
    sort(power,power + sampleInput);
    for(int i = 0; i < sampleInput; i++){
        if(power[i] != power[i+1]){
            scorea += power[i] * winPerson;
            winPerson += temp;
            temp = 1;
        }
        else{
            scorea += power[i] * winPerson;
            temp ++;
        }
        //cout << i+1 <<"st answer= " << scorea << "\n";
    }
    //cout<<"\n";
    winPerson = 0;
    for(int i = sampleInput-1 ; i >= 0 ; i--){
        if(power[i] != power[i-1]){
            scoreb += power[i] * winPerson;
            winPerson += temp;
            temp = 1;
        }
        else{
            scoreb += power[i] * winPerson;
            temp ++; 
        }
        //15 cout << i+1 <<"st answer= " << scoreb << "\n";
    }
    score = scorea - scoreb;
    //cout << "Score A = " << scorea << "\n";
    //cout << "Score B = " << scoreb << "\n";
    cout << score << "\n";
}