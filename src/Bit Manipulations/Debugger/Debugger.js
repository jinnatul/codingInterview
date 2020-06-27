const Debugger = n =>
{
    return ((n & (n - 1)) == 0)
}

for(let i = 0; i < 100; i++)
{
    if(Debugger(i))
    {
        console.log(i)
    }
}

/*
0
1
2
4
8
16
32
64

*/