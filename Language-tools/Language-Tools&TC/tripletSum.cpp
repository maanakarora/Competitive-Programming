int tripletSum(int *arr, int n, int x) {
    sort(arr,arr+n);
    // we take a value from sorted array one by one 
    // then search other 2 values in later part of the array by using
    // two pointer approach
    
    int count=0;
    for(int i=0;i<n-2;i++)
    {
        int l = i+1;
        int r = n-1;
        while(l<r)
        {
            int t1=l,t2=r;
            while(arr[i]+arr[t1]+arr[r]==x && t1<r)
            {
                t1++;c
            }
            while(arr[i]+arr[l]+arr[t2]==x && t2>l)
            {
                t2--;
            }
            t1=t1-l;
            t2=r-t2;
            // t1 is no. of times arr[l] occured
            // t2 is no. of times arr[r] occured
            if(t1*t2>0)
            {
                // for handling the case when arr[l] was equal to arr[r]
                // no. of times it should be printed will be 
                // for pp repeatition (pp-1)+(pp-2)+.....+2+1 = pp*(pp-1)/2
                if(arr[l]==arr[r])
                {
                    int pp = r-l+1;
                    count+=(pp*(pp-1)/2);
                }
                
                // as arr[l] and arr[r] are different 
                // t1 * t2 combinations are possible to print
                else
                	count+=(t1*t2);
                l+=t1;
                r-=t2;
                continue;
            }
            
             
            if(arr[i]+arr[l]+arr[r]<x)
                l++;
            else
                r--;
        }
    }
    
    return count;
}