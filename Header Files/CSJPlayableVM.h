//
//     Generated by private class-dump
//

@class NSString;

@interface CSJPlayableVM : CSJRewardFullScreenBaseVM <CSJPurePlayableLoadingViewControllerDelegate, CSJRewardedVideoWebViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initViewModelWithMeta:(id)arg0 rootViewController:(id)arg1 slot:(id)arg2;
- (void)vmLoadData;
- (void)updateLeftSeconds:(id)arg0;
- (void)leftLblControl:(BOOL)arg0;
- (void)closeBtnControl:(BOOL)arg0;
- (void)rewardReport;
- (void)handlePurePlayablePlayFinish;
- (void)clickButtonTapFromPlayableLoading;
- (void)purePlayableRemoveLoadingByTimeout;
- (void)purePlayableVolumeChange:(id)arg0 isMute:(BOOL)arg1;
- (BOOL)isPlayableRenderFailed;
- (void)rewardedVideoWebViewControllerOpenUrlWithParams:(id)arg0;
- (void)startTimer;

@end
