class StockSpanner {
    stack<pair<int,int>> st;
    int ind ;
public:
    StockSpanner() {
        ind = -1;
    }
    int next(int price) {
        ind = ind+1;
        while(!st.empty() && st.top().second <= price)
        {
            st.pop();
        }
        if(st.empty())
        {
            st.push({ind, price});
            return ind+1;
        }
        int res = st.top().first;
        st.push({ind, price});
        return ind-res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
