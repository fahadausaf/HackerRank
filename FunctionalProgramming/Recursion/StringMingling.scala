object Solution {
    
     def fibonacci(x: Int): Int = x match {
      case 1     => 0
      case 2 | 3 => 1
      case _     => fibonacci(x - 1) + fibonacci(x - 2)
    }

    def main(args: Array[String]) {
         /** This will handle the input and output**/
         println(fibonacci(readInt()))

    }
}