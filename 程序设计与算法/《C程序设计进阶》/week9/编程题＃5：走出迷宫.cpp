#include <iostream>
#include <queue>
const int INF = 10000000;
using namespace std;

typedef pair<int, int> P;

int main() {
	int m, n;
	cin >> m >> n;
	int sx, sy, tx, ty;	//起終點的xy
	int dx[4] = { 1,0,-1,0 };	//可移動的4個方向
	int dy[4] = { 0,1,0,-1 };	//可移動的4個方向
	char maze[201][201];	//迷宮字符組
	int dis[201][201];	//到各點的最短距離

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'S') {	//紀錄起點的xy
				sx = i;
				sy = j;
			}
			if (maze[i][j] == 'T') {	//紀錄終點的xy
				tx = i;
				ty = j;
			}
		}
	}

	queue<P> q;
	for (int i = 0; i < 201; i++) {		//預設不可到
		for (int j = 0; j < 201; j++) {
			dis[i][j] = INF;
		}
	}
	q.push(P(sx, sy));	//起點
	dis[sx][sy] = 0;
	
	//BFS
	while (!q.empty()) {
		P p = q.front();
		q.pop();
		if (p.first == tx && p.second == ty)
			break;	//到達T
		//往四個方向找
		for (int i = 0; i < 4; i++) {
			int newx = p.first + dx[i];
			int newy = p.second + dy[i];	//	新點的xy
			//判斷可否移動 dis[newx][newy] == INF表示還沒走過
			if (newx >= 0 && newx < m &&
				newy >= 0 && newy < n &&
				maze[newx][newy] != '#' && dis[newx][newy] == INF) {
				//可移動就放入queue
				q.push((P(newx, newy)));
				dis[newx][newy] = dis[p.first][p.second] + 1;
			}
			
		}
	}
	cout << dis[tx][ty] << endl;
	return 0;
}