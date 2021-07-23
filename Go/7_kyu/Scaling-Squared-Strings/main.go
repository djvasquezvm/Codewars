package main

import (
	"fmt"
)

func main() {
	fmt.Println(Scale("abcd\nefgh\nijkl\nmnop",2,3))
	fmt.Println(Scale("", 5, 5))
	fmt.Println(Scale("Kj\nSH", 1, 2,))
}

func Scale(s string, k, n int ) string {
	var scaleH string
	var block string
	var result string
	j := 0
    if s == "" { return "" } else {
		for _, v := range s {
			for j < k {
				if v == 10 && j == 0 || v != 10 {
					scaleH += string(v)
				}
				j++
			}
			j=0
		}
		for _, v := range scaleH {
			block += string(v)
			if v == 10 {
				for j < n {
					result += block
					j++
				}
				j=0
				block = ""
			}
		}
		for j < n {
			result += block
			if j != n-1 { result += "\n" }
			j++
		}
		return result
	}
}