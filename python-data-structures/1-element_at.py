#!/usr/bin/python3

#retrieves an element(idx) from a list(my_list)
def element_at(my_list, idx):
    if idx == -1 or idx >= len(my_list):
        return None
    return my_list[idx]
