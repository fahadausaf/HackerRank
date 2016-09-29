def f(arr: List[Int]): Int = arr match {
      case Nil     => 0
      case x :: xs => if (Math.abs(x) % 2 > 0) x + (f(xs)) else f(xs)
    }