class Solution {
public:

void nextSmallerElem(vector<int> &height,vector<int> &nextAns){
    stack<int>st;
    st.push(-1);
    int n = height.size();
    for(int i = n-1;i>=0;i--){
        int elem = height[i];
        while(s.top()!= -1 && height[st.top()] > elem){
            st.pop();
        }
        // agar yaha tk pohocha hu , iska mtlab
        // ki ye toh koi chooota number stack top pr h 
        // ya fir -1 stack top pr h
        ans.push_back(st.top());
        st.push(i);
    }
}

void prevSmallerElem(vector<int> &height,vector<int> &prevAns){
    stack<int>st;
    st.push(-1);
    int n = height.size();
    for(int i = 0;i<n;i++){
        int elem = height[i];
        while(s.top()!= -1 && height[st.top()] > elem){
            st.pop();
        }
        // agar yaha tk pohocha hu , iska mtlab
        // ki ye toh koi chooota number stack top pr h 
        // ya fir -1 stack top pr h
        ans.push_back(st.top());
        st.push(i);
    }
}


    int largestRectangleArea(vector<int>& heights) {
        
vector<int>nextAns;
vector<int>prevAns;

    }
};