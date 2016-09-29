object Solution {

    def main(args: Array[String]) {
        // io.Source.stdin
        def swapOne(str: List[Char]): List[Char] = str match {
            case Nil           => Nil
            case x :: Nil      => x :: Nil
            case x :: y :: Nil => y :: x :: Nil
            case x :: y :: xs  => y :: x :: (swapOne(xs))
        }
        
        def swapN(list: List[String]): String = list match {
            case Nil      => ""
            case x :: Nil => swapOne(x.toList).mkString
            case x :: xs  => swapOne(x.toList).mkString + "\n" + swapN(xs)
        }
                    
        val input = io.Source.stdin.getLines().toList
        println(swapN(input.tail))
    }
}