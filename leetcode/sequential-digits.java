class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
        String l=String.valueOf(low);
        String h=String.valueOf(high);

        List<Integer> ret=new ArrayList<>();

        int min=l.length(); 
        int max=h.length(); 

        String s="123456789";
        for(int len=min;len<=max;len++){
            for(int i=len;i<=s.length();i++){
                String n=s.substring(i-len, i); //System.out.println(n);
                Integer num=Integer.parseInt(n);
                if(num<low) continue;
                if(num>high) break;

                ret.add(num);
            }
        }

        return ret;
    }
}
