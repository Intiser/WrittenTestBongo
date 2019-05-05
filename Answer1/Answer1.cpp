#include<iostream>
#include<cstring>

using namespace std;

/***

isAnagram() method will take two strings as inputs and will return true, if it is. Else it will return false.

***/
bool isAnagrams(string first, string second){
    int freqOfFirst[128];
    int freqOfSecond[128];
    memset(freqOfFirst, 0, sizeof(freqOfFirst));
    memset(freqOfSecond, 0, sizeof(freqOfSecond));
    for(int i=0;i<first.size();i++){
        freqOfFirst[first[i]]++;
    }
    for(int i=0;i<second.size();i++){
        freqOfSecond[second[i]]++;
    }
    for(int i=0;i<128;i++){
        if(freqOfFirst[i] != freqOfSecond[i]) return false;
    }
    return true;

}


int main(){
    string input1;
    string input2;
    cin>>input1>>input2;

    cout<<isAnagrams(input1,input2)<<endl;

}
