#include <bits/stdc++.h>
#include <Stdio.h>
using namespace std;
vector<int> G[1000];//adjacency list
int main(){
int n;
printf("Number of Nodes:");
cin>>n;
int edges;
printf("Number of Edges:");
cin>>edges;
while(edges--)
   {
       int X,Y;
       cin>>X>>Y;
       G[X].push_back(Y);
       G[Y].push_back(X);
   }
   int visited[n]={0}; //tracks if the node was visited
   int d[n], p[n]; //arrays to find the shortest distance
   int s=0; //source node
   float SumSPath; //sum of all shortest path
float Closeness; //Closeness Centrality
   visited[s]=1;
   d[s]=0;
   p[s]=-1;
   queue<int> q; //Breadth First Search
   q.push(s);
   while(!q.empty())
   {
       int v=q.front();
       q.pop();
       for(int u: G[v])
       {
           if(!visited[u])
           {
               visited[u]=1;
               q.push(u);
               d[u]=d[v]+1; //Going from v to u has only 1 unit of distance
               p[u]=v;
           }
       }
   }
   for(int i=0;i<n;i++) //print of the shortest distances
   {
      cout<<d[i]<<" ";
      SumSPath+= d[i];
   }
    Closeness = 1/(SumSPath/n); //closeness centrality calculation
    printf("\nCloseness Centrality of source node:%f", Closeness);
   cout<<endl;
   return 0;
}
