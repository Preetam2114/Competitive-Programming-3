fun main(){
    var input = readLine()!!.split(" ")
    val n = input[0].toInt()
    val m = input[1].toInt()
    val d = input[2].toInt() 
    input = readLine()!!.split(" ")
    val c = IntArray(m)
    val a = IntArray(n)
    var sum = 0
    for(i in 0 until m){
        c[i]=input[i].toInt()
        sum += c[i]
    }
    var r = n-sum
    if(d>r){
        println("YES")
        var count =0
        for(i in 0..m-1){
            for(j in 0..c[i]){
                a[count++]=i+1
            }
        }
        for (x in a) print("$x ")
        return
    }
    var pos=0
    var current=0
    while(pos<n&&current<m){
        r+=c[current]
        for(i in pos+d-1 until pos+d-1+c[current]){
            if(i>=n)
                break
            a[i] = current+1
        }
        pos += d-1+c[current++]
        if(pos+d>=r){
            var count = n-1;
            for(i in m-1 downTo current){
                for(j in 0..c[i]-1){
                    a[count--] = i+1
                }
            }
        }
    }
    if(current == m && n-pos>=d){
        println("NO")
    }   else    {
        println("YES")
        for (x in a) print("$x ")
        println()
    }
}
/*
0
0
2
1
2
1
5
2
5
2
8
3
8
3
YES
0 1 0 2 2 3 3 4 4 5
 */