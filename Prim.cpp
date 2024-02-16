public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>visited (V,0);
        pq.push({0,0});
        int sum=0;
        while (!pq.empty()){
            auto it =pq.top();
            pq.pop();
            int node=it.second;
            int wt=it.first;
            if (visited[node]) continue;
            visited[node]=1;
            sum+=wt;
            for (int i=0;i<adj[node].size();i++){
                int adjNode=adj[node][i][0];
                int weight=adj[node][i][1];
                if (visited[adjNode]){}
                else {
                    pq.push({weight,adjNode});
                }
            }
        }
        return sum;
    }