object Solution {

    def main(args: Array[String]) {
        val input = io.Source.stdin.getLines.toList.tail.head.split(" ").toList      
        
        def bigSum(n: List[String]): Long = n match {
            case Nil     => 0
            case x :: xs => x.toLong + bigSum(xs)
        }
      
        println(bigSum(input))
    }
}