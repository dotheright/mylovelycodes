/*

Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

找到不重复的最长子串

*/

class Solution {
   public static  void  main (String [] arg) {
        Solution ss = new Solution();
        System.out.println( ss.lengthOfLongestSubstring("au"));
        return ;
    }
    public int lengthOfLongestSubstring(String s) {
        int  maxLen = 0;

        if(null ==s)
        {
            return 0;
        }
       int len = s.length();
        
        if( 1 == len )
        {
            return  1;
        }

        for (int  i = 0 ; i < len ; i++)
        {
            //最长的不重复字串，就是对于每一个字母，从下一个开始找 
            int  thisLen =  s.substring(i+1).indexOf(s.charAt(i)) +1 ;
            if(thisLen ==0)
            {
            	thisLen =  s.substring(i).length();
            }
            if ( maxLen < thisLen)
            {
                maxLen = thisLen;
            }
        }

        return maxLen ;
    }
   
}
