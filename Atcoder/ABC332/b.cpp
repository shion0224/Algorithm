#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, g, m;  // gがグラス、mがマグカップ
    int g_c = 0, m_c = 0,z;
    cin >> k >> g >> m;

    for (int i = 0; i < k; i++) {

        if (g_c == g) {
            g_c = 0;
        } else if (m_c == 0) {
            m_c = m;
        } else {// g m
            // if (m_c > g_c) { // マグカップからグラスへ G<M
            //     g_c = g;
            //     m_c -= g_c;
            //     continue;
            // }
            // if (m_c < g_c) {
            //     m_c = g_c;
            //     g_c = 0;
            //     continue;
            // }
            z=min(g-g_c,m_c);
			g_c+=z,m_c-=z;
        }

    }
            cout << g_c << " " << m_c << endl;
}