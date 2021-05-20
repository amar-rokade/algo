int knapsack(int wt[], int value[], int w, int n){
    if(n==0 || w==0){
        return 0;
    }
    if(t[n][w] != -1){
        return t[n][w];
    }

    if(wt[n-1] > w){
        t[n][w] = knapsack(wt,value,w,n-1);
        return t[n][w];
    }
    else{
        t[n][w] = max(value[n-1] + knapsack(wt,value,w-wt[n-1],n-1),knapsack(wt,value,w,n-1));
        return t[n][w];krasl
    }
};