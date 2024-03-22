//
//     Generated by private class-dump
//

@class IESLiveSoloKTVPlayerInternalSlider, UILabel, UIView, IESSoloKTVDrawCGImpl;

@interface IESLiveSoloKTVPlayerSliderV2 : UIView {
    id /* block */ _sliderValueChangedBlock;
    IESLiveSoloKTVPlayerInternalSlider *_slider;
    UILabel *_timeLabel;
    UIView *_dotView;
    IESSoloKTVDrawCGImpl *_asyncDraw;
}

@property (retain, nonatomic) IESLiveSoloKTVPlayerInternalSlider *slider;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) IESSoloKTVDrawCGImpl *asyncDraw;
@property (copy, nonatomic) id /* block */ sliderValueChangedBlock;

- (void)sliderValueChanged:(id)arg0 forEvent:(id)arg1;
- (void)setAsyncDraw:(id)arg0;
- (void)updateTrackImageWithStartColor:(id)arg0 endColor:(id)arg1;
- (id)asyncDraw;
- (void)updateSliderToLarge;
- (void)updateDotFrame;
- (void)updateSliderToNormal;
- (id /* block */)sliderValueChangedBlock;
- (void)updateDurationText:(double)arg0;
- (void)setSliderValueChangedBlock:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)slider;
- (void)setSlider:(id)arg0;
- (void)setTimeLabel:(id)arg0;
- (float)getDuration;
- (id)timeLabel;
- (id)dotView;
- (void)setDotView:(id)arg0;
- (void)updateValue:(double)arg0;
- (void)updateDuration:(double)arg0;

@end
