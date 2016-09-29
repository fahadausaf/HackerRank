def f(num: Int):List[Int] = num match{
      case 0 => Nil
      case n => 1::(f(n-1))
    }