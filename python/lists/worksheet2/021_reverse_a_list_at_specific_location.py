def reverse_f(lst, pos):
    index = pos

    front = lst[:index]
    back = lst[index:]
    back.reverse()

    return front + back
