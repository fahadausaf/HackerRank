object Solution {
  def pascalsTriangle() = {
    def pascal(c: Int, r: Int): Int =
      if (c == r || c == 0 || r == 0) 1
      else pascal(c - 1, r - 1) + pascal(c, r - 1)

    var scanner = new Scanner(System.in)
    val n = scanner.nextInt()

    for (row <- 0 until n) {
      for (col <- 0 to row)
        print(pascal(col, row) + " ")
      println()
    }
  }

  def main(args: Array[String]) {
    pascalsTriangle()
  }
}
