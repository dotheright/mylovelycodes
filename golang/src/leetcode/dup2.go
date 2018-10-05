package main

import (
	"bufio"
	"fmt"
	"os"
)

func countLine(f *os.File, counts map[string]int) {
	input := bufio.NewScanner(f)
	for input.Scan() {
		counts[input.Text()]++
	}
}

func main() {
	counts := make(map[string]int)
	fileNames := os.Args[1:]
	for _, fileName := range fileNames {
		file, err := os.Open(fileName)
		if err != nil {
			fmt.Fprintf(os.Stderr, "dup2 err %v \n", err)
			continue
		}
		countLine(file, counts)
		file.Close()
	}

	for line, n := range counts {
		fmt.Printf("%d\t%s\n", n, line)
	}

}
