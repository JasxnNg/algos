import Control.Monad.RWS (MonadState(put))
-- {-# OPTIONS_GHC -Wall #-}
-- FUCK I'M SO STUPID 
-- ARGHGGHHGHH GHGHGHGHGHH



processElements :: [Int] -> Int -> Int -> Int
processElements [] _ maxDiff = maxDiff
processElements (x:arr) previousElement maxDiff
    | x > previousElement = processElements arr x maxDiff
    | otherwise = processElements arr previousElement (max maxDiff (previousElement - x)) + (previousElement - x)

-- To call this function, you would start with an initial maxDiff of 0 (or minBound for Int if you prefer)
-- and the first element of the list as the initial previousElement.
-- Example call (assuming `ints` is your list of integers):
-- processElements (tail ints) (head ints) 0


myFunc :: Int -> IO()

myFunc n
  | n <= 0 = return ()
  | otherwise = do
      x <- getLine
    --   x is the size of the array now
      arr <- getLine
      let ints = map read (words arr) :: [Int]
      let sum = processElements ints (head ints) 0
      
      putStrLn (show sum)
      myFunc (n - 1)



main :: IO()
main = do
    x <- readLn
    -- how the fuck do we know that x is an int... I still don't know 
    myFunc x