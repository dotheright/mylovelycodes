#!/usr/bin/env python
class Solution(object):
    def lengthOfLongestSubstring(self, s):
        select = list();
        longest = 0 ;
        if(len(s) <=1):
            return len(s)
        for i,iterm in enumerate(s):
            if iterm not in  select :
                select.append(iterm);
                longest =max(longest , len(select));
            else :
                del select[0:i]
                select.append(iterm);
            #print i,iterm,select
        return longest
ss = Solution()
print ss.lengthOfLongestSubstring("")
print ss.lengthOfLongestSubstring("1")
print ss.lengthOfLongestSubstring("1222221")
print ss.lengthOfLongestSubstring("12321")
print ss.lengthOfLongestSubstring("123211sadfgc")