def f(arr: List[Int]): List[Int] = arr match {
      case a :: b :: cs => b :: (f(cs))
      case a :: b       => b
      case x            => Nil
    }