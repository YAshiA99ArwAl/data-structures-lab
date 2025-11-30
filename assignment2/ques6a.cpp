#include <bits/stdc++.h>
using namespace std;

struct Triple {
    int r, c, v;
};

bool cmp(const Triple &a, const Triple &b) {
    if (a.r == b.r) return a.c < b.c;
    return a.r < b.r;
}

int main() {
    Triple sparse[] = {
        {5, 4, 7}, {0,2,2}, {0,3,3}, {1,1,1},
        {2,2,15}, {3,3,4}, {4,1,25}, {4,2,1}
    };

    int values = sizeof(sparse) / sizeof(sparse[0]);
    for (int i = 0; i < values; i++) 
        swap(sparse[i].r, sparse[i].c);
    sort(sparse, sparse + values, cmp);
    for (int i = 0; i < values; i++) {
        cout << sparse[i].r << " "
             << sparse[i].c << " "
             << sparse[i].v << endl;
    }

    return 0;
}
