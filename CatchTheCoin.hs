-- {-# OPTIONS_GHC -Wall #-}

myFunc :: Int -> IO()

myFunc n
  | n <= 0 = return ()
  | otherwise = do
      x <- getLine
      -- x here represents the two coordinates of the coin


      let [y1, y2] = map read (words x) :: [Int]

      if y2 >= -1
          then putStrLn "YES"
          else putStrLn "NO"
      
      myFunc (n - 1)


main :: IO()
main = do
    x <- readLn
    -- x represents the number of lines of input
    myFunc x
    