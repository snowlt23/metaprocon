
g++ -Wall -std=c++11 -O2 $1.cpp
for f in *.in ; do
  if [[ $f =~ $1_.*.in ]] ; then
    diff <(cat $f | ./a) ${f%.in}.out
  fi
done

