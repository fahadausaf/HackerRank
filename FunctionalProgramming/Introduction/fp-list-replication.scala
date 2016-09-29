def repeat(n: Int, item: Int): List[Int] = n match {
      case 0 => Nil
      case n => item :: (repeat(n - 1, item))
    }

def f(num: Int, arr: List[Int]): List[Int] = arr match {
      case Nil     => Nil
      case x :: xs => repeat(num, x) ::: (f(num, xs))
    }