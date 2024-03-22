//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface AWEFeedRVCardFakeProgressSliderView : UIView <AWEFakeProgressSliderViewProtocol> {
    double _percentage;
    UIView *_progressSliderContainerView;
    UIView *_maximumTrackView;
    UIView *_minimumTrackView;
    UIView *_thumbView;
}

@property (retain, nonatomic) UIView *progressSliderContainerView;
@property (retain, nonatomic) UIView *maximumTrackView;
@property (retain, nonatomic) UIView *minimumTrackView;
@property (retain, nonatomic) UIView *thumbView;
@property (nonatomic) double percentage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)progressSliderContainerView;
- (id)minimumTrackView;
- (id)maximumTrackView;
- (void)setProgressSliderContainerView:(id)arg0;
- (void)setMaximumTrackView:(id)arg0;
- (void)setMinimumTrackView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)thumbView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (double)percentage;
- (void)setupUI;
- (void)setThumbView:(id)arg0;
- (void)show:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setPercentage:(double)arg0;

@end
