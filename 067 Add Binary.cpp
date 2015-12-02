class Solution {
public:
    char x[1010],y[1010],z[1010];
    inline int max(int a,int b){return a>b?a:b;}
    void rev(char s[],int len)
    {
        int i,j;

        for(i=0;i<=len/2;i++)
        {
            char t=s[i];s[i]=s[len-i];s[len-i]=t;
        }
        return;
    }
    string addBinary(string a, string b) {
        int lena=a.length();
        int lenb=b.length();
        int i,j;
        char c=0;
        memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));
        for(i=lena-1;i>=0;i--) x[lena-1-i]=a[i]-'0';
        for(i=lenb-1;i>=0;i--) y[lenb-1-i]=b[i]-'0';
        int len=max(lena,lenb);
        for(i=0;i<=len+1;i++)
        {
            z[i]=(x[i]+y[i]+c)%2;
            c=(x[i]+y[i]+c)/2;
        }
        for(i=len+1;i>=0;i--) if(z[i]) break;
        int tmp=i;
        for(;i>=0;i--) z[i]+='0';
        rev(z,tmp);
        if(!strcmp(z,"")) z[0]='0';
        return (string)z;


    }
};
