/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Main function to do heap sort. This function uses buildHeap()
   and heapify()
void heapSort(int arr[], int n)  {
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)  {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
} */
// The functions should be written in a way that array become sorted 
// in increasing order when above heapSort() is called.
// To heapify a subtree rooted with node i which is  an index in arr[]. 
// n is size of heap. This function  is used in above heapSor()
void heapify(int arr[], int n, int i)  {
      // Your Code Here
      int lar=i,lef=2*i+1,rig=2*i+2;
      
      if(lef<n && arr[lef]>=arr[lar]) lar=lef;
      if(rig<n && arr[rig]>=arr[lar]) lar=rig;
      
      if(lar!=i){
          swap(arr[i],arr[lar]);
          heapify(arr,n,lar);
      }
}
// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n)  { 
    // Your Code Here
    int i;
    for(i=n/2-1;i>=0;i--)heapify(arr,n,i);

}
