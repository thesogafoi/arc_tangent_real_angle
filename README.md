when we use arc tangent (atanf)  in c++ , recall from studies of trigonometry that the inverse tangent function has some problems ; in particular its range is [-90,90] 
which means we cannot get angles outside qudrants 1 and 4 . however  , (x,y) can be in any quadrant. clearly we have problem , but making some observations to solve it.

for example if our point in 2d plane is (-4,4) (in second quadrant) , arc tangent will give us -45 (degree not radian) , 
but we know the angle of this point is not -45 . since x (first number in our point )is negative it has to be to the left of the y-axis and
since y is positive must be above the x-axis.
but in second quadrant our angle is not -45 , so when we add 180 to 45 we give 135 degree . that's it , we want this number
and this number is real angle of our point 

![Alt text](https://raw.github.com/potherca-blog/StackOverflow/master/question.13808020.include-an-svg-hosted-on-github-in-markdown/controllers_brief.svg)

