void insertionSort(vector<int> &A) {
    for(auto i = 1; i < A.size(); i++) {
        auto t= A[i];
        auto j= i;
        while(j > 0 && A[j-1] > t) {
            A[j] = A[j-1];
            j--;
        }
    }
}