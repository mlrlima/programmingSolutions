class Solution {
    public String mapWordWeights(String[] words, int[] weights) {
        
        String s="";
        for(int i=0;i<words.length;i++){
            int w=0;
            for(int j=0;j<words[i].length();j++) w+= weights[words[i].charAt(j)-'a'];
        
            w%=26;

            s+= (char)(((w-25)*-1)+'a');        
        }

        return s;
    }
}
