def f(arr:List[Int]):List[Int] = arr match{
      case Nil      => Nil
      case x :: xs  => (f(xs) :+ x)
    }