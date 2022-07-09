class Solution {
public:
    bool isMatch(string s, string p) {
        int m=s.size(),n=p.size(),match=-1,star=-1;
        int i=0,j=0;
        while(i<m)
        {
            if(j<n && p[j]=='*')
            {
                match=i;
                star=j;
                j++;
            }
            else if(j<n && (s[i]==p[j] || p[j]=='?'))
            {
                i++,j++;
            }
            else if(star>=0)
            {
                i=match+1;
                match++;
                j=star+1;
            }
            else
                return false;
        }
        while(j<n && p[j]=='*')
            j++;
        return (j==n);
    }
};
