//Problem Description
//ĳ���ӽ����±�����ѵ�������±���һ��ʼ��˳�����α�ţ����ų�һ�к�ӣ�ѵ���Ĺ������£���ͷ��ʼһ�������������������ı����ĳ��У�ʣ�µ���С��ŷ���£���ٴ�ͷ��ʼ����һ�������������������ĵı������У�ʣ�µ���С��ŷ���£��������ͷ��ʼ����һ�����������������Ժ��ͷ��ʼ��������һ����������һ��������ֱ��ʣ�µ���������������Ϊֹ��
//
//
//Input
//�����ж�����������飬��һ��Ϊ����N������ΪN���±��������±�����������5000��
//
//
//Output
//����N�У��ֱ��Ӧ������±�������ÿ�����ʣ�µ��±�����ı�ţ����֮����һ���ո�
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
		list<int> ::iterator it;  //������ʵ������ָ���������ݵ�һ��ָ��
		for (int i = 1; i <= people; i++) {
			l.push_back(i);
		}
		while (l.size()>3) {
			int step = 0;
			for (it = l.begin(); it != l.end();) {
				step++;
				if (step % k==0) {  //����2��3�ı�������
					it = l.erase(it);   //ע��:����дl.erase(it)��������ʧЧ,Ϊ����д��
				}
				else {
					it++;
				}
			
			}
			k == 2 ? k = 3 : k = 2; //�ı䱨������
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