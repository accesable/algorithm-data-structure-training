def flip_coin(value):
    if(value=='U') :
        return 'D'
    elif(value=='D') :
        return 'U'

def whoWinning(coins):
    isAliceTurn = False
    while coins:
        isAliceTurn = not(isAliceTurn)
        for i in range(len(coins)):
            if(coins[i]=='U'):
                left_coin,right_coin = i -1 , (i + 1) % len(coins)
                coins[left_coin] = flip_coin(coins[left_coin] )
                coins[right_coin] = flip_coin(coins[right_coin])
                coins.pop(i)
                break
        if(len(coins)==1 and coins[0]=='D'):
            break
    if(isAliceTurn) : print("YES")
    else : print("NO")

# Number of test cases
t = int(input(""))

l = []  

# Iterate over each test case
for _ in range(t):
    # Number of coins in the current test case
    n = int(input())
    
    # String representing the orientation of coins
    s = input().strip()
    items = list(s)
    l.append(items)
    # Print the inputs for verification
    # print("Test Case:", _ + 1)
    # print("Number of coins:", n)
    # print("Orientation of coins:", items)
    # whoWinning(items)
for _ in l:
    whoWinning(_)




        

