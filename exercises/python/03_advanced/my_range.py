__author__="Marco Franzon"
__date__="21-05-21"


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


import time

class Timer():
    def __enter__(self):
        self.start = time.process_time()

    def __exit__(self, e_type, e_value, traceback):
        self.end = time.process_time()
        elapsed_time = self.end - self.start
        print("Elapsed time: ",elapsed_time)

count = 0
with Timer() as t:
    for i in range (100000):
        count += 1
with Timer() as t:
    for i in myrange (100000):
        count += 1
