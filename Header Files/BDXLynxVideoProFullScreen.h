//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface BDXLynxVideoProFullScreen : UIViewController {
    NSString *_imageURL;
    UIView *_playerView;
    unsigned long long _restoreOrientation;
    id /* block */ _dismissBlk;
}

@property (retain, nonatomic) NSString *imageURL;
@property (weak, nonatomic) UIView *playerView;
@property (nonatomic) unsigned long long restoreOrientation;
@property (copy, nonatomic) id /* block */ dismissBlk;

- (void)setRestoreOrientation:(unsigned long long)arg0;
- (unsigned long long)restoreOrientation;
- (void)setDismissBlk:(id /* block */)arg0;
- (id /* block */)dismissBlk;
- (id)initWithPlayerView:(id)arg0 dismiss:(id /* block */)arg1;
- (BOOL)shouldAutorotate;
- (void)dismiss;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)setImageURL:(id)arg0;
- (long long)preferredStatusBarStyle;
- (id)imageURL;
- (id)playerView;
- (BOOL)prefersStatusBarHidden;
- (void)setPlayerView:(id)arg0;
- (void)viewDidLoad;
- (void)show:(id /* block */)arg0;
- (void)setupUI;

@end