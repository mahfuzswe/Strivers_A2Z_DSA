def missing_number(a, n):
    # outer loop that runs from 1 to n
    for i in range(1, n+1):
        # flag varible to check if an element exists
        flg = 0
        
        # search the element using linear search
        for j in range(len(a)):
            if a[j] == i:
                # i is present in the array
                flg = 1
                break
        
        # check if the element is missing or not
        if flg == 0:
            return i 
    
    # to avoid warning 
    return -1 # this won't be executed

def main():
    n = int(input())
    a = list(map(int, input().split()))
    
    ans = missing_number(a, n)
    print("missing number: ", ans)
    
if __name__ == '__main__':
    main()
    
# Time complexity : O(n^2)