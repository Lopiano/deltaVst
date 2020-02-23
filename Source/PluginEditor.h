/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class DeltaAudioProcessorEditor  : public AudioProcessorEditor,
                                   public Slider::Listener
{
public:
    DeltaAudioProcessorEditor (DeltaAudioProcessor&);
    ~DeltaAudioProcessorEditor();

    
    void sliderValueChanged (Slider* slider) override;
    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    
    Slider gainSlider;
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    DeltaAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DeltaAudioProcessorEditor)
};
