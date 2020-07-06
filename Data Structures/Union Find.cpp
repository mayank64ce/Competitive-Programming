#include <bits/stdc++.h>

using namespace std;

//Simple implementation Begin
struct union_find {
	vector<int> parent;
	union_find(int n) {
		parent = vector<int>(n);
		for (int i = 0; i < n; i++) {
			parent[i] = i;
		}
	}
// find and union
};

// find and union
int find(int x) {
	if (parent[x] == x) {
		return x;
	} else {
		parent[x] = find(parent[x]);
		return parent[x];
	}
}
void unite(int x, int y) {
	parent[find(x)] = find(y);
}
//Simple implementation End

//When needed quickly Begin
#define MAXN 1000
int p[MAXN];
int find(int x) {
	return p[x] == x ? x : p[x] = find(p[x]);
}
void unite(int x, int y) { p[find(x)] = find(y); }
for (int i = 0; i < MAXN; i++) p[i] = i;

//When needed quickly End


int main()
{
	return 0;
}