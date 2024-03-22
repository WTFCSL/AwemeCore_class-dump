//
//     Generated by private class-dump
//

@class NSString, IESLiveVideoGiftController;

@interface IESLiveEffectPlayerView : UIView <IESLiveVideoGiftControllerDelegate> {
    BOOL _enableTap;
    BOOL _loop;
    id /* block */ _playCompletion;
    id /* block */ _tapCallBack;
    IESLiveVideoGiftController *_videoController;
}

@property (retain, nonatomic) IESLiveVideoGiftController *videoController;
@property (copy, nonatomic) id /* block */ playCompletion;
@property (copy, nonatomic) id /* block */ tapCallBack;
@property (nonatomic) BOOL enableTap;
@property (nonatomic) BOOL loop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)arg0;
- (void)videoGiftController:(id)arg0 didTapMasks:(id)arg1;
- (void)videoGiftController:(id)arg0 isReadyToPlayOnView:(id)arg1;
- (BOOL)enableTap;
- (void)setEnableTap:(BOOL)arg0;
- (void)setTapCallBack:(id /* block */)arg0;
- (id /* block */)tapCallBack;
- (void)setupVideoGiftControl;
- (void)closePlayer;
- (id /* block */)playCompletion;
- (void)playVideoWithLocalPath:(id)arg0 maskInfo:(id)arg1;
- (void)setPlayCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)cancelWithError:(id)arg0;
- (void)cancel;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (BOOL)loop;
- (id)videoController;
- (void)setVideoController:(id)arg0;
- (void)setLoop:(BOOL)arg0;

@end
