//
//     Generated by private class-dump
//

@class UIImageView, NSString;

@interface IESLivePKComponentStreamBackground : IESLivePKComponent <HTSLiveStreamPlayerAction> {
    UIImageView *_backgroundImage;
    UIImageView *_upBackgroundImage;
    UIImageView *_downBackgroundImage;
}

@property (retain, nonatomic) UIImageView *backgroundImage;
@property (retain, nonatomic) UIImageView *upBackgroundImage;
@property (retain, nonatomic) UIImageView *downBackgroundImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidLoad;
- (void)componentContainerFrameChanged;
- (void)handleBattleBg:(id)arg0 topImage:(id)arg1 bottomImage:(id)arg2;
- (void)playerDidEndplayInSmallWindow;
- (void)updateBackgroundImage:(id /* block */)arg0;
- (void)setCameraCornerHidden:(BOOL)arg0;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)loadStreamBackground;
- (id)upBackgroundImage;
- (id)downBackgroundImage;
- (void)updateTopBackgroundImage:(id /* block */)arg0 bottomImageBlock:(id /* block */)arg1;
- (void)setUpBackgroundImage:(id)arg0;
- (void)setDownBackgroundImage:(id)arg0;
- (void)componentInteracting;
- (void)updateStreamBackground;
- (id)backgroundImage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setBackgroundImage:(id)arg0;
- (void)clean;

@end
