void sortedInsert(stack<int>& st, int num){
    if(st.empty() || (!st.empty() && st.top() < num)){
        st.push(num);
        return;
    }

    int n = st.top();
    st.pop();

    sortedInsert(st, n);

    st.push(n);
}

void sortStack(stack<int>& st){
    if(st.empty()){
        return;
    }

    int num = st.top();
    st.pop();

    sortStack(st);

    sortedInsert(st, num);
}