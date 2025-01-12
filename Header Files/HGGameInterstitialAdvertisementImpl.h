//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, UIView, HGUniqueID;
@protocol HGAwemeRevisitPluginDelegate;

@interface HGGameInterstitialAdvertisementImpl : NSObject <BDARVAlertDelegate, HGGameJumpingViewDelegate, HGPluginGameInterstitialAdvertisementImplProtocol> {
    HGUniqueID *_uniqueID;
    UIView *_currentView;
    NSMutableDictionary *_interstitialContainer;
    id<HGAwemeRevisitPluginDelegate> _revisitPluginDelegate;
}

@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (retain, nonatomic) UIView *currentView;
@property (retain, nonatomic) NSMutableDictionary *interstitialContainer;
@property (retain, nonatomic) id<HGAwemeRevisitPluginDelegate> revisitPluginDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)alertWillStartLoad:(id)arg0;
- (void)alert:(id)arg0 didLoadFailWithError:(id)arg1;
- (void)alertDidLoadSuccess:(id)arg0;
- (void)alert:(id)arg0 didClickBannerWithInfo:(id)arg1;
- (void)alert:(id)arg0 didClickCloseWithInfo:(id)arg1;
- (void)alert:(id)arg0 didClickButtonWithInfo:(id)arg1;
- (void)operateInterstitialAdWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)onClickGameJumpingViewCloseButton:(id)arg0;
- (BOOL)_enableAdvertisement;
- (id)interstitialContainer;
- (void)_onStateAdLoadedWithAdUnitID:(id)arg0;
- (void)_currentViewClose;
- (void)_onStateAdClosedWithAdUnitID:(id)arg0;
- (void)setInterstitialContainer:(id)arg0;
- (id)revisitPluginDelegate;
- (void)_onStateAdErrorWithAdUnitID:(id)arg0 error:(id)arg1;
- (void)_advertisementStateChangeWithAdUnitID:(id)arg0 state:(id)arg1 data:(id)arg2;
- (void)setRevisitPluginDelegate:(id)arg0;
- (void)_setupObserver;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)_enterBackground:(id)arg0;
- (void)_enterForeground:(id)arg0;
- (id)currentView;
- (void)setCurrentView:(id)arg0;

@end
