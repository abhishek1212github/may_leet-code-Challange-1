// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n)
{
    int l=1,u=n;
    while(l<=u)
    {    /*1-false
           2-false
           3-false 
           4-true   
           5-true   
           */
        int m=l+(u-l)/2;
        if(!isBadVersion(m))
        {
         l=m+1;   
        }
        else
            u=m-1;
    }
    return l;
    
    
}
