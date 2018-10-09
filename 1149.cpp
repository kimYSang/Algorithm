/*
다이나믹 프로그래밍
제목 : RGB거리
*/

#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int a[1001][3] = {0};
	int d[1001][3] = {0};
	int n;

	cin >> n;

	for(int i = 1; i <= n ; i++)
		cin >> a[i][0] >> a[i][1] >> a[i][2];
		
	for(int i = 1; i <= n ; i++){
		d[i][0] = min(d[i-1][1], d[i-1][2]) + a[i][0];
		d[i][1] = min(d[i-1][2], d[i-1][0]) + a[i][1];
		d[i][2] = min(d[i-1][1], d[i-1][0]) + a[i][2];
	}

	cout << min(min(d[n][0], d[n][1]), d[n][2]);
	
}