import kotlin.math.ceil

fun main(){
    val t = readLine()!!.toInt()
    repeat(t){
        val n = readLine()!!.toInt()
        val a = readLine()!!.split(" ")
        var sum = 0.0
        for(x in a)
            sum += x.toInt()

        println(ceil(sum/n).toInt())
    }
}