
def is_palindrome(string_var):
    '''
    returns True if string_var is palindrome, False otherwise
    '''
    ret = None
    ########################
    ret = string_var==string_var[::-1]
    ########################
    return ret

def histogram_letters(string_var):
    '''
    count how many times a letter is present in the string_var
    and returns a dict

    '''
    ret = None
    ########################
    ret={}
    for i in string_var:
        if i in ret:
            ret[i] += 1
        else:
            ret[i] = 1
    ########################
    return ret

def get_most_frequent(list_var):
    '''
    returns a tuple with the most frequent object in the list with the
    corresponing number
    '''
    ret = None
    ########################
    most_freq = max(list_var, key=list_var.count)
    ret = (most_freq, list_var.count(most_freq))
    ########################
    return ret

def which_duplicates(list_var):
    '''
    return a dict with containing the repeted object and the number of repetitions
    '''
    ret = None
    ########################
    ret = {}
    for i in list_var:
        if list_var.count(i) > 1:
            ret[i] = list_var.count(i)
    ########################
    return ret


def compute_factorial(int_val):
    '''
    returns factorial of a number
    '''
    ret = None
    ########################
    if int_val == 1 or int_val == 0:
        ret = 1
    else:
        ret = compute_factorial(int_val-1)*int_val
    ########################
    return ret


def is_prime(int_val):
    '''
    returns True if int_val is prime, False otherwise
    '''
    ret = None
    ########################
    i = 2
    for i in range(2, (int_val//2)+1):
      if int_val%i == 0:
        ret = True
      else:
        ret = False
    ########################
    return ret
