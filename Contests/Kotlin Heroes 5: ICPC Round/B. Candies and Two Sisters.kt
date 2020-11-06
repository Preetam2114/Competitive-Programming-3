fun main(){
    val t = readLine()!!.toInt()
    repeat(t){
        var num = readLine()!!.toInt()
        if(num%2!=0){
            num++
        }
        println(num/2 - 1)
    }
}