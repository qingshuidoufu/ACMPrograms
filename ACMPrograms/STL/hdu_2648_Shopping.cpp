//Problem Description
//Every girl likes shopping, so does dandelion.Now she finds the shop is increasing the price every day because the Spring Festival is coming.She is fond of a shop which is called "memory".Now she wants to know the rank of this shop's price after the change of everyday.
//
//
//Input
//One line contians a number n(n <= 10000), stands for the number of shops.
//Then n lines, each line contains a string(the length is short than 31 and only contains lowercase letters and capital letters.)stands for the name of the shop.
//Then a line contians a number m(1 <= m <= 50), stands for the days .
//Then m parts, every parts contians n lines, each line contians a number sand a string p, stands for this day, the shop p 's price has increased s.
//
//
//Output
//Contains m lines, In the ith line print a number of the shop "memory" 's rank after the ith day. We define the rank as :If there are t shops' price is higher than the "memory", than its rank is t + 1.
//
//
//Sample Input
//3
//memory
//kfc
//wind
//2
//49 memory
//49 kfc
//48 wind
//80 kfc
//85 wind
//83 memory
//
//
//Sample Output
//1
//2

//注意,这题多组输入,读到文件尾结束
#include<bits/stdc++.h>
using namespace std;
int main() {
	int shopNum, days;
	string s;

	map<string, int> m;

	int p;
	while (cin >> shopNum) {  
		for (int i = 0; i < shopNum; i++) {
			cin >> s;//读商店名字,实际没用
		}
		cin >> days;//天数
		while (days--)
		{

			for (int i = 0; i < shopNum; i++)
			{
				cin >> p >> s;
				m[s] += p;  //像下标一样把数据插入map中
			}
			int rank = 1;//先定义rank为1,默认排名第一
			map<string, int>::iterator it;
			for (it = m.begin(); it != m.end(); it++) {
				if (it->second > m["memory"]) {  //若有比它贵的,他的排名升高
					rank++;
				}
			}
			cout << rank << endl;
		}
		m.clear();  
	}
	return 0;
}