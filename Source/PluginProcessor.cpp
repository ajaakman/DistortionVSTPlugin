/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
NonLinearAudioProcessor::NonLinearAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
     : AudioProcessor (BusesProperties()
                     #if ! JucePlugin_IsMidiEffect
                      #if ! JucePlugin_IsSynth
                       .withInput  ("Input",  AudioChannelSet::stereo(), true)
                      #endif
                       .withOutput ("Output", AudioChannelSet::stereo(), true)
                     #endif
                       )
#endif
{
}

NonLinearAudioProcessor::~NonLinearAudioProcessor()
{
}

//==============================================================================
const String NonLinearAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

int NonLinearAudioProcessor::getNumParameters()
{
	return kNumParameters;
}

float NonLinearAudioProcessor::getParameter(int index)
{
	switch (index)
	{
	case	kGainLposition:				return gainLposition;
	case	kStagesLposition:			return stagesLposition;
	case	kArcTanPosLposition:		return arcTanPosLposition;
	case	kArcTanNegLposition:		return arcTanNegLposition;
	case	kStagesL:					return stagesL;
	case	kGainRposition:				return gainRposition;
	case	kStagesRposition:			return stagesRposition;
	case	kArcTanPosRposition:		return arcTanPosRposition;
	case	kArcTanNegRposition:		return arcTanNegRposition;
	case	kStagesR:					return stagesR;
	case	kChannelSwap:				return channelSwap;
	case	kSingleChannel:				return singleChannel;
	default:							return 0.0f;
	}
}

void NonLinearAudioProcessor::setParameter (int index, float newValue)
{
	switch (index)
	{
	case kGainLposition:
		gainLposition = newValue;
		break;
	case kStagesLposition:
		stagesLposition = newValue;
		break;
	case kArcTanPosLposition:
		arcTanPosLposition = newValue;
		break;
	case kArcTanNegLposition:
		arcTanNegLposition = newValue;
		break;
	//case kStagesL:
	//	stagesL = newValue;
	//	break;
	case kGainRposition:
		gainRposition = newValue;
		break;
	case kStagesRposition:
		stagesRposition = newValue;
		break;
	case kArcTanPosRposition:
		arcTanPosRposition = newValue;
		break;
	case kArcTanNegRposition:
		arcTanNegRposition = newValue;
		break;
//	case kStagesR:
	//	stagesR = newValue;
	//	break;
//	case kChannelSwap:
	//	channelSwap = newValue;
	//	break;
	//case kSingleChannel:
	//	singleChannel = newValue;
	//	break;
	default:
		break;
	}
}

const String NonLinearAudioProcessor::getParameterName(int index)
{
	switch (index)
	{
	case	kGainLposition:				return "gain L";
	case	kStagesLposition:			return "stages L position";
	case	kArcTanPosLposition:		return "arctan pos L";
	case	kArcTanNegLposition:		return "arctan neg L";
	case	kStagesL:					return "stages L";
	case	kGainRposition:				return "gain R";
	case	kStagesRposition:			return "stages R position";
	case	kArcTanPosRposition:		return "arctan pos R";
	case	kArcTanNegRposition:		return "arctan neg R";
	case	kStagesR:					return "stages R";
	case	kChannelSwap:				return "channel swap";
	case	kSingleChannel:				return "single channel";
	default:							break;
	}
	return String::empty;
}

const String NonLinearAudioProcessor::getParameterText(int index)
{
	return String (getParameter(index), 2);
}


bool NonLinearAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool NonLinearAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

double NonLinearAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int NonLinearAudioProcessor::getNumPrograms()
{
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int NonLinearAudioProcessor::getCurrentProgram()
{
    return 0;
}

void NonLinearAudioProcessor::setCurrentProgram (int index)
{
}

const String NonLinearAudioProcessor::getProgramName (int index)
{
    return String();
}

void NonLinearAudioProcessor::changeProgramName (int index, const String& newName)
{
}

//==============================================================================
void NonLinearAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    // initialisation that you need..
}

void NonLinearAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool NonLinearAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
  #if JucePlugin_IsMidiEffect
    ignoreUnused (layouts);
    return true;
  #else
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    if (layouts.getMainOutputChannelSet() != AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
   #if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
   #endif

    return true;
  #endif
}
#endif

