#!/usr/bin/python3

""" Prime Game """


def isPrime(n):
    """ Checks if a number is a prime number """
    for i in range(2, int(n ** 0.5) + 1):
        if not n % i:
            return False
    return True


def calculate_primes(n, primes):
    """ Calculate all primes """
    top_prime = primes[-1]
    if n > top_prime:
        for i in range(top_prime + 1, n + 1):
            if isPrime(i):
                primes.append(i)
            else:
                primes.append(0)


def isWinner(x, nums):
    """
    Return: name of the player that won the most rounds
    If the winner cannot be determined, return None
    """

    playersWins = {"Maria": 0, "Ben": 0}

    primes = [0, 0, 2]

    calculate_primes(max(nums), primes)

    for round in range(x):
        sum_options = sum((i != 0 and i <= nums[round])
                          for i in primes[:nums[round] + 1])

        if (sum_options % 2):
            winner = "Maria"
        else:
            winner = "Ben"

        if winner:
            playersWins[winner] += 1

    if playersWins["Maria"] > playersWins["Ben"]:
        return "Maria"
    elif playersWins["Ben"] > playersWins["Maria"]:
        return "Ben"

    return None
