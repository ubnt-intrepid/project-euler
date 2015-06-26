problem4 = maximum [ z | i <- [100..999], j <- [i..999], let z=i*j, let s = show z, s == reverse s ]
main = putStrLn $ show problem4
