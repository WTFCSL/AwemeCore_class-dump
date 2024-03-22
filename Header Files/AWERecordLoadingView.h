//
//     Generated by private class-dump
//

@class AVAudioPlayer, NSArray, LOTAnimationView, UIImage, UIView, NSString, AWERecordLoadingMaskView;

@interface AWERecordLoadingView : UIView <AVAudioPlayerDelegate> {
    UIView *_bgView;
    AWERecordLoadingMaskView *_maskView;
    UIImage *_gifImage;
    id /* block */ _completion;
    LOTAnimationView *_countDownAnimationView;
    AVAudioPlayer *_player;
    NSArray *_audioSegementName;
    long long _audioIndex;
}

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) AWERecordLoadingMaskView *maskView;
@property (retain, nonatomic) UIImage *gifImage;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) LOTAnimationView *countDownAnimationView;
@property (retain, nonatomic) AVAudioPlayer *player;
@property (retain, nonatomic) NSArray *audioSegementName;
@property (nonatomic) long long audioIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGifImage:(id)arg0;
- (id)gifImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 delayRecordMode:(long long)arg1 animationCompletion:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 animationCompletion:(id /* block */)arg1;
- (void)setAudioSegementName:(id)arg0;
- (void)playerWithFirstAudioIndex:(long long)arg0;
- (id)audioSegementName;
- (void)setAudioIndex:(long long)arg0;
- (long long)audioIndex;
- (id)countDownAnimationView;
- (void)setCountDownAnimationView:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)maskView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setPlayer:(id)arg0;
- (void)setMaskView:(id)arg0;
- (id)player;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1;

@end