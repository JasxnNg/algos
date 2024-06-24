-- {-# OPTIONS_GHC -Wall #-}

-- program to read n lines of input and output the sum of the numbers
myFunc :: Int -> IO Int
myFunc 0 = return 0
myFunc n = do
    x <- getLine
    rest <- myFunc (n - 1)
    if x == "++X" || x == "X++"
        then return (rest + 1)
        else return (rest - 1)

main :: IO ()
main = do
    n <- readLn
    result <- myFunc n
    print result
    -- n <- readLn;
    --       putStrLn myFunc n;

        
    --  putStrLn "What is 2 + 2?"
--           x <- readLn
--           if x == 4
--               then putStrLn "You're right!"
--               else putStrLn "You're wrong!"