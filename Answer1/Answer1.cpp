#include<iostream>
#include<cstring>
#include<stdio.h>

using namespace std;

/***

isAnagram() method will take two strings as inputs and will return true, if it is. Else it will return false.

***/
bool isAnagram(string first, string second){
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

/***
    comment out ahsan0045 to check the sample cases written in input.txt
***/
//#define ahsan0045


int main(){
    #ifdef ahsan0045
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string input1;
    string input2;
    while(cin>>input1>>input2){

       if(isAnagram(input1,input2)){
            cout<<"anagram"<<endl;
       }
       else{
           cout<<"not anagram"<<endl;
       }

    }

}

/***

Test Cases

abcdefghijk abcdefghijk
anagram

abraham abbraham
not anagram

123123abbbbaaaiosjjh aaaiosjjhabbbb112233
anagram

@@##%% %$##@@
not anagram

episode sodepie
anagram

unique quenie
not anagram

***/
