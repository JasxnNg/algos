count = 1 
primeList = [2]
sum = 2 
initNum = 3
def isPrime (primeList, num): 
  for i in primeList: 
    if (num % i == 0): 
      return False
  return True

while (initNum < 2000000): 
  while(not isPrime(primeList, initNum)): 
    initNum += 1
    if (initNum > 2000000): 
        break
  primeList.append(initNum)
  sum += initNum 

print(initNum)