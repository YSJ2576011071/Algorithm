#include <bits/stdc++.h>
using namespace std;

#define X first 
#define Y second

int board[1002][1002]; //기본 판 생성
int dist[1002][1002]; //이동 거리 판 생성
int n,m; // 행열 크기
int dx[4] = {1,0,-1,0}; //좌표값 계산을 위한 x값 변화 배열 생성
int dy[4] = {0,1,0,-1}; //좌표값 계산을 위한 y값 변화 배열 생성

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> m >> n;
  queue<pair<int,int> > Q;
  
  for(int i = 0; i < n; i++){ // 판에 0 or 1값을 넣는 과정
    for(int j = 0; j < m; j++){
      cin >> board[i][j];
      if(board[i][j] == 1) // 이미 익은 토마토인 경우
        Q.push({i,j}); // 시작점이 되므로 BFS 큐에 좌표를 미리 밀어 넣음 (dist[i][j]는 전역 배열이라 기본값 0 유지)
      if(board[i][j] == 0) // 아직 익지 않은 토마토인 경우
        dist[i][j] = -1; // 방문하지 않은 상태를 표시하기 위해 날짜를 -1로 초기화
    }
  }
  
  while(!Q.empty()){
    auto cur = Q.front(); Q.pop();
    
    for(int dir = 0; dir < 4; dir++){
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      
      if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if(dist[nx][ny] >= 0) continue; // 이미 방문했거나(익었거나) 토마토가 없는 빈 칸(dist가 0)이면 건너뜀
      
      dist[nx][ny] = dist[cur.X][cur.Y]+1;
      Q.push({nx,ny});
    }
  }
  
  int ans = 0;
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(dist[i][j] == -1){
        cout << -1;
        return 0;
      }
      ans = max(ans, dist[i][j]);
    }
  }
  cout << ans;
}
