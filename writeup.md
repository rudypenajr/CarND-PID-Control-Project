### Rubric Discussion Points

## Describe the effect each of the P, I, D components had in your implementation

'P' - 'P' stands for **proportional**. Proportional to what though? Well, the rate of adjustment needed to do is **proportional** to the cross track error. The counter to this is that this single component does not take into account mass and inertia. This will result in us *overshooting*, left and right.

'I' - 'I' stands for **integral**. The **integral** is the cummulative error and is used to correct for small drifts and issues the vehicle may have. For the PID Project, the parameter is set to a very small value since we can expect simulator not to be drifting.

'D' - 'D' stands for **derivative**. The **derivative** accounts the difference of the current error and the previous error, which attempts to slow down the as the system reaches minimum error. The parameter tries to prevent the *overshooting* mentioned in 'P'.


## Describe how the final hyperparameters were chosen.
The hyperparameters were manually tuned. Looking through the Discussion Forums for PID, I found a link to [An Intro and Tutorial for PID Controllers](https://udacity-reviews-uploads.s3.amazonaws.com/_attachments/41330/1493863065/pid_control_document.pdf) which talks about manually tuning, which I found really helpful. So essentially I followed those steps:
 1. Set Kp, Ki, Kd to 0. This disabled them for now.
 2. Increased Kp until error is fairly small. This would get me to the end of the bridge and then crashed.
 3. Increase Kd until overshoot is fairly minimal. Started with a small value but still got to end of the bridge and then crashed. As I began to increase the value higher, the turns got even more dangerous.
 4. Increase Kp to compensate Kd.
 5. Set Ki to a small value.
 
