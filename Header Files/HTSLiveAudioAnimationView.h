//
//     Generated by private class-dump
//

@class NSTimer, UIImageView;
@protocol IESLiveWebPPlayer;

@interface HTSLiveAudioAnimationView : UIView {
    BOOL _isWebpAnimationStyle;
    BOOL _shouldStop;
    NSTimer *_rippleTimer;
    UIImageView<IESLiveWebPPlayer> *_audioWebpAnimator;
}

@property (retain, nonatomic) NSTimer *rippleTimer;
@property (nonatomic) BOOL shouldStop;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *audioWebpAnimator;
@property (nonatomic) BOOL isWebpAnimationStyle;

- (void)setImageUrls:(id)arg0;
- (void)setIsWebpAnimationStyle:(BOOL)arg0;
- (BOOL)isWebpAnimationStyle;
- (void)loadWebPAnimator;
- (id)audioWebpAnimator;
- (void)startRipple;
- (void)addRippleLayer;
- (void)setRippleTimer:(id)arg0;
- (id)rippleTimer;
- (void)closeRippleTimer;
- (id)defaultWebpImage;
- (void)setAudioWebpAnimator:(id)arg0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (BOOL)shouldStop;
- (void)setShouldStop:(BOOL)arg0;

@end
