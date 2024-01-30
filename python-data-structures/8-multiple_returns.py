#!/usr/bin/python3
#return a tuple with the length of a string and its first character
def multiple_returns(sentence):
    if not sentence:
        sentence[0] == None
    result_tuple = (len(sentence), sentence[0])
    return result_tuple
