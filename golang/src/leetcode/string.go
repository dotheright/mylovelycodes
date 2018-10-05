package main

import (
	"fmt"
	"strconv"
	"strings"
)

func main() {
	str01 := `This is a raw string \n` //原生字符串
	str02 := "This is a raw string \n" //引用字符串
	fmt.Println("原生字符串和引用字符串的区别")
	fmt.Printf(str01)
	fmt.Println("")
	fmt.Printf(str02)
	fmt.Println("")
	fmt.Println("+连接字符串")
	var str03 string = str01 + str02
	fmt.Printf(str03)
	fmt.Println("")
	var str string = "This is an example of a string"
	fmt.Println("HasPrefix 函数的用法")
	fmt.Printf("T/F? Does the string \"%s\"have prefix %s? ", str, "Th") //前缀
	fmt.Printf("%t\n", strings.HasPrefix(str, "Th\n"))
	fmt.Println("")
	fmt.Println("Contains 函数的用法")
	fmt.Println(strings.Contains("seafood", "foo")) //true
	fmt.Println(strings.Contains("seafood", "bar")) //false

	fmt.Println("Count 函数的用法")
	fmt.Println(strings.Count("cheese", "e")) // 3
	fmt.Println(strings.Count("five", ""))
	fmt.Println("")
	fmt.Println("Index 函数的用法")
	fmt.Println(strings.IndexRune("NLT_abc", 'b')) // 返回第一个匹配字符的位置，这里是4
	fmt.Println(strings.IndexRune("NLT_abc", 's')) // 在存在返回 -1
	fmt.Println(strings.IndexRune("我是中国人", '中'))   // 在存在返回 6

	fmt.Println("")
	fmt.Println("Join 函数的用法")
	s := []string{"foo", "bar", "baz"}
	fmt.Println(strings.Join(s, ", ")) // 返回字符串：foo, bar, baz

	fmt.Println("")
	fmt.Println("LastIndex 函数的用法")
	fmt.Println(strings.LastIndex("go gopher", "go")) // 3

	fmt.Println("")
	fmt.Println("Replace 函数的用法")
	fmt.Println(strings.Replace("oink oink oink", "k", "ky", 2))
	fmt.Println(strings.Replace("oinknnoinkmmoink", "oink", "", -1))

	fmt.Println("")
	fmt.Println("Split 函数的用法")
	fmt.Printf("%q\n", strings.Split("a,b,c", ","))
	fmt.Printf("%q\n", strings.Split("a man a plan a canal panama", "a "))
	fmt.Printf("%q\n", strings.Split(" xyz ", ""))
	fmt.Printf("%q\n", strings.Split("", "Bernardo O'Higgins"))

	fmt.Println("")
	fmt.Println("ToLower 函数的用法")
	fmt.Println(strings.ToLower("Gopher")) //gopher
	fmt.Println("")

	fmt.Println("strconv.Itoa()函数用法")
	var an int = 6
	newS := strconv.Itoa(an)
	fmt.Printf("The new string is: %s\n", newS)
}
