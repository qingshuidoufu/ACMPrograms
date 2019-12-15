//Problem Description
//某部队进行新兵队列训练，将新兵从一开始按顺序依次编号，并排成一行横队，训练的规则如下：从头开始一至二报数，凡报到二的倍数的出列，剩下的向小序号方向靠拢，再从头开始进行一至三报数，凡报到三的的倍数出列，剩下的向小序号方向靠拢，继续从头开始进行一至二报数。。。，以后从头开始轮流进行一至二报数、一至三报数直到剩下的人数不超过三人为止。
//
//
//Input
//本题有多个测试数据组，第一行为组数N，接着为N行新兵人数，新兵人数不超过5000。
//
//
//Output
//共有N行，分别对应输入的新兵人数，每行输出剩下的新兵最初的编号，编号之间有一个空格。
//
//
//Sample Input
//2
//20
//40
//
//
//Sample Output
//1 7 19
//1 19 37
//
//
//Author
//Cai Minglun
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;

	while (n--) {
		int k = 2;
		int people;
		cin >> people;
		list<int> l;
		list<int> ::iterator it;  //迭代器实际上是指向容器内容的一个指针
		for (int i = 1; i <= people; i++) {
			l.push_back(i);
		}
		while (l.size()>3) {
			int step = 0;
			for (it = l.begin(); it != l.end();) {
				step++;
				if (step % k==0) {  //遇到2和3的倍数出列
					it = l.erase(it);   //注意:单独写l.erase(it)可能容器失效,为错误写法
				}
				else {
					it++;
				}
			
			}
			k == 2 ? k = 3 : k = 2; //改变报数规则
		}
		for (it = l.begin(); it != l.end(); it++)
		{
			if (it != l.begin()) {
				cout << " ";
			}
			cout << *it;
		}
		cout << endl;
	}
	return 0;
}