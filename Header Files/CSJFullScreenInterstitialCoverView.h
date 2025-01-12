//
//     Generated by private class-dump
//

@class NSString;

@interface CSJFullScreenInterstitialCoverView : CSJFullScreenInterstitialAdView <CSJCoverViewDelegate, CSJInterstitialCoverViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerReadyToPlay:(id)arg0;
- (id)initWithMaterial:(id)arg0 adSlot:(id)arg1 imageStyle:(unsigned long long)arg2;
- (void)logoImageViewAction;
- (void)coverViewClick:(id)arg0 areaCategory:(long long)arg1 clickExtraInfo:(id)arg2;
- (void)coverViewClickVideo:(id)arg0;
- (void)coverViewClickClose:(id)arg0;
- (void)coverViewClickAdLogo:(id)arg0;
- (void)coverViewClickDownload:(id)arg0 clickExtraInfo:(id)arg1;
- (void)interstitialCoverView:(id)arg0 videoDidLoadFailWithError:(id)arg1;
- (void)interstitialCoverView:(id)arg0 videoStateDidChanged:(long long)arg1;
- (void)playerDidPlayFinish:(id)arg0;
- (void)videoAdViewDidClick:(id)arg0;
- (void)videoAdViewFinishViewDidClick:(id)arg0;
- (void)videoAdViewDidCloseOtherController:(id)arg0 interactionType:(long long)arg1;
- (void)setup;
- (void)layoutSubviews;

@end
