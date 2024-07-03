

funFunctions :: Int -> Int -> Int
funFunctions 1 kSeconds = 1 
funFunctions numBytes kSeconds = kSeconds + funFunctions(numBytes - 1) kSeconds


myFunc :: Int -> IO()
myFunc n
  | n <= 0 = return ()
  | otherwise = do
      x <- getLine
      -- x here represents the two coordinates of the coin

      let [numBytes, kSeconds] = map read (words x) :: [Int]

    --   need to loop this jawn 
    --  
      let sum = funFunctions numBytes kSeconds
      putStrLn (show sum)
      
      myFunc (n - 1)


main :: IO()
main = do
    x <- readLn
    myFunc x