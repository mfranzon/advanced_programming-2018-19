class My_Range():
    def __init__(self, start, stop, step = 1):
        self.my_rng = range(start, stop, step)


def myrange(*args):
    n_arguments = len(args)
    if n_arguments not in [1,2,3]:
        raise TypeError("Too many arguments")
    if n_arguments == 1:
        return My_Range(0,args[0]).my_rng
    if n_arguments == 2:
        return My_Range(args[0], args[1]).my_rng
    if n_arguments == 3:
        return My_Range(args[0], args[1], args[2]).my_rng


import unittest

class TestMyRangeClass(unittest.TestCase):
    def test_size(self):
        self.assertEqual(len([i for i in myrange(1,10,2)]), 5)

    def test_max(self):
        self.assertEqual(max(myrange(1,10)), 9)

if __name__ == '__main__':
    unittest.main()
