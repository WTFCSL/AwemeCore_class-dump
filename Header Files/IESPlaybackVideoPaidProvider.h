//
//     Generated by private class-dump
//

@class UIView, IESLivePayWallPingAPI, NSString, IESLiveGCDTimer, IESPlaybackVideoFreeTrialView, NSMutableArray, NSDictionary, UIVisualEffectView;
@protocol IESLiveVideoPreviewPlayerData, IESLiveSubscription, IESPlaybackVideoPaidDelegate;

@interface IESPlaybackVideoPaidProvider : NSObject <IESPlaybackVideoPaidProviderAdapter> {
    id<IESPlaybackVideoPaidDelegate> _delegate;
    NSDictionary *_logExtra;
    id<IESLiveVideoPreviewPlayerData> _episode;
    IESLiveGCDTimer *_pingTimer;
    IESLivePayWallPingAPI *_api;
    NSMutableArray *_subscriberList;
    UIView *_contentView;
    UIVisualEffectView *_bgEffectView;
    IESPlaybackVideoFreeTrialView *_trialView;
    UIVisualEffectView *_promptEffectView;
    IESPlaybackVideoFreeTrialView *_promptView;
    long long _paidState;
    id<IESLiveSubscription> _screenCaptureDispose;
}

@property (retain, nonatomic) id<IESLiveVideoPreviewPlayerData> episode;
@property (retain, nonatomic) IESLiveGCDTimer *pingTimer;
@property (retain, nonatomic) IESLivePayWallPingAPI *api;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (weak, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIVisualEffectView *bgEffectView;
@property (retain, nonatomic) IESPlaybackVideoFreeTrialView *trialView;
@property (retain, nonatomic) UIVisualEffectView *promptEffectView;
@property (retain, nonatomic) IESPlaybackVideoFreeTrialView *promptView;
@property (nonatomic) long long paidState;
@property (retain, nonatomic) id<IESLiveSubscription> screenCaptureDispose;
@property (weak, nonatomic) id<IESPlaybackVideoPaidDelegate> delegate;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly, nonatomic, getter=isInFreeTrialFinish) BOOL inFreeTrialFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)commonParameters;
- (void)userDidTakeScreenshotNotification:(id)arg0;
- (void)updatePlayTime:(double)arg0;
- (void)unsubscribeEvent;
- (id)trialView;
- (void)setTrialView:(id)arg0;
- (void)setupEpisode:(id)arg0 contentView:(id)arg1;
- (BOOL)isInFreeTrialFinish;
- (BOOL)isScreenCaptured;
- (void)freeTrialDidStart;
- (void)freeTrialDidFinish;
- (void)freeTrialDidPaied;
- (void)gotoPromise:(BOOL)arg0;
- (id)screenCaptureDispose;
- (void)setScreenCaptureDispose:(id)arg0;
- (BOOL)checkFreeTrialTime:(double)arg0;
- (void)unInstallTrial;
- (void)doScreenCaptureEventIfNeeded;
- (BOOL)checkPaidLiveScreenCaptured;
- (void)startHeartBeat:(id /* block */)arg0;
- (void)installGuassBG;
- (void)installTrialViewWithType:(long long)arg0;
- (id)bgEffectView;
- (id)promptEffectView;
- (void)setBgEffectView:(id)arg0;
- (void)installPromptGuass;
- (void)installPromptView;
- (void)userPromiseAction:(id /* block */)arg0;
- (void)unInstallPrompt;
- (void)unInstallTrialView;
- (void)uninstallGuassBG;
- (void)setPromptEffectView:(id)arg0;
- (void)unInstallPromptGuass;
- (void)unInstallPromptView;
- (void)removeAddScreenCapturedObserver;
- (void)subscribEvent;
- (long long)paidState;
- (void)addScreenCapturedObserver;
- (void)tryFreeTrialStart:(double)arg0;
- (void)setPaidState:(long long)arg0;
- (BOOL)inFreeTrialRange:(double)arg0;
- (id)ticketURLParameters;
- (void)trackSearchResultClick;
- (void)trackBuyTicketModuleClick;
- (void)gotoPayWall;
- (void)trackBuyTicketModuleShow;
- (id)getFromContentType;
- (void)trackSearchResultShow;
- (id)init;
- (void).cxx_destruct;
- (void)start:(double)arg0;
- (id)pingTimer;
- (void)stop;
- (id)contentView;
- (id)delegate;
- (id)promptView;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setPromptView:(id)arg0;
- (void)setPingTimer:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setEpisode:(id)arg0;
- (id)episode;
- (id)api;
- (void)clearViews;
- (void)stopHeartBeat;
- (id)subscriberList;
- (void)setSubscriberList:(id)arg0;
- (void)setApi:(id)arg0;

@end
