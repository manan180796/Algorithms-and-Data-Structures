int sz[100], par[100];

int root(int v){
  if(par[v] == v) return v;
  return par[v] = root(par[v]);
}

void unite(int a, int b){
  a = root(a), b = root(b);
  if(a == b)  return;
  if(sz[a] < sz[b]) swap(a, b);
  par[b] = a;
  sz[a] += sz[b];
}


for(int i=1;i<=100;i++)
sz[i]=1, par[i]=i; //initialize DSU
