//
//     Generated by private class-dump
//

@class AWELandscapeProgressView, NSString;

@interface AWELandscapeProgressSliderController : AWELandscapeInteractionBaseController <AWELandscapeProgressViewDelegate> {
    BOOL _shouldResponsePanGesture;
    BOOL _shouldResponseTapGesture;
    AWELandscapeProgressView *_progressView;
}

@property (retain, nonatomic) AWELandscapeProgressView *progressView;
@property (nonatomic) BOOL shouldResponsePanGesture;
@property (nonatomic) BOOL shouldResponseTapGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (BOOL)shouldResponseGestureRecognizer:(id)arg0;
- (BOOL)handleResponseGestureRecognizer:(id)arg0;
- (void)willEnterSplitScreen:(BOOL)arg0 movePoint:(struct CGPoint { double x0; double x1; })arg1 scale:(double)arg2;
- (void)updateScreenCastProgress;
- (void)showScreenCastView:(BOOL)arg0 showFeedBack:(BOOL)arg1;
- (void)updateControllerWithAnimationOffset:(double)arg0 positon:(long long)arg1;
- (void)seekToPlayTime:(double)arg0 completion:(id /* block */)arg1;
- (BOOL)shouldResponsePanGesture;
- (void)setShouldResponsePanGesture:(BOOL)arg0;
- (void)progressViewTouchBegan:(double)arg0;
- (void)progressViewTouchChanged:(double)arg0;
- (void)progressViewTouchEnded:(double)arg0 bySlideScreen:(BOOL)arg1;
- (void)setShouldResponseTapGesture:(BOOL)arg0;
- (void)progressViewClicked:(double)arg0;
- (BOOL)shouldResponseTapGesture;
- (void)updateState:(long long)arg0;
- (double)totalDuration;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (BOOL)isInteracting;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)reset;
- (void)viewDidLoad;

@end
