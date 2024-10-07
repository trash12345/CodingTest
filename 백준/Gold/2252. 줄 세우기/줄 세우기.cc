#include <bits/stdc++.h>

using namespace std;

vector<int> V[32001];
int deg[32001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    // 비방향성 그래프
    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;

        V[A].push_back(B);
        deg[B]++;
    }

    // 위상 정렬 단순 구현
    // 1. indegree 가 0이 되면 큐에 넣고 인접한 노드를 순회
    // 2. 순회 후 indegree 1 감소 다시 indegree가 0이 되면 큐에 넣음
    // 3. 큐가 비면 위상정렬 종료
    queue<int> Q;

    for (int i = 1; i <= N; i++)
    {
        if (deg[i] == 0)
        {
            Q.push(i);
        }
    }

    while (!Q.empty())
    {
        int cur = Q.front();
        Q.pop();

        cout << cur << " ";

        for (int nxt : V[cur])
        {
            deg[nxt]--;

            if (deg[nxt] == 0)
            {
                Q.push(nxt);
            }
        }
    }

    return 0;
}