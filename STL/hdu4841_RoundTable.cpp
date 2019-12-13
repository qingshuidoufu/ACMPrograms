//Problem Description
//圆桌上围坐着2n个人。其中n个人是好人，另外n个人是坏人。如果从第一个人开始数数，数到第m个人，则立即处死该人；然后从被处死的人之后开始数数，再将数到的第m个人处死……依此方法不断处死围坐在圆桌上的人。试问预先应如何安排这些好人与坏人的座位，能使得在处死n个人之后，圆桌上围坐的剩余的n个人全是好人。
//
//
//Input
//多组数据，每组数据输入：好人和坏人的人数n（ <= 32767）、步长m（ <= 32767）；
//
//
//Output
//对于每一组数据，输出2n个大写字母，‘G’表示好人，‘B’表示坏人，50个字母为一行，不允许出现空白字符。相邻数据间留有一空行。
//
//
//Sample Input
//2 3
//2 4
//
//
//Sample Output
//GBBG
//
//BGGB
//
//
//Source
//AHOI1999
#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector <int> table; //模拟圆桌
	int n, m;
	while (cin>>n>>m) {
		table.clear();
		for (int i = 0; i < 2 * n; i++) {
			table.push_back(i);//初始化
		}
		int pos = 0;  //记录位置
		for (int  i = 0; i < n; i++)
		{
			pos = (pos + m - 1) % table.size();//当前面的数小于后面的数时,其实求余运算可以看成a% b = a - (int)(a / b) * b
			table.erase(table.begin() + pos);  //赶走n个坏人

		}
		int j = 0; 
		for (int  i = 0; i < 2*n; i++)  //打印预先安排好的位置
		{
			if (!(i % 50) && i) {  //50个字母打一行
				cout << endl;
			}
			if (j < table.size()&& i == table[j]) { //table留下的都是好人(序号等于数组中的值的)
				j++;
				cout << "G";

			}
			else {
				cout << "B";
			}
			
		}
		cout << endl << endl;
	}
	return 0;
}