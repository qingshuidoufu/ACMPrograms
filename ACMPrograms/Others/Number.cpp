//B.Number
//Reeeeein is good at math problems, because he always holds n − 1 integers in his brain, and every element
//exactly appears k times.However, when he once took part in a programming contest, a new integer suddenly
//squeezed into his brain.This made him so confused that he wrote 5 mistakes within 20 code lines.
//Now please help Reeeeein to fnd this new integer which appears exactly once!
//Input
//The frst line contains two integers n; k.
//The second line contains n integers a0; a1; : : : ; an−1.
//1 < k < n ≤ 114514
//	8i 2[0; n); ai 2[0; 1919810)
//	Output
//	You should output the number.
//	Sample
//	Input Output
//	5 2
//	2 2 3 29 3
//	29
//	Note
//	The best algorithm for this problem has a linear time complexityand a constant space complexity.However,
//	solutions with O(n log n) time complexity will also be accepted!

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int k;
    scanf("%d%d", &n, &k);
    vector<int> v;
    vector<int>::iterator it;
    vector<int>::iterator nextIt;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for (it = v.begin(); it != v.end();) {
        int tem = *it;
        nextIt = it + 1;
        if (tem == (*nextIt)) {
            it = nextIt + (k - 1);
            nextIt = it + 1;
        }
        else {

            printf("%d", tem);
            break;
        }

    }
    return 0;
}