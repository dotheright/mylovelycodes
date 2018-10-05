package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	file, err := os.Open("/home/dotheright/mylovelycodes/golang/src/leetcode/dup1.go")
	if err != nil {
		panic(err)
	}
	input := bufio.NewScanner(file)
	for input.Scan() {
		fmt.Println(input.Text())
	}
	file.Close()
}
