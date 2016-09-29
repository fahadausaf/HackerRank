import scala.io.Source
object Solution {

    def main(args: Array[String]) {
        
        def rotateOne(list: List[Char]): List[Char] = list match {
            case Nil     => Nil
            case x :: xs => (xs :+ x)
        }

        def rotateN(list: List[Char], n: Int): List[Char] = (list, n) match {
            case (Nil, n)      => Nil
            case (x :: Nil, n) => x :: Nil
            case (x :: xs, 0)  => Nil
            case (x :: xs, n)  => rotateOne(x :: xs) ++ " " ++ rotateN(rotateOne(x :: xs), n - 1)
        }

        def rotate(list: List[String]): String = list match {
            case Nil      => ""
            case x :: Nil => rotateN(x.toList, x.length()).mkString
            case x :: xs  => rotateN(x.toList, x.length()).mkString + "\n" + rotate(xs)
        }
        
        //val count = io.Source.stdin.getLines.toList.head.toInt
        //val input = io.Source.stdin.getLines.take(count+1).toList
        
        val input = io.Source.stdin.getLines().toList
        println(rotate(input.tail))
    }
}