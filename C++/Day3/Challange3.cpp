// Challange name -- Fastest three horses
// Q.> You have 25 horses such that we can't able to calculate the exact speed of the horses. We can race max 5 horses together at one time only to know the which horse is the fastest. We have to find the minimum races needed to find the fastes three horses.

// Ans - 7
//  horses name will be
//   a1 a2 a3 a4 a5 -> a1 winners
//   b1 b2 b3 b4 b5 -> b1
//   c1 c2 c3 c4 c5 -> c1
//   d1 d2 d3 d4 d5 -> d1
//   e1 e2 e3 e4 e5 -> e1
// Answers -
// divide the the into the group of 5  and there are total 5 group.
// Step 1- race each group and the note the 1st place winner.
// step 2 - race the group of the 1st place occupier whoever win get the 1st fastest horse. Suppose [ a1 ] wins then we got the fastest
// since we dont have the direct relation of the speed bcz we took the horses from from different group we can't able get accurate data
// from prev race lets assume we got [ b1 ] and 2nd place then  we gonna took the  [ a2 ] from the race 1 bcz [ a1 ] beats [ a2 ] and we dont have raltion bw a2 and b1
// step 3- race the remmaing 5 horses -> a2 b1 c1 d1 e1
//  from this whoever wins gots the 2nd place and runnerup got the third place.