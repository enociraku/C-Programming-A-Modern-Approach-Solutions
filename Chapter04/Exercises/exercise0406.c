/*
    (a) 8 % 5       -> Always 3
    (b) -8 % 5      -> Always -3
    (c) 8 % -5      -> Always 3
    (d) -8 % -5     -> Always -3


    (a):
        (8/5) * 5 + 8%5 = 8
        1 * 5 + 8%5 = 8
        8%5 = 8 - 5
        8%5 = 3
    (b):
        (-8/5) * 5 + -8%5 = -8
        -1 * 5 + -8%5 = -8
        -8%5 = -8 + 5
        -8%5 = -3
    (c):
        (8/-5) * -5 + 8%-5 = 8
        -1 * -5 + 8%-5 = 8
        8%-5 = 8 - 5
        8%5 = 3
    (d):
        (-8/-5) * -5 + -8%-5 = -8
        1 * -5 + -8%-5 = -8
        8%5 = -8 + 5
        8%5 = -3
*/