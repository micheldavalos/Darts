package main

import (
    "fmt"
     "math"
)


func main() {
 var T uint64
 var n uint64
 
 fmt.Scanln(&T)
 
 for j := uint64(0); j < T ; j++ {
     fmt.Scanln(&n)
     
     var x, y int
     score := int64(0)
     
     for i := uint64(0); i < n; i++ {
        fmt.Scanf("%d %d", &x, &y)
        s := int64(math.Sqrt(float64((x*x) + (y*y)))/20-11)*-1
        
        if s > 10 {
            s = 10            
        } else if s < 0 {
            s = 0
        }
        score += int64(s)
     }
     fmt.Print(score)     
 }
    
}
