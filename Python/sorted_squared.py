#!/usr/bin/env python3
def sorted_squared(array):
    #write code here.make sure to return desired array
    new_array = []
    for i in range(len(array)):
        new_array.append(array[i] * array[i])
    return sorted(new_array)
    

def main():
    print(sorted_squared([1,2,3,5]))

if __name__ == "__main__":
    main()
