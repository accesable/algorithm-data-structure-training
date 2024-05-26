def exchange_wallet_game(alice_coins, bob_coins):
    # Initialize DP table
    dp = [[[False, False] for _ in range(bob_coins + 1)] for _ in range(alice_coins + 1)]
    
    # Base cases
    for b in range(bob_coins + 1):
        dp[0][b][0] = False  # Alice loses if she has 0 coins
    for a in range(alice_coins + 1):
        dp[a][0][1] = False  # Bob loses if he has 0 coins
    
    # Fill DP table
    for a in range(alice_coins + 1):
        for b in range(bob_coins + 1):
            if a > 0:
                # Alice's turn
                dp[a][b][0] = not dp[a-1][b][1] or (b > 0 and not dp[b-1][a][1])
            if b > 0:
                # Bob's turn
                dp[a][b][1] = not dp[a][b-1][0] or (a > 0 and not dp[b][a-1][0])
    
    # Determine the winner
    return "Alice" if dp[alice_coins][bob_coins][0] else "Bob"

# Example usage:
alice_coins = 3
bob_coins = 4
print(exchange_wallet_game(alice_coins, bob_coins))  # Output will be either "Alice" or "Bob" depending on the initial coin counts
