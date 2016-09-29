def factorial(n: Int): Int = n match {
      case 0 | 1 => 1
      case n     => n * factorial(n - 1)
    }

    def power(x: Float, n: Int): Float = n match {
      case 0 => 1
      case n => x * power(x, n - 1)
    }

    def expansion(x: Float, n: Int): Float = n match {
      case 0 => 1
      case n => expansion(x, n - 1) + (power(x, n) / factorial(n))
    }

def f(x: Float):Float=
  {   
       "%.4f".format(expansion(x,9)).toFloat
  }