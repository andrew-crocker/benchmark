benchmark
=========

Benchmark tests for Galileo

Benchmark Categories:
  
  Compiler:
  
      % time g++ -o Empty/empty Empty/empty.cpp
      % time g++ -o Hello/hello_world Hello/hello_world.cpp
      % time OOP/make
      
  Processor:
  
      % time Empty/empty
      % time Hello/hello_world
      % time Fibonacci/fib 35
      
  Memory:
  
      % time RAMtest/alloc
      % time RAMtest/read
      % time RAMtest/write
