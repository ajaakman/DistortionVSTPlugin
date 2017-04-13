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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
NonLinearAudioProcessorEditor::NonLinearAudioProcessorEditor (NonLinearAudioProcessor& p)
    : AudioProcessorEditor(p), processor(p)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (sliderGainL = new Slider ("new slider"));
    sliderGainL->setRange (0, 1, 0);
    sliderGainL->setSliderStyle (Slider::Rotary);
    sliderGainL->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    sliderGainL->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderGainL->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderGainL->addListener (this);

    addAndMakeVisible (buttonStagesL = new ToggleButton ("new toggle button"));
    buttonStagesL->setButtonText (String());
    buttonStagesL->addListener (this);

    addAndMakeVisible (sliderStagesL = new Slider ("new slider"));
    sliderStagesL->setRange (1, 10, 0);
    sliderStagesL->setSliderStyle (Slider::Rotary);
    sliderStagesL->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    sliderStagesL->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderStagesL->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderStagesL->addListener (this);

    addAndMakeVisible (sliderArcTanPosL = new Slider ("new slider"));
    sliderArcTanPosL->setRange (0.1, 20, 0);
    sliderArcTanPosL->setSliderStyle (Slider::Rotary);
    sliderArcTanPosL->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    sliderArcTanPosL->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderArcTanPosL->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderArcTanPosL->addListener (this);

    addAndMakeVisible (sliderArcTanNegL = new Slider ("new slider"));
    sliderArcTanNegL->setRange (0.1, 20, 0);
    sliderArcTanNegL->setSliderStyle (Slider::Rotary);
    sliderArcTanNegL->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    sliderArcTanNegL->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderArcTanNegL->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderArcTanNegL->addListener (this);

    addAndMakeVisible (sliderGainR = new Slider ("new slider"));
    sliderGainR->setRange (0, 1, 0);
    sliderGainR->setSliderStyle (Slider::Rotary);
    sliderGainR->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    sliderGainR->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderGainR->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderGainR->addListener (this);

    addAndMakeVisible (sliderStagesR = new Slider ("new slider"));
    sliderStagesR->setRange (1, 10, 0);
    sliderStagesR->setSliderStyle (Slider::Rotary);
    sliderStagesR->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    sliderStagesR->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderStagesR->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderStagesR->addListener (this);

    addAndMakeVisible (sliderArcTanPosR = new Slider ("new slider"));
    sliderArcTanPosR->setRange (0.1, 20, 0);
    sliderArcTanPosR->setSliderStyle (Slider::Rotary);
    sliderArcTanPosR->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    sliderArcTanPosR->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderArcTanPosR->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderArcTanPosR->addListener (this);

    addAndMakeVisible (sliderArcTanNegR = new Slider ("new slider"));
    sliderArcTanNegR->setRange (0.1, 20, 0);
    sliderArcTanNegR->setSliderStyle (Slider::Rotary);
    sliderArcTanNegR->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    sliderArcTanNegR->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderArcTanNegR->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderArcTanNegR->addListener (this);

    addAndMakeVisible (buttonStagesR = new ToggleButton ("new toggle button"));
    buttonStagesR->setButtonText (String());
    buttonStagesR->addListener (this);

    addAndMakeVisible (buttonChannelSwap = new ToggleButton ("new toggle button"));
    buttonChannelSwap->setButtonText (String());
    buttonChannelSwap->addListener (this);

    addAndMakeVisible (buttonSingleChannel = new ToggleButton ("new toggle button"));
    buttonSingleChannel->setButtonText (String());
    buttonSingleChannel->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (480, 240);


    //[Constructor] You can add your own custom stuff here..
    startTimer(200);
    //[/Constructor]
}

