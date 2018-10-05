package main

import (
	"fmt"
)

func getMin(a int, b int) int {
	if a > b {
		return b
	} else {
		return a
	}
}
func getTwoCommonPrefix(str1 string, str2 string) string {
	len1 := len(str1)
	len2 := len(str2)
	min := getMin(len1, len2)
	// fmt.Println("min", min)
	for i := 0; i < min; i++ {
		if str1[i] != str2[i] {
			if i == 0 {
				return ""
			}
			return str1[:i]
		}
		if i == min-1 {
			return str1[:min]
		}
	}
	return ""
}
func longestCommonPrefix(strs []string) string {
	//fmt.Println(len(strs))
	arr_len := len(strs)
	//不要信任任何输入，考虑输入的时候，需要全面，全面，全面！！！
	if arr_len == 0 {
		return ""
	}
	// fmt.Println("arr_len", arr_len)
	if arr_len == 1 {
		return strs[0]
	}
	com := getTwoCommonPrefix(strs[0], strs[1])
	// fmt.Println("first", strs[0], strs[1], com)
	if com == "" {
		return ""
	}
	for i := 2; i < arr_len; i++ {
		// fmt.Println("in loop", strs[i], com)
		com = getTwoCommonPrefix(com, strs[i])
		// fmt.Println("in loop", strs[i], com)
		if com == "" {
			return ""
		}
	}
	return com
}

func main() {
	aa := []string{"1230"}
	fmt.Println(aa, longestCommonPrefix(aa))

	aa = []string{"1230", "1234"}
	fmt.Println(aa, longestCommonPrefix(aa))

	aa = []string{"1230", "1234", "12"}
	fmt.Println(aa, longestCommonPrefix(aa))

	aa = []string{"1230", "1234", "890"}
	fmt.Println(aa, longestCommonPrefix(aa))

	aa = []string{"flower", "flow", "flight"}
	fmt.Println(aa, longestCommonPrefix(aa))
}


int hammingWeight(int n) {
    char arr[256]={0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,4,5,5,6,5,6,6,7,5,6,6,7,6,7,7,8};
    int sum = 0;
    while (n!=0){
    sum += arr[(n&255)];
        n =n>>8;
    }
    return sum;
}
