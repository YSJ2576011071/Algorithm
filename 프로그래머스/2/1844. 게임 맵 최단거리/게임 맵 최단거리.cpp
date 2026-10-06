#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int solution(vector<vector<int>> maps)
{
    int n = maps.size();
    int m = maps[0].size();
    vector<vector<int>> dist(n, vector<int>(m, -1));
    
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    queue<pair<int,int>> Q;
    
    Q.push({0,0});
    dist[0][0] = 1;
    
    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for (int i = 0 ; i < 4 ; i++) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {continue;}
            if (maps[nx][ny] == 0) {continue;}
            if (dist[nx][ny] != -1) {continue;}
            Q.push({nx,ny});
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
        }
    }
    
    return dist[n-1][m-1];
}