/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#ifndef PLUGINPROCESSOR_H_INCLUDED
#define PLUGINPROCESSOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"


//==============================================================================
/**
*/
class NonLinearAudioProcessor  : public AudioProcessor
{
public:
    //==============================================================================
    NonLinearAudioProcessor();
    ~NonLinearAudioProcessor();

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif

    void processBlock (AudioSampleBuffer&, MidiBuffer&) override;

    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

	enum Parameters
	{	
	kGainLposition = 0,
	kStagesLposition, 
	kArcTanPosLposition, 
	kArcTanNegLposition ,
	kStagesL, 
	kGainRposition,
	kStagesRposition,
	kArcTanPosRposition, 
	kArcTanNegRposition ,
	kStagesR, 
	kChannelSwap, 
	kSingleChannel, 
	kNumParameters
	};

	float gainLposition = 1;
	float stagesLposition = 1;
	float arcTanPosLposition = 0.1;
	float arcTanNegLposition = 0.1;
	bool stagesL = false;
	float gainRposition = 1;
	float stagesRposition = 1;
	float arcTanPosRposition = 0.1;
	float arcTanNegRposition = 0.1;
	bool stagesR = false;
	bool channelSwap = false;
	bool singleChannel = false;

	int	getNumParameters();
	float getParameter(int index);
	void setParameter(int index, float newValue);
	const String getParameterName(int index);
	const String getParameterText(int index);

private:
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NonLinearAudioProcessor)
};


#endif  // PLUGINPROCESSOR_H_INCLUDED