void NonLinearAudioProcessor::processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
{
    const int totalNumInputChannels  = getTotalNumInputChannels();
    const int totalNumOutputChannels = getTotalNumOutputChannels();

    // In case we have more outputs than inputs, this code clears any output
    // channels that didn't contain input data, (because these aren't
    // guaranteed to be empty - they may contain garbage).
    // This is here to avoid people getting screaming feedback
    // when they first compile a plugin, but obviously you don't need to keep
    // this code if your algorithm always overwrites all the output channels.
	for (int i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
		buffer.clear(i, 0, buffer.getNumSamples());

	// Retrieve the total number of samples in the buffer for this block     
	int numSamples = buffer.getNumSamples();

	// channelDataL and channelDataR are pointers to arrays of length numSamples which 
	// contain the audio for one channel.  You repeat this for each channel     
	float *channelDataL = buffer.getWritePointer(0);
	float *channelDataR = buffer.getWritePointer(1);
	
	//-------------Start of Distortion Code----------------------------------------------------------------------------------------------------------

	//2 nested if statements in another if statement control channel swapping

	if (singleChannel == false) {  //checking button for Single or Dual channel
		if (channelSwap == false) {  //checking button for channel swap
			for (int i = 0; i < numSamples; ++i)  //running the loop based on number of samples in block
			{

				for (int j = 0; j < stagesLposition; j++)   //running loop based on number of stages, to apply algorithm multiple times for more distortion
				{
					if (channelDataL[i] >= 0)
						channelDataL[i] = ((1.0 / atan(arcTanPosLposition)) * atan(arcTanPosLposition*channelDataL[i])*gainLposition);  //positive side of arctan function
					else
						channelDataL[i] = ((1.0 / atan(arcTanNegLposition)) * atan(arcTanNegLposition*channelDataL[i])*gainLposition);  //negative side of arctan function
					if (stagesL == true && j % 2 == 0) { //inverting every other stage if button is pressed
						channelDataL[i] *= -1.0;
					}
				}
			}
			for (int i = 0; i < numSamples; ++i)  //same as above, but for the right channel
			{

				for (int j = 0; j < stagesRposition; j++)
				{
					if (channelDataR[i] >= 0)
						channelDataR[i] = ((1.0 / atan(arcTanPosRposition)) * atan(arcTanPosRposition*channelDataR[i])*gainRposition);
					else
						channelDataR[i] = ((1.0 / atan(arcTanNegRposition)) * atan(arcTanNegRposition*channelDataR[i])*gainRposition);
					if (stagesR == true && j % 2 == 0) {
						channelDataR[i] *= -1.0;
					}
				}
			}
		}
		else { //dual channel swapped channels
			for (int i = 0; i < numSamples; ++i)
			{

				for (int j = 0; j < stagesLposition; j++)
				{
					if (channelDataR[i] >= 0)
						channelDataR[i] = ((1.0 / atan(arcTanPosLposition)) * atan(arcTanPosLposition*channelDataR[i])*gainLposition);
					else
						channelDataR[i] = ((1.0 / atan(arcTanNegLposition)) * atan(arcTanNegLposition*channelDataR[i])*gainLposition);
					if (stagesL == true && j % 2 == 0) {
						channelDataR[i] *= -1.0;
					}
				}
			}
			for (int i = 0; i < numSamples; ++i)
			{

				for (int j = 0; j < stagesRposition; j++)
				{
					if (channelDataL[i] >= 0)
						channelDataL[i] = ((1.0 / atan(arcTanPosRposition)) * atan(arcTanPosRposition*channelDataL[i])*gainRposition);
					else
						channelDataL[i] = ((1.0 / atan(arcTanNegRposition)) * atan(arcTanNegRposition*channelDataL[i])*gainRposition);
					if (stagesR == true && j % 2 == 0) {
						channelDataL[i] *= -1.0;
					}
				}
			}
		}
	}
	else {  //single channel
		if (channelSwap == false) {  //single channel no swop
			for (int i = 0; i < numSamples; ++i)
			{

				for (int j = 0; j < stagesLposition; j++)
				{
					if (channelDataL[i] >= 0)
						channelDataL[i] = ((1.0 / atan(arcTanPosLposition)) * atan(arcTanPosLposition*channelDataL[i])*gainLposition);
					else
						channelDataL[i] = ((1.0 / atan(arcTanNegLposition)) * atan(arcTanNegLposition*channelDataL[i])*gainLposition);
					if (stagesL == true && j % 2 == 0) {
						channelDataL[i] *= -1.0;
					}
				}
			}
			for (int i = 0; i < numSamples; ++i)
			{

				for (int j = 0; j < stagesLposition; j++)
				{
					if (channelDataR[i] >= 0)
						channelDataR[i] = ((1.0 / atan(arcTanPosLposition)) * atan(arcTanPosLposition*channelDataR[i])*gainLposition);
					else
						channelDataR[i] = ((1.0 / atan(arcTanNegLposition)) * atan(arcTanNegLposition*channelDataR[i])*gainLposition);
					if (stagesL == true && j % 2 == 0) {
						channelDataR[i] *= -1.0;
					}
				}
			}
		}
		else { // single channel, swapped channels
			for (int i = 0; i < numSamples; ++i)
			{

				for (int j = 0; j < stagesRposition; j++)
				{
					if (channelDataR[i] >= 0)
						channelDataR[i] = ((1.0 / atan(arcTanPosRposition)) * atan(arcTanPosRposition*channelDataR[i])*gainRposition);
					else
						channelDataR[i] = ((1.0 / atan(arcTanNegRposition)) * atan(arcTanNegRposition*channelDataR[i])*gainRposition);
					if (stagesR == true && j % 2 == 0) {
						channelDataR[i] *= -1.0;
					}
				}
			}
			for (int i = 0; i < numSamples; ++i)
			{

				for (int j = 0; j < stagesRposition; j++)
				{
					if (channelDataL[i] >= 0)
						channelDataL[i] = ((1.0 / atan(arcTanPosRposition)) * atan(arcTanPosRposition*channelDataL[i])*gainRposition);
					else
						channelDataL[i] = ((1.0 / atan(arcTanNegRposition)) * atan(arcTanNegRposition*channelDataL[i])*gainRposition);
					if (stagesR == true && j % 2 == 0) {
						channelDataL[i] *= -1.0;
					}

				}
			}
		}
	}
}
//-------------End of Distortion Code----------------------------------------------------------------------------------------------------------


//==============================================================================
bool NonLinearAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* NonLinearAudioProcessor::createEditor()
{
    return new NonLinearAudioProcessorEditor (*this);
}

//==============================================================================
void NonLinearAudioProcessor::getStateInformation (MemoryBlock& destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
}

void NonLinearAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new NonLinearAudioProcessor();
}
