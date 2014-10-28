def sort_names(names):
    last = []
    for name in names: last.append(name.split(' ')[1])
    last = sorted(last, key = None)
    
    for l in last:
        print "\n".join([s for s in names if l in s])
