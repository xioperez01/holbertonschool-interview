# 0x0F. Star Wars API

📁 _Specializations > Interview Preparation > Algorithms_

🏷️ apis 🏷️ javascript

## More Info

## Install Node 10

```bash
$ curl -sL https://deb.nodesource.com/setup_10.x | sudo -E bash -
$ sudo apt-get install -y nodejs
```

## Install semi-standard

[Documentation](https://github.com/standard/semistandard)

```bash
$ sudo npm install semistandard --global
```

## Install request module and use it

[Documentation](https://github.com/request/request)

```bash
$ sudo npm install request --global
$ export NODE_PATH=/usr/lib/node_modules
```

## Task

### 0.Star Wars Characters

Write a script that prints all characters of a Star Wars movie:

- The first positional argument passed is the Movie ID - example: 3 = “Return of the Jedi”
- Display one character name per line in the same order as the “characters” list in the /films/ endpoint
- You must use the [Star wars API](https://swapi-api.hbtn.io/)
- You must use the **request** module

```bash
$ ./0-starwars_characters.js 3
Luke Skywalker
C-3PO
R2-D2
Darth Vader
Leia Organa
Obi-Wan Kenobi
Chewbacca
Han Solo
Jabba Desilijic Tiure
Wedge Antilles
Yoda
Palpatine
Boba Fett
Lando Calrissian
Ackbar
Mon Mothma
Arvel Crynyd
Wicket Systri Warrick
Nien Nunb
Bib Fortuna
$
```

## Environment

- Allowed editors: **vi**, **vim**, **emacs**.
- Language: JavaScript
- OS: Ubuntu 14.04 LTS
- Node: (version 10.14.x)
- **semistandard** Style guidelines: [Rules of Standard](https://standardjs.com/rules.html) + [semicolons on top](https://github.com/standard/semistandard)
- Also as reference: [AirBnB style](https://github.com/airbnb/javascript)

## Autors :ribbon:

Angie Pérez [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/xiommyperez)
