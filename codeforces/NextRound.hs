-- {-# OPTIONS_GHC -Wall #-}
-- USE RUN HASKELL 

-- program to read n lines of input and output the sum of the numbers
myFunc :: Int -> IO Int
myFunc 0 = return 0
myFunc n = do
    x <- getLine
    rest <- myFunc (n - 1)
    if x == "++X" || x == "X++"
        then return (rest + 1)
        else return (rest - 1)

readInts = fmap (map read.words) getLine

main :: IO()
main = do
    line <- getLine
    let numPeople = (read (takeWhile (/= ' ') line) :: Int)
    let kthGuy = (read (drop 1 (dropWhile (/= ' ') line)) :: Int)
    let arr = readInts -- array of ints on a line 
    if head arr == 0
        then print kthGuy 
        else print 0 