object Solution {

    def main(args: Array[String]) {
        val sc = new java.util.Scanner (System.in);
        var n = sc.nextInt();
      
        def stairs(n: Int, i: Int): String = (n, i) match {
          case (0, i) => ""
          case (n, i) => " " * (n - 1) + "#" * i + "\n" + stairs(n - 1, i + 1)
        }
    
        println(stairs(n,1))
    }
}