def flatten(nested_list):
    flat_list = []
    
    def _flatten(sublist):
        for item in sublist:
            if isinstance(item, list):
                _flatten(item)
            else:
                flat_list.append(item)
    
    _flatten(nested_list)
    return flat_list

nested_list = [[1,'a',['cat'],2],[[[3]],'dog'],4,5]
flattened_list = flatten(nested_list)
print(flattened_list)  # Output: [1, 'a', 'cat', 2, 3, 'dog', 4, 5]