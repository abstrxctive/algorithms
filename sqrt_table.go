package main

import "fmt"

func main() {
	fmt.Printf("SQRT TABLE\n")
	
	fmt.Print("    ")
	for i := 0; i < 10; i++ {
		fmt.Printf("%4d", i)
	}
	fmt.Println()
	
	fmt.Print("    ")
	for i := 0; i < 10; i++ {
		fmt.Print("----")
	}
	fmt.Println()
	
	for i := 1; i < 10; i++ {
		fmt.Printf("%2d |", i)
		for j := i * 10; j < i*10+10; j++ {
			fmt.Printf("%6d", j*j)
		}
		fmt.Println()
	}
}
