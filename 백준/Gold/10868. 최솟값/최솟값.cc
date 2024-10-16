#include <bits/stdc++.h>

using namespace std;

int N, M;

vector<pair<int, int>> tree(100001 * 4);
int arr[100001];

pair<int, int> init(int start, int end, int node)
{
    if (start == end)
    {
        return tree[node] = {arr[start], arr[start]};
    }

    int mid = (start + end) / 2;

    pair<int, int> l = init(start, mid, node * 2);
    pair<int, int> r = init(mid + 1, end, node * 2 + 1);

    return tree[node] = {min(l.first, r.first), max(l.second, r.second)};
}

pair<int, int> getSum(int start, int end, int node, int left, int right)
{
    if (right < start || left > end)
    {
        return {INT_MAX, INT_MIN};
    }

    if (left <= start && right >= end)
    {
        return tree[node];
    }

    int mid = (start + end) / 2;

    pair<int, int> l = getSum(start, mid, node * 2, left, right);
    pair<int, int> r = getSum(mid + 1, end, node * 2 + 1, left, right);

    return {min(l.first, r.first), max(l.second, r.second)};
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }

    // 세그트리 만들기
    init(1, N, 1);

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;

        pair<int, int> ans = getSum(1, N, 1, a, b);

        cout << ans.first << "\n";
    }

    return 0;
}