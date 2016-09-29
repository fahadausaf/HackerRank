def f(arr:List[Int]):Int = arr match{
        case Nil => 0
        case x::xs => 1 + f(xs)
      }