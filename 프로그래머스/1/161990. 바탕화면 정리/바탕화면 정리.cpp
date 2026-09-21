#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    // 시작점 (lux, luy) -> 최소 y, 최소 x
    // 끝점 (rdx, rdy)   -> 최대 y, 최대 x
    int lux = 51, luy = 51;
    int rdx = -1, rdy = -1;
    
    int height = wallpaper.size();
    int width = wallpaper[0].size();
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (wallpaper[i][j] == '#') {
                lux = min(lux, i);       // 가장 위쪽 좌표
                luy = min(luy, j);       // 가장 왼쪽 좌표
                rdx = max(rdx, i + 1);   // 가장 아래쪽 좌표 (+1)
                rdy = max(rdy, j + 1);   // 가장 오른쪽 좌표 (+1)
            }
        }
    }
    
    return {lux, luy, rdx, rdy};
}