//Problem Description
//有一群人，打乒乓球比赛，两两捉对撕杀，每两个人之间最多打一场比赛。
//球赛的规则如下：
//如果A打败了B，B又打败了C，而A与C之间没有进行过比赛，那么就认定，A一定能打败C。
//如果A打败了B，B又打败了C，而且，C又打败了A，那么A、B、C三者都不可能成为冠军。
//根据这个规则，无需循环较量，或许就能确定冠军。你的任务就是面对一群比赛选手，在经过了若干场撕杀之后，确定是否已经实际上产生了冠军。
//
//
//Input
//输入含有一些选手群，每群选手都以一个整数n(n < 1000)开头，后跟n对选手的比赛结果，比赛结果以一对选手名字（中间隔一空格）表示，前者战胜后者。如果n为0，则表示输入结束。
//
//
//    Output
//    对于每个选手群，若你判断出产生了冠军，则在一行中输出“Yes”，否则在一行中输出“No”。
//
//
//    Sample Input
//    3
//    Alice Bob
//    Smith John
//    Alice Smith
//    5
//    a c
//    c d
//    d e
//    b e
//    a d
//    0
//
//
//    Sample Output
//    Yes
//    No

//这一题的思路是定义集合a和集合b,把所有人放进集合a,把所有失败记录的放进集合b,如果a-b=1,
//则可以产生冠军,否则不能(原因是冠军不会有失败记录,非冠军必然有失败记录)
#include<bits/stdc++.h>
using namespace std;
int main() {
		set<string> all;
		set<string> losers;
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		all.clear();
		losers.clear();
		while (n--) {
			
			string left, right;
			cin >> left >> right;
			all.insert(left);
			all.insert(right);
			losers.insert(right);
		}
		if ((all.size() - 1) == losers.size()) {
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
		
	}
	return 0;
}