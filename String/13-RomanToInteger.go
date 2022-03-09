package main

import "fmt"

func romanToInt(s string) int {

	m := map[byte]int{'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

	p, c, sum := 0, 0, 0

	l := len(s) - 1

	for i := 0; i < l; i++ {
		c = m[s[i]]
		if p < c {
			sum -= m[s[i]]
		} else {
			sum += m[s[i]]
		}
		p = c
	}
	return sum
}

func main() {
	fmt.Println(romanToInt("III"))
}
