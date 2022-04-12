void getKthLargest(Node* root, priority_queue<int, vector<int>, greater<int>>& pq, int sz) {
    if (!root) return;

    getKthLargest(root->left, pq, sz);
    pq.push(root->data);
    if (pq.size() > sz) pq.pop();
    getKthLargest(root->right, pq, sz);
}

int kthLargest(Node* root, int K)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    getKthLargest(root, pq, K);

    return pq.top();
}







// ----------------------------------------------------------------------------------------------------------------------- //
/*
    by counting the node
    Time Complexity: O(h + k).
        The code first traverses down to the rightmost node which takes O(h) time, then traverses k elements in O(k) time. Therefore overall time complexity is O(h + k).
    Auxiliary Space: O(1).
        As no extra space is needed.
*/
void kthLargestUtil(Node* root, int k, int& c)
{
    // Base cases, the second condition is important to
    // avoid unnecessary recursive calls
    if (root == NULL || c >= k)
        return;

    // Follow reverse inorder traversal so that the
    // largest element is visited first
    kthLargestUtil(root->right, k, c);

    // Increment count of visited nodes
    c++;

    // If c becomes k now, then this is the k'th largest
    if (c == k)
    {
        cout << "K'th largest element is "
            << root->key << endl;
        return;
    }

    // Recur for left subtree
    kthLargestUtil(root->left, k, c);
}

// Function to find k'th largest element
void kthLargest(Node* root, int k)
{
    // Initialize count of nodes visited as 0
    int c = 0;

    // Note that c is passed by reference
    kthLargestUtil(root, k, c);
}
