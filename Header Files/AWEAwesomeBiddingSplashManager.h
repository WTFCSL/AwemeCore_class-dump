//
//     Generated by private class-dump
//

@class NSString, AWEAwesomeBiddingSplashFeedCell, UIView;
@protocol AWESplashFakeLaunchScreenView;

@interface AWEAwesomeBiddingSplashManager : AWEAwesomeSplashBaseManager <AWEAwesomeBiddingSplashManagerProtocol> {
    BOOL _shouldShowBiddingSplash;
    BOOL _isBiddingSplashShowing;
    BOOL _hasShownBiddingSplash;
    BOOL _shouldShowTopLiveWithCellRoom;
    BOOL _isTimeOut;
    BOOL _isBiddingSplashFirstDisappear;
    BOOL _isRealtimeBidSplash;
    BOOL _isPreloadTimeout;
    BOOL _isInsert;
    AWEAwesomeBiddingSplashFeedCell *_splashCell;
    UIView<AWESplashFakeLaunchScreenView> *_fakeLaunchScreenView;
    long long _showType;
    double _fakeLaunchTimestamp;
    double _hotEnterBGTimestamp;
    NSString *_cacheBidUri;
    long long _count;
    double _lastHotStartTime;
}

@property (retain, nonatomic) UIView<AWESplashFakeLaunchScreenView> *fakeLaunchScreenView;
@property (nonatomic) long long showType;
@property (nonatomic) double fakeLaunchTimestamp;
@property (nonatomic) double hotEnterBGTimestamp;
@property (copy, nonatomic) NSString *cacheBidUri;
@property (nonatomic) BOOL isPreloadTimeout;
@property (nonatomic) BOOL isInsert;
@property (nonatomic) long long count;
@property (nonatomic) double lastHotStartTime;
@property (nonatomic) BOOL shouldShowBiddingSplash;
@property (nonatomic) BOOL isBiddingSplashShowing;
@property (nonatomic) BOOL hasShownBiddingSplash;
@property (nonatomic) BOOL shouldShowTopLiveWithCellRoom;
@property (weak, nonatomic) AWEAwesomeBiddingSplashFeedCell *splashCell;
@property (nonatomic) BOOL isTimeOut;
@property (nonatomic) BOOL isBiddingSplashFirstDisappear;
@property (nonatomic) BOOL isRealtimeBidSplash;
@property (nonatomic) struct CGPoint { double x0; double x1; } clickPoint;
@property (readonly, nonatomic) BOOL isBackground;
@property (readonly, nonatomic) long long feedModeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (Class)aAWEMainModuleDOUYINLiteAdapterClass;
+ (id)sharedInstance;

- (void)removeFakeLaunchView;
- (BOOL)isBiddingSplashFirstDisappear;
- (BOOL)isTimeOut;
- (id)fakeLaunchScreenView;
- (void)setFakeLaunchScreenView:(id)arg0;
- (id)transferAwemeModelForLive:(id)arg0 isFirstColdLaunch:(BOOL)arg1;
- (BOOL)shouldShowBiddingSplash;
- (BOOL)isBiddingSplashShowing;
- (id)aAWEMainModuleDOUYINLiteAdapter;
- (BOOL)isFakeLaunchScreenShow;
- (id)generateBiddingSplashRequestParam;
- (void)checkLiveStatusWithModel:(id)arg0 trackLabel:(id)arg1;
- (void)setSplashCell:(id)arg0;
- (void)showAwesomeSplash:(id)arg0;
- (void)setHasShownBiddingSplash:(BOOL)arg0;
- (BOOL)hasShownBiddingSplash;
- (void)setIsBiddingSplashFirstDisappear:(BOOL)arg0;
- (void)clickAwesomeSplash:(id)arg0 isExtraSize:(BOOL)arg1 adExtraDict:(id)arg2;
- (void)skipAwesomeSplash:(id)arg0;
- (id)feedTableViewControllerView;
- (void)clickAwesomeSplash:(id)arg0;
- (void)fakeShowLaunchScreenInView:(id)arg0 isTop:(BOOL)arg1;
- (void)setFakeLaunchTimestamp:(double)arg0;
- (double)fakeLaunchTimestamp;
- (long long)shouldRequestBiddingSplashWithReason;
- (void)setShouldShowBiddingSplash:(BOOL)arg0;
- (void)setIsBiddingSplashShowing:(BOOL)arg0;
- (void)showGlobalWidget:(BOOL)arg0;
- (void)showBiddingSplashSucessWith:(id)arg0;
- (void)trackTopliveWithModel:(id)arg0 label:(id)arg1 adExtraData:(id)arg2;
- (void)setShouldShowTopLiveWithCellRoom:(BOOL)arg0;
- (void)trackTopliveFirstViewWithModel:(id)arg0;
- (void)showBiddingSplashFail;
- (void)checkBiddingSplashTopLiveState:(id)arg0 completion:(id /* block */)arg1;
- (void)setIsRealtimeBidSplash:(BOOL)arg0;
- (BOOL)isRealtimeBidSplash;
- (id)splashCell;
- (void)resetRootVCStateWithModel:(id)arg0;
- (void)awesomeSplashDisappeared;
- (id)cacheBidUri;
- (void)preloadSplashStyleResourceIfNeeded;
- (BOOL)canCurrentFeedVCShowBiddingSplash;
- (void)resetFeedStatusWhenShowBiddingFailed;
- (BOOL)checkSoftAdWithModel:(id)arg0;
- (void)showNativeBiddingAdWithModel:(id)arg0;
- (void)showBiddingSplashWithModel:(id)arg0;
- (void)setCacheBidUri:(id)arg0;
- (void)setIsPreloadTimeout:(BOOL)arg0;
- (BOOL)isPreloadTimeout;
- (void)trackRealtimeBidPreloadStatusWithStatus:(unsigned long long)arg0 startTime:(double)arg1;
- (void)tryPreloadBidSplashVideoWithModel:(id)arg0 size:(double)arg1 complete:(id /* block */)arg2;
- (double)hotEnterBGTimestamp;
- (void)setHotEnterBGTimestamp:(double)arg0;
- (void)applicationDidBecomeActiveOptimize;
- (double)lastHotStartTime;
- (void)setLastHotStartTime:(double)arg0;
- (void)fakeShowLaunchScreenInView:(id)arg0;
- (BOOL)shouldRequestBiddingSplash;
- (BOOL)shouldBiddingSplashUseTTPlayer;
- (void)showBiddingSplashFromSDKWithArray:(id)arg0;
- (id)generateBiddingControlParamWithShowType:(long long)arg0;
- (void)recordBiddingSplashResult:(BOOL)arg0 isWarm:(BOOL)arg1;
- (void)prepareToShowCachedBiddingSplash;
- (BOOL)shouldBidRealtimeSplashUseLocalCache:(id)arg0;
- (BOOL)shouldShowTopLiveWithCellRoom;
- (void)setIsTimeOut:(BOOL)arg0;
- (void)showAwesomeSplash;
- (void)setCount:(long long)arg0;
- (double)currentPlaybackTime;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isInsert;
- (long long)count;
- (void)applicationDidEnterBackground;
- (void)dealloc;
- (void)reset;
- (void)applicationDidBecomeActive;
- (void)setIsInsert:(BOOL)arg0;
- (long long)showType;
- (void)setShowType:(long long)arg0;

@end
