/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_4256DE31A32D2019__
#define __JUCE_HEADER_4256DE31A32D2019__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class NonLinearAudioProcessorEditor  : public AudioProcessorEditor,
                                       public Timer,
                                       public SliderListener,
                                       public ButtonListener
{
public:
    //==============================================================================
    NonLinearAudioProcessorEditor (NonLinearAudioProcessor& p);
    ~NonLinearAudioProcessorEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void timerCallback();
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* aapcoursework_png;
    static const int aapcoursework_pngSize;
    static const char* aapcoursework_png2;
    static const int aapcoursework_png2Size;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    NonLinearAudioProcessor& processor;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> sliderGainL;
    ScopedPointer<ToggleButton> buttonStagesL;
    ScopedPointer<Slider> sliderStagesL;
    ScopedPointer<Slider> sliderArcTanPosL;
    ScopedPointer<Slider> sliderArcTanNegL;
    ScopedPointer<Slider> sliderGainR;
    ScopedPointer<Slider> sliderStagesR;
    ScopedPointer<Slider> sliderArcTanPosR;
    ScopedPointer<Slider> sliderArcTanNegR;
    ScopedPointer<ToggleButton> buttonStagesR;
    ScopedPointer<ToggleButton> buttonChannelSwap;
    ScopedPointer<ToggleButton> buttonSingleChannel;
    Image cachedImage_aapcoursework_png2_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NonLinearAudioProcessorEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_4256DE31A32D2019__
