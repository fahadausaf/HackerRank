object Solution {

  def stringMingling(first: List[Char], second: List[Char]): List[Char] = (first, second) match{
    case (Nil, n) => n
    case (n, Nil) => n
    case (x :: xs, y :: ys) => x :: y :: (stringMingling(xs, ys))
  }
    
  def main(args: Array[String]) {
    val first = readLine()
    val second = readLine()
        
    println(stringMingling(first.toList, second.toList).mkString)
  }
}