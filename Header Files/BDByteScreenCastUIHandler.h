//
//     Generated by private class-dump
//

@class NSString, NSTimer, BDSCContainerView, BDByteScreenCastContext, BDSCClarityErrorAlert, UIButton;
@protocol BDByteScreenCastUIHandlerDelegate, BDByteScreenCastClarityChooseView, BDByteScreenCastFloatBallProtocol, BDByteScreenCastSearchDevicesView;

@interface BDByteScreenCastUIHandler : NSObject <BDByteScreenCastSearchDevicesViewDelegate, BDByteScreenCastClarityChooseViewDelegate, BDSCControlViewDelegate> {
    BOOL _newSearchPanelStyle;
    float _preVolume;
    id<BDByteScreenCastUIHandlerDelegate> _delegate;
    id<BDByteScreenCastSearchDevicesView> _searchDevicesView;
    BDByteScreenCastContext *_byteScreenCastContext;
    NSTimer *_searchOverTimer;
    BDSCContainerView *_byteScreenCastControlViewContainer;
    id<BDByteScreenCastClarityChooseView> _clarityChooseView;
    UIButton<BDByteScreenCastFloatBallProtocol> *_floatBall;
    BDSCClarityErrorAlert *_clarityErrorAlert;
    NSString *_networkTokenForSearchView;
    NSString *_progressTokenForControlView;
    NSString *_castStatusTokenForControlView;
    NSString *_playStatusTokenForControlView;
    NSString *_playItemTokenForControlView;
    NSString *_currentDeviceTokenForControlView;
    NSString *_xsgIdentifyForSearchView;
    long long _volumeSequenceNumberOnOS15;
    NSString *_isVPNActiveTokenForSearchView;
    NSString *_permissionTokenForSearchView;
    NSString *_invalidDLNATokenForSearchView;
    NSTimer *_checkLocalNetworkTimer;
}

