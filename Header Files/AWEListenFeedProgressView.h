//
//     Generated by private class-dump
//

@class NSString, AWEListenFeedProgressSlider, UILabel, UIView;
@protocol AWEListenFeedProgressViewDelegate;

@interface AWEListenFeedProgressView : UIView <AWEListenFeedProgressViewProtocol> {
    id<AWEListenFeedProgressViewDelegate> _delegate;
    UIView *_bgProgressView;
    AWEListenFeedProgressSlider *_progressSlider;
    UILabel *_currentTime;
    UILabel *_remainTime;
}

@property (retain, nonatomic) UIView *bgProgressView;
@property (retain, nonatomic) AWEListenFeedProgressSlider *progressSlider;
@property (retain, nonatomic) UILabel *currentTime;
@property (retain, nonatomic) UILabel *remainTime;
@property (weak, nonatomic) id<AWEListenFeedProgressViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)progressSliderValueChanged:(id)arg0;
- (id)formateDuration:(double)arg0;
- (void)initSubviews;
- (void)updateCurrentTime:(double)arg0 totalTime:(double)arg1;
- (id)bgProgressView;
- (id)remainTime;
- (void)sliderProgressSliderTouchBegan:(id)arg0;
- (void)sliderProgressSliderTouchEnded:(id)arg0;
- (void)setBgProgressView:(id)arg0;
- (void)setRemainTime:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setCurrentTime:(id)arg0;
- (id)delegate;
- (id)currentTime;
- (void)setDelegate:(id)arg0;
- (void)initConstraints;
- (id)progressSlider;
- (void)setProgressSlider:(id)arg0;

@end
