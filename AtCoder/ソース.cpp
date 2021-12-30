#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int H, W, maxH, maxW, sH, sW, gH, gW;
vector<string> c;
bool seen[510][510];
bool reachable[510][510];
int dirH[4] = {1, 0, -1, 0};
int dirW[4] = {0, 1, 0, -1};

void dfs(int h, int w) {

    if (h >= 0 && w >= 0 && !seen[h][w])
    {
        seen[h][w] = true;
    }
    else {
        return;
    }

    if (h > maxH || w > maxW || h < 0 || w < 0 || c[h][w] == '#')
    {
        return;
    }

    reachable[h][w] = true;

    for (int i = 0; i < 4; i++)
    {
        int nextH = h + dirH[i];
        int nextW = w + dirW[i];

        dfs(nextH, nextW);
    }
}
signed main() {
    cin >> H >> W;
    c.resize(H);
    maxH = H - 1;
    maxW = W - 1;

    memset(seen, 0, sizeof(seen));
    memset(reachable, 0, sizeof(reachable));

    for (int i = 0; i < H; i++)
    {
        cin >> c[i];
    }

    // スタートとゴールはどこ？
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (c[i][j] == 's')
            {
                sH = i;
                sW = j;
            }
            if (c[i][j] == 'g')
            {
                gH = i;
                gW = j;
            }
        }
    }

    dfs(sH, sW);

    if (reachable[gH][gW])
    {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}