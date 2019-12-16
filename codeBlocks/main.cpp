#include <bits/stdc++.h>
using namespace std;
struct node{
    int id;
    string name;
};
int main(){
    node n[7];
    for(int i=0;i<7;i++){
        n[i].id=i;
    }
    n[0].name="Yamada Tae";
     n[1].name="Minamoto Sakura";
     n[2].name="Nikaido Saki";
     n[3].name="Mizuno Ai";
     n[4].name="Konno Junko";
     n[5].name="Yugiri";
     n[6].name="Hoshikawa Lily";

    string s;
    getline(cin,s);
    for(int i=0;i<7;i++){
        if(s==n[i].name){
            cout<<n[i].id;
        }

    }

    return 0;
}
