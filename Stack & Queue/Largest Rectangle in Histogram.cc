//Brute Force: T.C = O(N^2)

// For every element figure out the right smaller & left smaller. Like in example 1, for 5, the left      smallest is 1 and right smallest is 2. So boundary will be 5 & 6. 
// Area will be (rightSmaller-leftSmaller +1) * arr[i] i.e ==> (3-2+1)*5= 10


//Optimised Solution: T.C = O(N)+O(N) , S.C = O(N)

// check this video for explanantion : https://www.youtube.com/watch?v=jC_cWLy7jSI&list=PLgUwDviBIf0p4ozDR_kJJkONnb1wdx2Ma&index=83&ab_channel=takeUforward

class Solution{
  public:
    int largestRectangleArea(vector<int>& heights)
    {
        stack<int> st;
        int maxArea = 0;
        int n = heights.size();
        for(int i=0; i<=n; i++)
        {
            while(!st.empty() && (i==n || heights[st.top()] >= heights[i]))
            {
                int height = heights[st.top()];
                st.pop();
                int width;
                if(st.empty())
                    width = i;
                else
                    width = i-st.top()-1 ;
                maxArea = max(maxArea, height*width);
            }
            st.push(i);
        }
        return maxArea;
    }
    
};