NonLinearAudioProcessorEditor::~NonLinearAudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    sliderGainL = nullptr;
    buttonStagesL = nullptr;
    sliderStagesL = nullptr;
    sliderArcTanPosL = nullptr;
    sliderArcTanNegL = nullptr;
    sliderGainR = nullptr;
    sliderStagesR = nullptr;
    sliderArcTanPosR = nullptr;
    sliderArcTanNegR = nullptr;
    buttonStagesR = nullptr;
    buttonChannelSwap = nullptr;
    buttonSingleChannel = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void NonLinearAudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void NonLinearAudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    sliderGainL->setBounds (48, 24, 80, 80);
    buttonStagesL->setBounds (16, 40, 24, 24);
    sliderStagesL->setBounds (136, 24, 80, 80);
    sliderArcTanPosL->setBounds (224, 24, 80, 80);
    sliderArcTanNegL->setBounds (312, 24, 80, 80);
    sliderGainR->setBounds (48, 133, 80, 80);
    sliderStagesR->setBounds (136, 133, 80, 80);
    sliderArcTanPosR->setBounds (224, 133, 80, 80);
    sliderArcTanNegR->setBounds (312, 133, 80, 80);
    buttonStagesR->setBounds (16, 160, 24, 24);
    buttonChannelSwap->setBounds (416, 64, 24, 24);
    buttonSingleChannel->setBounds (416, 144, 24, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void NonLinearAudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == sliderGainL)
    {
        //[UserSliderCode_sliderGainL] -- add your slider handling code here..
		processor.gainLposition = sliderGainL->getValue();
		//[/UserSliderCode_sliderGainL]
    }
    else if (sliderThatWasMoved == sliderStagesL)
    {
        //[UserSliderCode_sliderStagesL] -- add your slider handling code here..
		processor.stagesLposition = sliderStagesL->getValue();
		//[/UserSliderCode_sliderStagesL]
    }
    else if (sliderThatWasMoved == sliderArcTanPosL)
    {
        //[UserSliderCode_sliderArcTanPosL] -- add your slider handling code here..
		processor.arcTanPosLposition = sliderArcTanPosL->getValue();
		//[/UserSliderCode_sliderArcTanPosL]
    }
    else if (sliderThatWasMoved == sliderArcTanNegL)
    {
        //[UserSliderCode_sliderArcTanNegL] -- add your slider handling code here..
		processor.arcTanNegLposition = sliderArcTanNegL->getValue();
		//[/UserSliderCode_sliderArcTanNegL]
    }
    else if (sliderThatWasMoved == sliderGainR)
    {
        //[UserSliderCode_sliderGainR] -- add your slider handling code here..
		processor.gainRposition = sliderGainR->getValue();
		//[/UserSliderCode_sliderGainR]
    }
    else if (sliderThatWasMoved == sliderStagesR)
    {
        //[UserSliderCode_sliderStagesR] -- add your slider handling code here..
		processor.stagesRposition = sliderStagesR->getValue();
		//[/UserSliderCode_sliderStagesR]
    }
    else if (sliderThatWasMoved == sliderArcTanPosR)
    {
        //[UserSliderCode_sliderArcTanPosR] -- add your slider handling code here..
		processor.arcTanPosRposition = sliderArcTanPosR->getValue();
		//[/UserSliderCode_sliderArcTanPosR]
    }
    else if (sliderThatWasMoved == sliderArcTanNegR)
    {
        //[UserSliderCode_sliderArcTanNegR] -- add your slider handling code here..
		processor.arcTanNegRposition = sliderArcTanNegR->getValue();
		//[/UserSliderCode_sliderArcTanNegR]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void NonLinearAudioProcessorEditor::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == buttonStagesL)
    {
        //[UserButtonCode_buttonStagesL] -- add your button handler code here..
		processor.stagesL = buttonStagesL->isDown();
		//[/UserButtonCode_buttonStagesL]
    }
    else if (buttonThatWasClicked == buttonStagesR)
    {
        //[UserButtonCode_buttonStagesR] -- add your button handler code here..
		processor.stagesR = buttonStagesR->isDown();
		//[/UserButtonCode_buttonStagesR]
    }
    else if (buttonThatWasClicked == buttonChannelSwap)
    {
        //[UserButtonCode_buttonChannelSwap] -- add your button handler code here..
		processor.channelSwap = buttonChannelSwap->isDown();
		//[/UserButtonCode_buttonChannelSwap]
    }
    else if (buttonThatWasClicked == buttonSingleChannel)
    {
        //[UserButtonCode_buttonSingleChannel] -- add your button handler code here..
		processor.singleChannel = buttonSingleChannel->isDown();
		//[/UserButtonCode_buttonSingleChannel]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void NonLinearAudioProcessorEditor::timerCallback()
{
    //exchange any data you want between UI elements and the Plugin "ourProcessor"
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="NonLinearAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="NonLinearAudioProcessor&amp; p" variableInitialisers="AudioProcessorEditor(p), processor(p)&#10;"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="480" initialHeight="240">
  <BACKGROUND backgroundColour="ffffffff"/>
  <SLIDER name="new slider" id="4f7f4ba51139aeec" memberName="sliderGainL"
          virtualName="" explicitFocusOrder="0" pos="48 24 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="0" max="1" int="0" style="Rotary"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <TOGGLEBUTTON name="new toggle button" id="d0999ef3f0c8fbee" memberName="buttonStagesL"
                virtualName="" explicitFocusOrder="0" pos="16 40 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="new slider" id="ed64f2b27d92f208" memberName="sliderStagesL"
          virtualName="" explicitFocusOrder="0" pos="136 24 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="1" max="10" int="0" style="Rotary"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="d8dc63b8a462c25d" memberName="sliderArcTanPosL"
          virtualName="" explicitFocusOrder="0" pos="224 24 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="0.10000000000000000555" max="20"
          int="0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="dc9e905b77deffd9" memberName="sliderArcTanNegL"
          virtualName="" explicitFocusOrder="0" pos="312 24 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="0.10000000000000000555" max="20"
          int="0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="e5359d0300d91cc6" memberName="sliderGainR"
          virtualName="" explicitFocusOrder="0" pos="48 133 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="0" max="1" int="0" style="Rotary"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="2e5b1da571e3ee60" memberName="sliderStagesR"
          virtualName="" explicitFocusOrder="0" pos="136 133 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="1" max="10" int="0" style="Rotary"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="ea800404147548f0" memberName="sliderArcTanPosR"
          virtualName="" explicitFocusOrder="0" pos="224 133 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="0.10000000000000000555" max="20"
          int="0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="603b589a806fa809" memberName="sliderArcTanNegR"
          virtualName="" explicitFocusOrder="0" pos="312 133 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="0.10000000000000000555" max="20"
          int="0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <TOGGLEBUTTON name="new toggle button" id="bb98061b73e6a7bf" memberName="buttonStagesR"
                virtualName="" explicitFocusOrder="0" pos="16 160 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="5b3ba7af13b60a1e" memberName="buttonChannelSwap"
                virtualName="" explicitFocusOrder="0" pos="416 64 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="e00e7cd8e5280105" memberName="buttonSingleChannel"
                virtualName="" explicitFocusOrder="0" pos="416 144 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
