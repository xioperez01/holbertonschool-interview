#!/usr/bin/python3
""" Python Module """
from requests import request


def dicts(word_list):
    """To Generate dicts """
    count = {k: 0 for k in word_list}
    dup = {}
    for k in word_list:
        if k not in dup:
            dup[k] = 0
        dup[k] += 1
    return (count, dup)


def count_words(subreddit, word_list, after="", count={}, dup={}, init=0):
    """ Count Words """
    if not init:
        count, dup = dicts(word_list)

    url = "https://api.reddit.com/r/{}/hot?after={}".format(subreddit, after)
    headers = {"User-Agent": "Python3"}
    response = request("GET", url, headers=headers).json()
    try:
        data = response.get('data')
        top = data.get('children')
        _after = data.get('after')

        for item in top:
            data = item.get('data')['title']
            for word in count:
                amount = data.lower().split(' ').count(word.lower())
                count[word] += amount

        if _after:
            count_words(subreddit, word_list, _after, count, dup, 1)
        else:
            sort_abc = sorted(count.items(), key=lambda tup: tup[::-1])
            desc = sorted(sort_abc, key=lambda tup: tup[1], reverse=True)

            for name, cnt in desc:
                cnt *= dup[name]
                if cnt:
                    print('{}: {}'.format(name.lower(), cnt))
    except Exception:
        return None
