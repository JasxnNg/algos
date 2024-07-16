-- {-# OPTIONS_GHC -Wall #-}
-- FUCK I'M SO STUPID 
-- ARGHGGHHGHH GHGHGHGHGHH



myFunc :: Int -> IO()

myFunc n = do 
    -- get n ints 
    let xArr = map read (words getLine) :: [Int]
    let yArr = map read (words getLine) :: [Int]
    putStrLn (show)
myFunc n
  | n <= 0 = return ()
  | otherwise = do
      x <- getLine
    --   x is the size of the array now
      arr <- getLine
      let ints = map read (words arr) :: [Int]
      
      putStrLn (show sum)
      myFunc (n - 1)



main :: IO()
main = do
    x <- readLn
    -- how the fuck do we know that x is an int... I still don't know 
    myFunc x