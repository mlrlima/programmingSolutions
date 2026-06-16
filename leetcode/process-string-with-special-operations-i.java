class Solution {

    public String removes(String s){
        StringBuilder removes=new StringBuilder(s);
        removes.deleteCharAt(removes.length() - 1);
        
        return removes.toString();

    }
    public String duplicates(String s){
        return s+s;
    }
    public String reverses(String s){
        StringBuilder reverses=new StringBuilder(s);
        reverses.reverse();
        return reverses.toString();
    }

    public String processStr(String s) {
        String result="";
        for(int i=0;i<s.length();i++){
            
            if(s.charAt(i)>='a' && s.charAt(i)<='z') result+=s.charAt(i);
            else if(result=="") continue;

            else if(s.charAt(i)=='*') result=removes(result);
            else if(s.charAt(i)=='#') result=duplicates(result);
            else if(s.charAt(i)=='%') result=reverses(result);
        }

        return result;
    }
}
