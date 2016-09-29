object Solution {

    def main(args: Array[String]) {
      
      def removeDuplicate(c: Char, str: List[Char]): List[Char] = (c, str) match {
      case (n, Nil)     => Nil
      case (n, x :: xs) => if (n == x) removeDuplicate(n, xs) else x :: (removeDuplicate(n, xs))
    }
      
      def reduceString(str: List[Char]): List[Char] = str match {
      case Nil => Nil
      case x :: xs  => x :: (reduceString(removeDuplicate(x, xs)))
    }
      
      println(reduceString(io.Source.stdin.getLines().toList.head.toList).mkString)
      
      
    }
}