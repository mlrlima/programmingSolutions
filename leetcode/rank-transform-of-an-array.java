class Solution {
    int[] ranked;
    int[] sorted;

    public int binarySearch(int n){
        int l=0, h=sorted.length-1;
        int mid=(l+h)/2;
        while(n!=sorted[mid]){
            if(sorted[mid]> n) h=mid-1;
            else l=mid+1;

            mid=(l+h)/2;
        }

        return ranked[mid];
    }

    public int[] arrayRankTransform(int[] arr) {

        if(arr.length==0) return arr;
        
        sorted=Arrays.copyOf(arr, arr.length);
        Arrays.sort(sorted);

        int rank=1;
        ranked=new int[arr.length];
        ranked[0]=1;

        for(int i=1;i<sorted.length;i++){
            if(sorted[i]!=sorted[i-1]) rank++;
            ranked[i]=rank;
        }

        for(int i=0;i<arr.length;i++){
            arr[i]=binarySearch(arr[i]);
        }

        return arr;

    }
}
