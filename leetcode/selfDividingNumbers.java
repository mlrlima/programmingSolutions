class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> l=new ArrayList<>();

        for(int i=left;i<=right;i++){
            String s=String.valueOf(i);
            boolean tf=true;
            for(int j=0;j<s.length();j++){
                if(s.charAt(j)=='0' || i%(s.charAt(j)-'0')!=0){
                    tf=false;
                    break;
                }
            }

            if(tf) l.add(i);
        }


        return l;

    }
}
