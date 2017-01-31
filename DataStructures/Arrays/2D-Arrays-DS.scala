object Solution {
  def main(args: Array[String]): Unit ={
    val sc = new java.util.Scanner (System.in)
    var a = Array.ofDim[Int](6,6)
    var ar = 0
    for(arr_i <- 0 to 5){
      for(arr_j <- 0 to 5){
        a(arr_i)(arr_j) = sc.nextInt()
      }
    }

    var max = -99
    for(i <- 0 to 3){
      for(j <- 0 to 3){
        ar=a(i)(j)+a(i)(j+1)+a(i)(j+2)+a(i+1)(j+1)+a(i+2)(j)+a(i+2)(j+1)+a(i+2)(j+2)
        if(ar>max)
          max = ar
      }
    }
    println(max)
  }
}
