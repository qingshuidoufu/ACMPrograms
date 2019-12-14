//Problem Description
//����Ҫ�Ŷ�����ǵ����˶�֪���ĳ�ʶ��
//��������ϸ�ĵ�0068�Ĺ۲죬��������ҽԺ���Ŷӻ����н����ġ�0068��ȥ��ҽԺ������ҽ����������ô�٣�ͬʱ���������������˲��������أ����Բ��ܸ��ݼ򵥵������ȷ����ԭ������ҽԺ��ÿ�ֲ���涨��10�ֲ�ͬ�����ȼ�������Ϊ10������Ȩ��ߣ�����Ϊ1������Ȩ��͡�ҽ���ڿ���ʱ����������Ķ�������ѡ��һ������Ȩ��ߵ��˽������Ρ����������������Ȩһ���Ĳ��˵Ļ�����ѡ���������ŶӵĲ��ˡ�
//
//���ھ��������ҽԺģ������������̡�
//
//
//Input
//�������ݰ���������ԣ��봦���ļ�������
//ÿ�����ݵ�һ����һ��������N(0 < N < 2000)��ʾ�����¼�����Ŀ��
//	��������N�зֱ��ʾ�������¼���
//	һ���������¼���
//	1:"IN A B", ��ʾ��һ��ӵ�����ȼ�B�Ĳ���Ҫ��ҽ��A���Ρ�(0 < A <= 3, 0 < B <= 10)
//	2 : "OUT A", ��ʾҽ��A������һ�����Σ�������Ϻ󣬲��˳�Ժ��(0 < A <= 3)
//
//
//	Output
//	����ÿ��"OUT A"�¼�������һ����������������˵ı��ID��������¼�ʱ�޲�����Ҫ���Σ������"EMPTY"��
//	�����˵ı��ID�Ķ���Ϊ����һ������У�"IN A B"�¼�������K��ʱ�������Ĳ���ID��ΪK����1��ʼ��š�
//
//
//	Sample Input
//	7
//	IN 1 1
//	IN 1 2
//	OUT 1
//	OUT 2
//	IN 2 1
//	OUT 2
//	OUT 1
//	2
//	IN 1 1
//	OUT 1
//
//
//	Sample Output
//	2
//	EMPTY
//	3
//	1
//	1
//

#include <bits/stdc++.h>
using namespace std;
struct node {
	int ID;
	int priority;
	friend bool operator <(node n1, node n2) {//��Ԫ���������������,ֻ������<
		//��������,���ȼ���ͬidС���ȳ�
		if (n1.priority == n2.priority) {  
			return n1.ID > n2.ID;//�������෴С���ȳ�
		}
		return n1.priority < n2.priority;  //��������ͬĬ������
	}

};
int main() {
	int n;
	while (cin >> n) {
		priority_queue<node> q[3];			// ����ȳ�(Ĭ��)priority_queue<int, vector<int>, less<int> >q;
											//С���ȳ�priority_queue<int, vector<int>, greater<int> >q;
		
		int paitientID = 0;
		while (n--) {
			string s;
			
			cin >> s;
			struct node n;
			if (s=="IN") {
				paitientID++;  
				int doctor, priority;
				cin >> doctor >> priority;
				struct node n;
				n.ID = paitientID;
				n.priority = priority;
				q[doctor - 1].push(n);
			}
			if (s == "OUT") {
				int doctor;
				cin >> doctor;
				if (!q[doctor - 1].empty()) {
					cout << q[doctor - 1].top().ID << endl;
					q[doctor - 1].pop();
				}
				else {
					cout << "EMPTY" << endl;
				}
			}
		}
	}
	return 0;
}