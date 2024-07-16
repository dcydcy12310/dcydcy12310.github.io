// luogu 1996
#include <bits/stdc++.h>

const int N = 110;

struct node{
    int id,nextid;
    // int data;
}nodes[N];


int main()
{
    std::ios::sync_with_stdio(false);std::cin.tie(0);
    int n,m;
    std::cin >> n >> m;
    nodes[0].nextid = 1;
    for(int i = 1; i <= n; i ++) {nodes[i].id = i,nodes[i].nextid = i + 1;}
    //for(int i = 1; i <= n; i ++){std::cout << nodes[i].id << "\n";}
    nodes[n].nextid = 1;
    int now = 1,prev = 1;
    while((n --) > 1){
        for(int i = 1; i < m; i ++){
            prev = now;
            now = nodes[now].nextid;
        }
        std::cout << nodes[now].id << " ";
        nodes[prev].nextid = nodes[now].nextid;
        now = nodes[prev].nextid;
    }
    std::cout << nodes[now].nextid << " ";
    return 0;
}