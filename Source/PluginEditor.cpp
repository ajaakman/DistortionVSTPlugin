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
	//sliderGainL->setValue(1); // Setting inital values for sliders.
	//sliderGainR->setValue(1); // When recompiling the interface, this section moves to the top of the function, which brakes it. Appears to be a JUCE bug.
    //[/Constructor_pre]

    addAndMakeVisible (sliderGainL = new Slider ("new slider"));
    sliderGainL->setRange (0, 1, 0);
    sliderGainL->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderGainL->setTextBoxStyle (Slider::TextBoxBelow, false, 30, 20);
    sliderGainL->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderGainL->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderGainL->addListener (this);

    addAndMakeVisible (buttonStagesL = new ToggleButton ("new toggle button"));
    buttonStagesL->setButtonText (String());
    buttonStagesL->addListener (this);

    addAndMakeVisible (sliderStagesL = new Slider ("new slider"));
    sliderStagesL->setRange (1, 5, 1);
    sliderStagesL->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderStagesL->setTextBoxStyle (Slider::TextBoxBelow, false, 30, 20);
    sliderStagesL->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderStagesL->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderStagesL->addListener (this);

    addAndMakeVisible (sliderArcTanPosL = new Slider ("new slider"));
    sliderArcTanPosL->setRange (0.1, 10, 0);
    sliderArcTanPosL->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderArcTanPosL->setTextBoxStyle (Slider::TextBoxBelow, false, 30, 20);
    sliderArcTanPosL->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderArcTanPosL->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderArcTanPosL->addListener (this);

    addAndMakeVisible (sliderArcTanNegL = new Slider ("new slider"));
    sliderArcTanNegL->setRange (0.1, 10, 0);
    sliderArcTanNegL->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderArcTanNegL->setTextBoxStyle (Slider::TextBoxBelow, false, 30, 20);
    sliderArcTanNegL->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderArcTanNegL->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderArcTanNegL->addListener (this);

    addAndMakeVisible (sliderGainR = new Slider ("new slider"));
    sliderGainR->setRange (0, 1, 0);
    sliderGainR->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderGainR->setTextBoxStyle (Slider::TextBoxBelow, false, 30, 20);
    sliderGainR->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderGainR->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderGainR->addListener (this);

    addAndMakeVisible (sliderStagesR = new Slider ("new slider"));
    sliderStagesR->setRange (1, 5, 1);
    sliderStagesR->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderStagesR->setTextBoxStyle (Slider::TextBoxBelow, false, 30, 20);
    sliderStagesR->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderStagesR->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderStagesR->addListener (this);

    addAndMakeVisible (sliderArcTanPosR = new Slider ("new slider"));
    sliderArcTanPosR->setRange (0.1, 10, 0);
    sliderArcTanPosR->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderArcTanPosR->setTextBoxStyle (Slider::TextBoxBelow, false, 30, 20);
    sliderArcTanPosR->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    sliderArcTanPosR->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    sliderArcTanPosR->addListener (this);

    addAndMakeVisible (sliderArcTanNegR = new Slider ("new slider"));
    sliderArcTanNegR->setRange (0.1, 10, 0);
    sliderArcTanNegR->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderArcTanNegR->setTextBoxStyle (Slider::TextBoxBelow, false, 30, 20);
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

    setSize (580, 290);


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

    g.setColour (Colours::black);
    g.setFont (Font ("OCR A Std", 17.00f, Font::bold));
    g.drawText (TRANS("Gain   Stage   POS  Invert  NEG"),
                100, 140, 388, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font ("OCR A Std", 13.00f, Font::plain));
    g.drawText (TRANS("Single"),
                12, 156, 68, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font ("OCR A Std", 13.00f, Font::plain));
    g.drawText (TRANS("Channel"),
                12, 172, 68, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font ("OCR A Std", 13.00f, Font::plain));
    g.drawText (TRANS("Swap"),
                500, 156, 68, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font ("OCR A Std", 11.50f, Font::plain));
    g.drawText (TRANS("Channels"),
                500, 172, 68, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font ("OCR A Std", 29.50f, Font::bold));
    g.drawText (TRANS("WaveShaper"),
                96, 252, 388, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font ("OCR A Std", 50.60f, Font::bold));
    g.drawText (TRANS("ARCTAN(x)"),
                72, 4, 452, 68,
                Justification::centred, true);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void NonLinearAudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    sliderGainL->setBounds (88, 57, 80, 80);
    buttonStagesL->setBounds (372, 94, 24, 24);
    sliderStagesL->setBounds (179, 57, 80, 80);
    sliderArcTanPosL->setBounds (266, 57, 80, 80);
    sliderArcTanNegL->setBounds (424, 57, 80, 80);
    sliderGainR->setBounds (88, 167, 80, 80);
    sliderStagesR->setBounds (179, 167, 80, 80);
    sliderArcTanPosR->setBounds (266, 167, 80, 80);
    sliderArcTanNegR->setBounds (424, 167, 80, 80);
    buttonStagesR->setBounds (372, 191, 24, 24);
    buttonChannelSwap->setBounds (522, 136, 24, 24);
    buttonSingleChannel->setBounds (32, 136, 24, 24);
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
		processor.stagesL = buttonStagesL->getToggleState();
        //[/UserButtonCode_buttonStagesL]
    }
    else if (buttonThatWasClicked == buttonStagesR)
    {
        //[UserButtonCode_buttonStagesR] -- add your button handler code here..
		processor.stagesR = buttonStagesR->getToggleState();
        //[/UserButtonCode_buttonStagesR]
    }
    else if (buttonThatWasClicked == buttonChannelSwap)
    {
        //[UserButtonCode_buttonChannelSwap] -- add your button handler code here..
		processor.channelSwap = buttonChannelSwap->getToggleState();
        //[/UserButtonCode_buttonChannelSwap]
    }
    else if (buttonThatWasClicked == buttonSingleChannel)
    {
        //[UserButtonCode_buttonSingleChannel] -- add your button handler code here..
		processor.singleChannel = buttonSingleChannel->getToggleState();
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
                 fixedSize="0" initialWidth="580" initialHeight="290">
  <BACKGROUND backgroundColour="ffffffff">
    <TEXT pos="100 140 388 30" fill="solid: ff000000" hasStroke="0" text="Gain   Stage   POS  Invert  NEG"
          fontname="OCR A Std" fontsize="17" bold="1" italic="0" justification="36"/>
    <TEXT pos="12 156 68 30" fill="solid: ff000000" hasStroke="0" text="Single"
          fontname="OCR A Std" fontsize="13" bold="0" italic="0" justification="36"/>
    <TEXT pos="12 172 68 30" fill="solid: ff000000" hasStroke="0" text="Channel"
          fontname="OCR A Std" fontsize="13" bold="0" italic="0" justification="36"/>
    <TEXT pos="500 156 68 30" fill="solid: ff000000" hasStroke="0" text="Swap"
          fontname="OCR A Std" fontsize="13" bold="0" italic="0" justification="36"/>
    <TEXT pos="500 172 68 30" fill="solid: ff000000" hasStroke="0" text="Channels"
          fontname="OCR A Std" fontsize="11.5" bold="0" italic="0" justification="36"/>
    <TEXT pos="96 252 388 30" fill="solid: ff000000" hasStroke="0" text="WaveShaper"
          fontname="OCR A Std" fontsize="29.5" bold="1" italic="0" justification="36"/>
    <TEXT pos="72 4 452 68" fill="solid: ff000000" hasStroke="0" text="ARCTAN(x)"
          fontname="OCR A Std" fontsize="50.600000000000001421" bold="1"
          italic="0" justification="36"/>
  </BACKGROUND>
  <SLIDER name="new slider" id="4f7f4ba51139aeec" memberName="sliderGainL"
          virtualName="" explicitFocusOrder="0" pos="88 57 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="0" max="1" int="0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="30"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <TOGGLEBUTTON name="new toggle button" id="d0999ef3f0c8fbee" memberName="buttonStagesL"
                virtualName="" explicitFocusOrder="0" pos="372 94 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="new slider" id="ed64f2b27d92f208" memberName="sliderStagesL"
          virtualName="" explicitFocusOrder="0" pos="179 57 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="1" max="5" int="1" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="30"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="d8dc63b8a462c25d" memberName="sliderArcTanPosL"
          virtualName="" explicitFocusOrder="0" pos="266 57 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="0.10000000000000000555" max="10"
          int="0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="30" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="new slider" id="dc9e905b77deffd9" memberName="sliderArcTanNegL"
          virtualName="" explicitFocusOrder="0" pos="424 57 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="0.10000000000000000555" max="10"
          int="0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="30" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="new slider" id="e5359d0300d91cc6" memberName="sliderGainR"
          virtualName="" explicitFocusOrder="0" pos="88 167 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="0" max="1" int="0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="30"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="2e5b1da571e3ee60" memberName="sliderStagesR"
          virtualName="" explicitFocusOrder="0" pos="179 167 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="1" max="5" int="1" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="30"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="ea800404147548f0" memberName="sliderArcTanPosR"
          virtualName="" explicitFocusOrder="0" pos="266 167 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="0.10000000000000000555" max="10"
          int="0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="30" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="new slider" id="603b589a806fa809" memberName="sliderArcTanNegR"
          virtualName="" explicitFocusOrder="0" pos="424 167 80 80" rotarysliderfill="7f000000"
          textboxbkgd="ffffffff" min="0.10000000000000000555" max="10"
          int="0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="30" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <TOGGLEBUTTON name="new toggle button" id="bb98061b73e6a7bf" memberName="buttonStagesR"
                virtualName="" explicitFocusOrder="0" pos="372 191 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="5b3ba7af13b60a1e" memberName="buttonChannelSwap"
                virtualName="" explicitFocusOrder="0" pos="522 136 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="e00e7cd8e5280105" memberName="buttonSingleChannel"
                virtualName="" explicitFocusOrder="0" pos="32 136 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
