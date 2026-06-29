class Solution {

    private boolean isSubstring(String word, String sub){
        for(int i=0;i<word.length();i++){
            if(word.length()-i < sub.length()) return false;

            for(int j=0, w=i;
                j<sub.length();
                j++, w++){

                if(word.charAt(w)!=sub.charAt(j)) break;

                if(j==sub.length()-1) return true;
            }
        }

        return false;
    }

    public int numOfStrings(String[] patterns, String word) {
        int count=0;
        for(int i=0;i<patterns.length;i++){
            if(isSubstring(word, patterns[i])) count++;
        }

        return count;
    }
}
