//
//     Generated by private class-dump
//

@class NSString;

@protocol IESLiveMultiAudioAnchorSeatViewProtocol <HTSGuestInfoRenderer, HTSLivePluginLayoutView, IESLiveInteractSeatProvider>

@property (retain, nonatomic) NSString *linkmicFancticketStr;
@property (copy, nonatomic) id /* block */ onFanticketInfoViewClicked;
@property (readonly, nonatomic) BOOL isShowingGuideAnimation;
@property (nonatomic) BOOL isEnlarge;

- (void)stopAnimate;
- (void)startAnimate;
- (BOOL)isEnlarge;
- (void)setIsEnlarge:(BOOL)arg0;
- (void)updateSoundAnimationDidChangeWithSpeakingImageList:(id)arg0;
- (void)startMultiTalkingAnimationIfNeededWithSpeakingType:(unsigned long long)arg0;
- (void)updateSoundAnimationWithStartURLs:(id)arg0 loopURLs:(id)arg1;
- (BOOL)isShowingGuideAnimation;
- (void)startGuideAnimationWithBubbleData:(id)arg0 endBlock:(id /* block */)arg1;
- (id /* block */)onFanticketInfoViewClicked;
- (void)setOnFanticketInfoViewClicked:(id /* block */)arg0;
- (void)updateAvatarWithUser:(id)arg0 complete:(id /* block */)arg1;
- (id)linkmicFancticketStr;
- (void)setLinkmicFancticketStr:(id)arg0;

@end