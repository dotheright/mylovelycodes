package main

import "fmt"

const mask = 1 << 3

f := func(x int,y int) int{
   return x+y;
}
//const home = os.GetEnv("HOME")

func main() {
	var a = "abc"

	fmt.Println("Hello ,world!", a, masik,f(2,3))
}
