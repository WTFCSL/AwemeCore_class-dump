//
//     Generated by private class-dump
//

@class CSJExpressRewardFullScreenVM, CSJAdSlot;
@protocol CSJNativeExpressVideoAdDelegate;

@interface CSJNativeExpressRewardedVideoAdViewController : UIViewController {
    CSJExpressRewardFullScreenVM *_viewModel;
}

@property (weak, nonatomic) id<CSJNativeExpressVideoAdDelegate> rewardedVideoAd;
@property (nonatomic) BOOL isRewardedVideo;
@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (copy, nonatomic) id /* block */ purePlayableClickBlock;
@property (retain, nonatomic) CSJExpressRewardFullScreenVM *viewModel;

- (void)setAdSlot:(id)arg0;
- (id)initWithNativeExpressAdView:(id)arg0 purePlayableNativeAd:(id)arg1;
- (void)setPurePlayableClickBlock:(id /* block */)arg0;
- (id)rewardedVideoAd;
- (void)setRewardedVideoAd:(id)arg0;
- (id)reallyMaterialMeta;
- (id /* block */)purePlayableClickBlock;
- (id)adSlot;
- (BOOL)isRewardedVideo;
- (void)setIsRewardedVideo:(BOOL)arg0;
- (BOOL)shouldAutorotate;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end