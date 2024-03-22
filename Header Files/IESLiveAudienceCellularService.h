//
//     Generated by private class-dump
//

@class NSTimer, NSString;
@protocol IESLiveInternalRouter, IESLiveCustomConfig;

@interface IESLiveAudienceCellularService : IESLiveGeneralBaseService <HTSLiveNetworkStatusActions> {
    BOOL _isPauseBySelf;
    BOOL _isInBackground;
    id<IESLiveInternalRouter> _internalRouter;
    id<IESLiveCustomConfig> _customConfig;
    long long _currentNetStatus;
    id _noWifiAlert;
    NSTimer *_backgroundCountTimer;
}

@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (nonatomic) long long currentNetStatus;
@property (weak, nonatomic) id noWifiAlert;
@property (retain, nonatomic) NSTimer *backgroundCountTimer;
@property (nonatomic) BOOL isPauseBySelf;
@property (nonatomic) BOOL isInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (unsigned long long)serviceImmediateLoadTypes;
+ (id)serviceActionsWithParam:(id)arg0;
+ (void)load;

- (void)setIsInBackground:(BOOL)arg0;
- (long long)currentNetStatus;
- (id)customConfig;
- (void)setCustomConfig:(id)arg0;
- (void)getNetworkStatus;
- (void)didSetAttachingDIContext;
- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (void)onOrientationTransitionBegin:(long long)arg0;
- (void)serviceDidLaunch;
- (void)changeToCellularNetwork;
- (void)changeToWifiNetwork;
- (void)changeToNetworkUnreachable;
- (void)checkNetworkForEnterWithCertainBlock:(id /* block */)arg0;
- (id)noWifiAlert;
- (BOOL)isBackgroundCutoffEnable;
- (id)backgroundCountTimer;
- (void)setBackgroundCountTimer:(id)arg0;
- (BOOL)isPauseBySelf;
- (void)setIsPauseBySelf:(BOOL)arg0;
- (void)pauseStreamIfNeed:(id)arg0 reason:(unsigned long long)arg1;
- (void)trackBackgroundCutStreamEvent;
- (void)setCurrentNetStatus:(long long)arg0;
- (void)showCellualrNetworkNoWifiAlert;
- (void)showCellularNetworkAlert;
- (void)setNoWifiAlert:(id)arg0;
- (void)showNetworkAlertWithCertainBlock:(id /* block */)arg0 cancelBlock:(id /* block */)arg1;
- (void)trackNoWifiAlertShowEvent;
- (void)trackFreeFlowAlertClickOpenEvent;
- (void)trackFreeFlowAlertClickCancelEvent;
- (void)trackFreeFlowAlertShowEvent;
- (long long)backgroundCutoffTimeOutInterval;
- (void).cxx_destruct;
- (BOOL)isInBackground;
- (void)dealloc;
- (void)addObserver;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
