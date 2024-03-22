//
//     Generated by private class-dump
//

@class IESLiveVideoGiftMetalConfiguration, NSString, IESLiveVideoGiftController;

@interface AWEUGPendantAlphaVideoView : AWEUGPendantContentBaseView <IESLiveVideoGiftControllerDelegate> {
    BOOL _isExistedError;
    BOOL _playSuccessfully;
    IESLiveVideoGiftController *_expandedController;
    IESLiveVideoGiftController *_foldedController;
    IESLiveVideoGiftMetalConfiguration *_expandedConfig;
    IESLiveVideoGiftMetalConfiguration *_foldedConfig;
    long long _retryTimes;
    id /* block */ _contentPlaySuccessfullyHandler;
    id /* block */ _contentPlayFailedHandler;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _foldFrame;
}

@property (retain, nonatomic) IESLiveVideoGiftController *expandedController;
@property (retain, nonatomic) IESLiveVideoGiftController *foldedController;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *expandedConfig;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *foldedConfig;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } foldFrame;
@property (nonatomic) BOOL isExistedError;
@property (nonatomic) BOOL playSuccessfully;
@property (nonatomic) long long retryTimes;
@property (copy, nonatomic) id /* block */ contentPlaySuccessfullyHandler;
@property (copy, nonatomic) id /* block */ contentPlayFailedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)arg0;
- (void)videoGiftController:(id)arg0 willPlayFrame:(id)arg1;
- (long long)retryTimes;
- (void)setRetryTimes:(long long)arg0;
- (void)setFoldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)performUpdateFromState:(unsigned long long)arg0 toState:(unsigned long long)arg1 animated:(BOOL)arg2 animationStart:(id /* block */)arg3 animationEnd:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })foldFrame;
- (void)setContentPlaySuccessfullyHandler:(id /* block */)arg0;
- (void)setContentPlayFailedHandler:(id /* block */)arg0;
- (id /* block */)contentPlaySuccessfullyHandler;
- (id /* block */)contentPlayFailedHandler;
- (void)playLoopAniamtion;
- (void)animateWithDuration:(double)arg0 timingFunction:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)addAlphaVideoControllerWithConfig:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setFoldedController:(id)arg0;
- (void)setExpandedConfig:(id)arg0;
- (void)setFoldedConfig:(id)arg0;
- (void)switchPlayingAlphaVideoWithFolded:(BOOL)arg0;
- (id)foldedController;
- (void)setPlaySuccessfully:(BOOL)arg0;
- (void)setIsExistedError:(BOOL)arg0;
- (void)performFoldingAnimationWithAnimationStart:(id /* block */)arg0 animationEnd:(id /* block */)arg1;
- (void)performExpandingAnimationWithAnimationStart:(id /* block */)arg0 animationEnd:(id /* block */)arg1;
- (void)performEdgingAnimationWithAnimationStart:(id /* block */)arg0 animationEnd:(id /* block */)arg1;
- (void)performUnedgingAnimationWithAnimationStart:(id /* block */)arg0 animationEnd:(id /* block */)arg1;
- (void)trackAlphaVideoLogWithMessage:(id)arg0;
- (id)expandedConfig;
- (id)foldedConfig;
- (void)monitorAlphaVideoPlayRetrySuccessfullyWithRetryTimes:(long long)arg0;
- (BOOL)playSuccessfully;
- (void)monitorAlphaVideoPlayFailedWithError:(id)arg0;
- (BOOL)isExistedError;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 expandFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 foldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 foldedAlphaVideo:(id)arg3 expandedAlphaVideo:(id)arg4;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 expandFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 foldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 foldedAlphaVideo:(id)arg3 expandedAlphaVideo:(id)arg4;
- (void).cxx_destruct;
- (void)pauseAnimation;
- (void)appDidBecomeActive;
- (void)addObservers;
- (id)expandedController;
- (void)setExpandedController:(id)arg0;

@end
