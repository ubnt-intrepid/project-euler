-- runhaskell 002.hs

fibonatti :: Integer -> [Integer]
fibonatti 1 = [1]
fibonatti 2 = [1,1]
fibonatti n = fib ++ [(last fib) + (last $ init fib)]
    where fib = fibonatti (n - 1)

problem2 = sum [x | x <- (fibonatti 1000), x `mod` 2 == 0, x < 4000000]

main = putStrLn $ show problem2 
