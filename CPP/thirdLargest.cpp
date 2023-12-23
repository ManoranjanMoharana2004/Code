int thirdLargest(int a[], int n)
    {
        
        if(n==1 || n==2) return -1;
        
        int First=0,Second=0,Third=0;
        
        for (int i = 0; i < n; i++)
    {
        if(a[i] > First){
            Third=Second;
            Second=First;
            First=a[i];
        }
        else if(a[i] > Second){
            Third=Second;
            Second=a[i];

        }
        else if (a[i]>Third){
            Third=a[i];
        }
    }
    
    return Third;
    }
