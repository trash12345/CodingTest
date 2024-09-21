#include <bits/stdc++.h>

using namespace std;

long long arr[1000001];
long long tree[4000004];

long long makeTree(long long node, long long left, long long right)
{
    if (left == right)
    {
        return tree[node] = arr[left];
    }

    long long mid = (left + right) / 2;

    return tree[node] = makeTree(node * 2, left, mid) + makeTree(node * 2 + 1, mid + 1, right);
}

void update(long long node, long long left, long long right, const long long &nidx, const long long &nval)
{
    if (left == right)
    {
        tree[node] = nval;
        return;
    }

    long long mid = (left + right) / 2;

    // 왼쪽 노드
    if (left <= nidx && nidx <= mid)
    {
        update(node * 2, left, mid, nidx, nval);
    }
    // 오른쪽 노드
    else
    {
        update(node * 2 + 1, mid + 1, right, nidx, nval);
    }

    tree[node] = tree[node * 2] + tree[node * 2 + 1];
    return;
}

long long getsum(long long node, long long left, long long right, const long long &start, const long long &end)
{
    if (end < left || right < start)
    {
        return 0;
    }

    if (start <= left && right <= end)
    {
        return tree[node];
    }

    long long mid = (left + right) / 2;

    return getsum(node * 2, left, mid, start, end) + getsum(node * 2 + 1, mid + 1, right, start, end);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N, M, K;
    cin >> N >> M >> K;

    for (long long i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    makeTree(1, 0, N - 1);

    for (long long i = 0; i < M + K; i++)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        if (a == 1)
        {
            update(1, 0, N - 1, b - 1, c);
        }
        else
        {
            cout << getsum(1, 0, N - 1, b - 1, c - 1) << "\n";
        }
    }

    return 0;
}