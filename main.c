long power(int a,int b)
{
    int tmp=1;
    for(int i=0;i<b;i++)
    {
        tmp*=a;
    }
    return tmp;
}
int length(int x)
{
    int count=1;
    while(x/10)
    {
        count++;
        x/=10;
    }
    return count;
}
bool isPalindrome(int x) {
    long dx=0;
    if(x<0)return false;
    else
    {
        int len=length(x);
        int i=0;
        for(i=0;i<len;i++)
        {
            dx+=x/power(10,i)%10*power(10,len-i-1);
        }
        if(dx==x)
        return true;
    }
    return false;
}
