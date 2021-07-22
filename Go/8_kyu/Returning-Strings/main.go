package main

import (
	"fmt"
)

func main() {
	fmt.Println(Greet("Ryan"))
}

func Greet(name string) string {
	return "Hello, " + name + " how are you doing today?"
}