@property (retain, nonatomic) BDByteScreenCastContext *byteScreenCastContext;
@property (retain, nonatomic) id<BDByteScreenCastSearchDevicesView> searchDevicesView;
@property (retain, nonatomic) NSTimer *searchOverTimer;
@property (retain, nonatomic) BDSCContainerView *byteScreenCastControlViewContainer;
@property (retain, nonatomic) id<BDByteScreenCastClarityChooseView> clarityChooseView;
@property (retain, nonatomic) UIButton<BDByteScreenCastFloatBallProtocol> *floatBall;
@property (retain, nonatomic) BDSCClarityErrorAlert *clarityErrorAlert;
@property (nonatomic) BOOL newSearchPanelStyle;
@property (copy, nonatomic) NSString *networkTokenForSearchView;
@property (copy, nonatomic) NSString *progressTokenForControlView;
@property (copy, nonatomic) NSString *castStatusTokenForControlView;
@property (copy, nonatomic) NSString *playStatusTokenForControlView;
@property (copy, nonatomic) NSString *playItemTokenForControlView;
@property (copy, nonatomic) NSString *currentDeviceTokenForControlView;
@property (copy, nonatomic) NSString *xsgIdentifyForSearchView;
@property (nonatomic) float preVolume;
@property (nonatomic) long long volumeSequenceNumberOnOS15;
@property (copy, nonatomic) NSString *isVPNActiveTokenForSearchView;
@property (copy, nonatomic) NSString *permissionTokenForSearchView;
@property (copy, nonatomic) NSString *invalidDLNATokenForSearchView;
@property (retain, nonatomic) NSTimer *checkLocalNetworkTimer;
@property (weak, nonatomic) id<BDByteScreenCastUIHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startSearch;
- (float)preVolume;
- (void)setPreVolume:(float)arg0;
- (void)closeSearchDeviceViewController;
- (id)byteScreenCastContext;
- (void)showCastControlViewWithConfig:(id)arg0;
- (void)updateControlViewConfig:(id)arg0;
- (void)showControlViewWithStatus:(unsigned long long)arg0 animated:(BOOL)arg1;
- (void)searchDeviceViewWillShow:(id)arg0;
- (void)searchDeviceViewWillDismiss:(id)arg0;
- (void)searchDeviceViewDidDisAppear:(id)arg0;
- (id)currentConnectedDevice;
- (void)searchDeviceView:(id)arg0 deviceCellClicked:(id)arg1;
- (void)searchDeviceView:(id)arg0 searchBtnClicked:(id)arg1;
- (void)dismissControlViewWithCompletion:(id /* block */)arg0;
- (unsigned long long)controlViewShowingStyle;
- (void)clarityChooseViewWillShow:(id)arg0;
- (void)clarityChooseViewWillDismiss:(id)arg0;
- (void)clarityChooseViewDidDisAppear:(id)arg0;
- (id)clarityChooseView:(id)arg0 cellTitleForClarity:(id)arg1;
- (void)clarityChooseView:(id)arg0 attemptChangeToClarity:(id)arg1;
- (void)changeDeviceButtonClicked:(id)arg0;
- (void)closeCastButtonClicked:(id)arg0 controlView:(id)arg1;
- (void)controlViewShowedInLandscapeWithStyle:(unsigned long long)arg0 controlView:(id)arg1;
- (void)backButtonClicked:(id)arg0 controlView:(id)arg1;
- (void)playButtonClicked:(id)arg0 controlView:(id)arg1;
- (void)attemptToSeekFromTime:(long long)arg0 to:(long long)arg1 controlView:(id)arg2;
- (void)changeClarityButtonClicked:(id)arg0 controlView:(id)arg1;
- (void)searchDeviceView:(id)arg0 tvDownloadBtnClicked:(id)arg1;
- (void)searchDeviceView:(id)arg0 helpBtnClicked:(id)arg1;
- (id)initWithScreenCastContext:(id)arg0;
- (void)setByteScreenCastContext:(id)arg0;
- (void)restartSearch;
- (void)controlViewShowedWithStyle:(unsigned long long)arg0 controlView:(id)arg1;
- (void)attemptToOpenFeedbackPage:(id)arg0 controlView:(id)arg1;
- (void)castDanmakuButtonClicked:(id)arg0 controlView:(id)arg1;
- (void)showSearchDeviceViewControllerWithDeviceList:(id)arg0;
- (void)attemptChangeClarityToClarity:(id)arg0;
- (void)changePlayItemClarityToClarity:(id)arg0;
- (void)changeConnectedDeviceToDevice:(id)arg0;
- (void)connectedDeviceToDevice:(id)arg0;
- (void)openTVDownloadPage;
- (void)openFeedbackPage;
- (void)clearFloatBall;
- (void)closeClarityChooseView;
- (void)showFloatBall:(BOOL)arg0;
- (void)showClarityChooseView;
- (id)searchDevicesView;
- (BOOL)newSearchPanelStyle;
- (void)updateSearchDeviceViewWithDeviceList:(id)arg0;
- (void)searchDeviceViewAirPlayClicked:(id)arg0;
- (id)searchOverTimer;
- (void)setSearchOverTimer:(id)arg0;
- (id)checkLocalNetworkTimer;
- (void)setCheckLocalNetworkTimer:(id)arg0;
- (void)volumeChangedOnOS15:(id)arg0;
- (void)searchViewShouldRestartSearch;
- (BOOL)hasLimitedClarity;
- (void)addObserverForSearchViewController;
- (void)startCheckLocalNetwork;
- (void)stopSearchOverTimer;
- (void)stopCheckLocalNetwork;
- (void)startSearchOverTimer;
- (id)byteScreenCastControlViewContainer;
- (void)controlViewWillShow;
- (void)removeObserverForControlView;
- (id)floatBall;
- (void)setFloatBall:(id)arg0;
- (double)overTimeInterval;
- (void)openScheme:(id)arg0 trackParams:(id)arg1 forceInPortraitStyle:(BOOL)arg2;
- (void)openScheme:(id)arg0 trackParams:(id)arg1;
- (id)clarityChooseView;
- (void)setProgressTokenForControlView:(id)arg0;
- (void)setCastStatusTokenForControlView:(id)arg0;
- (void)setPlayStatusTokenForControlView:(id)arg0;
- (void)setPlayItemTokenForControlView:(id)arg0;
- (void)setCurrentDeviceTokenForControlView:(id)arg0;
- (id)progressTokenForControlView;
- (id)castStatusTokenForControlView;
- (id)playStatusTokenForControlView;
- (id)playItemTokenForControlView;
- (void)removeObserverForSearchViewController;
- (void)setNetworkTokenForSearchView:(id)arg0;
- (void)setXsgIdentifyForSearchView:(id)arg0;
- (void)setPermissionTokenForSearchView:(id)arg0;
- (id)networkTokenForSearchView;
- (id)xsgIdentifyForSearchView;
- (id)permissionTokenForSearchView;
- (id)isVPNActiveTokenForSearchView;
- (id)invalidDLNATokenForSearchView;
- (BOOL)hasObserverForControlView;
- (void)addObserverForControlView;
- (void)volumeChangedWithNewVolume:(float)arg0;
- (long long)volumeSequenceNumberOnOS15;
- (void)setVolumeSequenceNumberOnOS15:(long long)arg0;
- (BOOL)isControlViewShowInScreen;
- (void)setSearchDevicesView:(id)arg0;
- (void)openHelpPage;
- (void)xsgDeviceAttemptChangeTo4KClarity:(id)arg0;
- (void)deviceAttemptChangeToLimitedClarity:(id)arg0;
- (void)setClarityErrorAlert:(id)arg0;
- (id)clarityErrorAlert;
- (void)floatBallClicked:(id)arg0;
- (id)clarityChooseViewTitle:(id)arg0;
- (void)attemptToIncreaseVolume:(BOOL)arg0 controlView:(id)arg1;
- (void)attemptToShowSeriesView:(id)arg0 controlView:(id)arg1;
- (void)showFloatBall:(BOOL)arg0 controlView:(id)arg1;
- (void)attemptToOpenHelpPage:(id)arg0 controlView:(id)arg1;
- (void)retryConnectButtonClicked:(id)arg0 controlView:(id)arg1;
- (void)continuePlayButtonClicked:(id)arg0 controlView:(id)arg1;
- (void)setByteScreenCastControlViewContainer:(id)arg0;
- (void)setClarityChooseView:(id)arg0;
- (void)setNewSearchPanelStyle:(BOOL)arg0;
- (id)currentDeviceTokenForControlView;
- (void)setIsVPNActiveTokenForSearchView:(id)arg0;
- (void)setInvalidDLNATokenForSearchView:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)volumeChanged:(id)arg0;

@end
