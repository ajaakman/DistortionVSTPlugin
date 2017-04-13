# aap-coursework-ajaakman
aap-coursework-ajaakman created by GitHub Classroom


The ArcTan(x) Waveshaper is a VST Audio Plugin that uses an arctangent function to add harmonics to an audio signal.

y(n) = ( 1 / arctan (k) ) * arctan ( kx ( n ) )

-------------------------------------------------------------------------------------------------------------------------------

The Plugin operates using a flexible dual channel configuration. 
Each channel has 5 controllable parameters that give a high degree of control over the sound, allowing the user the 
finetune their sound.

-------------------------------------------------------------------------------------------------------------------------------

To start using the plugin, insert the plugin into an audio track in you DAW. 
By default, the plugin works in a dual channel configuration with the first row of controls affecting the left and 
second row the right channels. The first button on the left sets the the plugin to a single channel configuration, 
where the upper row affects both channels. The button on the far right will flip the channel controls. 
Stage, POS and NEG affect the amount of distortion applied. The Stage parameters sets how many stages are cascaded
in series, adding additional distortion. The POS and NEG parameters affect the curves withing the function for
positive and negative values, adding asymmetry. 
The Inver button will invert the distortion curves between each stage, creating a different type of sound. This
can be best heard, when the POS and NEG parameters are opposite in value, i.e. POS is 0.1 and NEG is 10, or vice versa.

-------------------------------------------------------------------------------------------------------------------------------

The effect sounds particullarly good when attemting to make a bass guitar sound warmer in a Mix. The many adjustable parameters
will allow you to fine tune the sound to your exact taste.


-------------------------------------------------------------------------------------------------------------------------------

Designed and Created by Artur Jaakman
Algorithm based on chapter 14.3 of 'Designing Audio Effect Plug-Ins in C++', by Will Pirkle.
