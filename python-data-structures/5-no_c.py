def no_c(my_string):
    for i in range (len(my_string)):
        if i == 'c' and i == 'C':
            my_string.pop(i)
    return(my_string)
