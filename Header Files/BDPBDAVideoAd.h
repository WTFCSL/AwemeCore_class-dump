//
//     Generated by private class-dump
//

@class UINavigationController, BDARewardedVideoAdBaseController, NSString, BDPUniqueID;
@protocol BDPAppVideoAdDelegate;

@interface BDPBDAVideoAd : NSObject <BDARewardedVideoAdDelegate, UINavigationControllerDelegate, BDPAppVideoAdProtocol> {
    BDARewardedVideoAdBaseController *_videoAdViewController;
    UINavigationController *_nav;
    BDPUniqueID *_uniqueId;
    NSString *_adUnitId;
    id<BDPAppVideoAdDelegate> _delegate;
}

@property (retain, nonatomic) BDARewardedVideoAdBaseController *videoAdViewController;
@property (retain, nonatomic) UINavigationController *nav;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSString *adUnitId;
@property (weak, nonatomic) id<BDPAppVideoAdDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAdUnitId:(id)arg0;
- (id)adUnitId;
- (void)videoAd:(id)arg0 didClickCloseWithInfo:(id)arg1;
- (void)videoAdBecomeEffective:(id)arg0;
- (void)videoAdStartPlay:(id)arg0 isResume:(BOOL)arg1;
- (void)videoAd:(id)arg0 didLoadFailWithError:(id)arg1;
- (void)videoAdDidLoadSuccess:(id)arg0;
- (void)videoAd:(id)arg0 didClickBannerBtnWithInfo:(id)arg1;
- (void)videoAd:(id)arg0 didClickBannerCardWithInfo:(id)arg1;
- (void)setNav:(id)arg0;
- (id)initWithDelegate:(id)arg0 uniqueId:(id)arg1 adUnitId:(id)arg2;
- (void)bdp_createVideoAdWithResultCompletion:(id /* block */)arg0;
- (void)bdp_loadAd;
- (void)bdp_showFromViewController:(id)arg0 completion:(id /* block */)arg1;
- (void)setVideoAdViewController:(id)arg0;
- (id)videoAdViewController;
- (id)uniqueId;
- (void)setUniqueId:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg0;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg0;
- (id)nav;

@end
