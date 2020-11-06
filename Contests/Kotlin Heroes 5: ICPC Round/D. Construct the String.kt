fun  main(){
    val t = readLine()!!.toInt()
    repeat(t){
        val values = readLine()!!.split(" ")
        val n = values[0].toInt()
        val a = values[1].toInt()
        val b = values[2].toInt()
        var ans = ""
        var ch = 'a'
        val an = 'a' + b - 1
        for (i in  1..a){
            ans += ch
            if (ch < an) ch++
        }
        for (i in a + 1 .. n)
            ans += ans[i - a - 1]
        println(ans)
    }
}