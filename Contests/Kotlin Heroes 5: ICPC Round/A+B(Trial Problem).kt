fun main(){
    val t = readLine()!!.toInt()
    repeat(t){
        val l = readLine()!!.split(" ")
        val a = l[0].toInt()
        val b = l[1].toInt()
        println(a+b)
    }
}