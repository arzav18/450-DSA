void insertCorrectPosition(int x, stack<int> &s)
{
    if(s.size()==0 || s.top()<x)
    {
        s.push(x);
    }
    else
    {
        int n= s.top();
        s.pop();
        insertCorrectPosition(x, s);
        s.push(n);
    }
}
void reverse(stack<int> &s)
{
    if(s.size()>0)
    {
    int x=s.top();
    s.pop();
    reverse(s);
    insertCorrectPosition(x,s);
    }
}
void SortedStack :: sort()
{
   reverse(s);
}
