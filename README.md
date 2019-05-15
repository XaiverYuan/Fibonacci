# Fibonacci
Usually, when we first time studied Fibonacci series. It is classic to use the line "return n<3?1:f(n-1)+f(n-2);"
However, although this line looks cool, but it is very slow.
There is two ways to make it better. (Actually three ways, but the third way is like cheating which does not make sence)
one is by store the value we already calculated.
The other is to change that to iterative way.
For sure, Iterative way is better. it is T(n) and S(1), while the store value way(named spaceX in function) is T(n!) and S(n))
However, while I was coding that, I suddenly interested in the number that a value is called while calculating a fixed Fibonacci number
So I make this research
# If you can read Chinese
一般我们学斐波那契数都是靠递归，这看起来很帅但是实际上却很慢，
所以我就想把算过的值存起来，然后我在这么做的时候突然想到，我们调用一个值的次数与这个值是否有什么关系
然后我就搞了一下，感觉挺好玩的，第一次发git，朋友们捧个场谢谢
