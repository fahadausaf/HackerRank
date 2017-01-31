object Solution {

    def main(args: Array[String]) {
        val sc = new java.util.Scanner (System.in);
        var n = sc.nextInt();
        var arr = new Array[Int](n);
        for(arr_i <- 0 to n-1) {
           arr(arr_i) = sc.nextInt();
        }

        val list = arr.toList

        def reverse(ls: List[Int]): String = ls match {
          case Nil      => ""
          case x :: Nil => x.toString()
          case x :: xs  => reverse(xs) + " " + x
        }

        println(reverse(list))
    }
}
