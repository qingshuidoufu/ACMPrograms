//A.FranChouChou
//FranChouChou is an idol group founded by Kōtarō Tatsumiand led by Saki Nikaidō, consisting of zombies
//of legendary girls resurrected by Kotaro.Their objective is to save Sagaand resurrect the local idol trend in the
//process.
//The idol group’s tentative name was Death Musume, which was later changed to Green Face by Kotaro.
//The idol members of the group, however, found the names not satisfactory, eventually deciding to rename it to
//Franchouchou based on the sound Tae made when she sneezed.
//The followings are members in the group :
//• Zombie #0 Yamada Tae
//• Zombie #1 Minamoto Sakura
//• Zombie #2 Nikaido Saki
//• Zombie #3 Mizuno Ai
//• Zombie #4 Konno Junko
//• Zombie #5 Yugiri
//• Zombie #6 Hoshikawa Lily
//2SYSU Novice Programming Contest 2019, Online, December 15
//Now with given a name of an idol, you are asked about her / his number.
//Input
//The input contains only single line, one of the names mentioned above.
//Output
//You should output the number of the zombie.
//Sample
//Input Output
//Mizuno Ai 3

#include <bits/stdc++.h>
using namespace std;
struct node {
    int id;
    string name;
};
int main() {
    node n[7];
    for (int i = 0; i < 7; i++) {
        n[i].id = i;
    }
    n[0].name = "Yamada Tae";
    n[1].name = "Minamoto Sakura";
    n[2].name = "Nikaido Saki";
    n[3].name = "Mizuno Ai";
    n[4].name = "Konno Junko";
    n[5].name = "Yugiri";
    n[6].name = "Hoshikawa Lily";

    string s;
    getline(cin, s);
    for (int i = 0; i < 7; i++) {
        if (s == n[i].name) {
            cout << n[i].id;
        }

    }

    return 0;
}
