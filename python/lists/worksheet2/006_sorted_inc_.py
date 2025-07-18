def sort_by_last(tuples_list):
    return sorted(tuples_list, key=lambda x: x[-1])


data = [(2, 5), (1, 2), (4, 4), (2, 3), (2, 1)]


sorted_data = sort_by_last(data)
print(sorted_data)
