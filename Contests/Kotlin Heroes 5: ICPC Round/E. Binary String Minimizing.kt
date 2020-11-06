fun main(){
    val t = readLine()!!.toInt()
    repeat(t){
        val values = readLine()!!.split(" ")
        val n = values[0].toLong()
        //val n = values[0].toInt()
        //var k = values[1].toInt()
        var k = values[1].toLong()
        val num = StringBuilder(readLine()!!)
        var i = 0
        var j = 0
        while (i < n && num[i] == '0') i++
        for (j:Long in i + 1 until n) {
            if (k <= 0) break
            if (num[j.toInt()] == '0'){
                var r = j - i
                if (r <= k) {
                    num[i] = '0'
                    num[j.toInt()] = '1'
                    i++
                    k -= r
                }
                else{
                    r = j - k
                    if(num[r.toInt()]=='1'){
                        num[r.toInt()] = '0'
                        num[j.toInt()] = '1'
                        k = 0
                    }
                }
            }
        }
        println(num.toString())
    }
}