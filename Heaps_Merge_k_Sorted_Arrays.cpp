class node{
    public:
        node data;
        int i;
        int j;

        node(int data, int row, int col){
            this->data = data;
            i = row;
            j = col;
        }
};

class compare{
    public:
        bool operator()(node* a, node* b){
            return a->data < b->data;
        }
};

vector<int> mergeKSortedArrays(vector<vector<int>>& kArrays, int k){

    priority_queue<node*, vector<node*>, compare> minHeap;

    for(int i = 0; i < k; i++){
        node* temp = new node(kArrays[i][0], i, 0);
        minHeap.push(temp);
    }

    vector<int>ans;

    while(!minHeap.empty()){

        node* temp = minHeap.top();
        ans.push_back(temp);
        minHeap.pop();

        int i = this->i;
        int j = this->j;

        while(j+1 < kArrays.size()){
            node* next = new node(kArrays[i][j+1], i, j+1);
            minHeap.push(next);
        }
    }
    return ans;
}


// class node{
//     public:
//         node data;
//         int i;
//         int j;

//         node(int data, int row, int col){
//             this->data = data;
//             i = row;
//             j = col;
//         }
// };

// class compare{
//     public:
//         bool operator()(node* a, node* b){
//             return a->data < b->data;
//         }
// };

// vector<int> mergeKSortedArrays(vector<vector<int>>& kArrays, int k){
    
//     priority_queue<node*, vector<node*>, compare> minHeap;

//     // Step 1 : Saare arrays k first elements insert krdo heap me
//     for(int i = 0; i < k; i++){
//         node* temp = new node(kArrays[i][0], i, 0);
//         minHeap.push(temp);
//     }

//     vector<int> ans;

//     // Step 2 : 
//     while(!minHeap.empty()){
//         node* temp = minHeap.top();

//         ans.push_back(temp->data);
//         minHeap.pop();

//         int i = temp->i;
//         int j = temp->j;

//         if(j+1 < kArrays.size()){
//             node* next = new node(kArrays[i][j+1], i, j+1);
//             minHeap.push(next);
//         }
//     }
//     return ans;
// }
