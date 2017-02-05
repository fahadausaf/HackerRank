object Solution {
  def anagram(s: String): Int = {
    if(s.length()%2 != 0)
      return -1
    val s1 = s.substring(0, s.length()/2)
    val s2 = s.substring(s.length()/2)    
    s1.length()-s1.intersect(s2).length()
  }
  def anagramTest(){
    val n = readLine()
    for( x <- 1 to n.toInt){
      println(anagram(readLine()))
    }
  }

  def main(args: Array[String]) {
    anagramTest()
  }
}