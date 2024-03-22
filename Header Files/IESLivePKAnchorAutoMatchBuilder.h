//
//     Generated by private class-dump
//

@class NSString, IESLiveCountTimer, IESLivePKModel, HTSLivePKApi;
@protocol IESLivePKProvider;

@interface IESLivePKAnchorAutoMatchBuilder : NSObject <IESLivePKAnchorAutoMatchBuilderService> {
    HTSLivePKApi *_pkApi;
    id<IESLivePKProvider> _pkProvider;
    IESLivePKModel *_pkmodel;
    IESLiveCountTimer *_automatchTimer;
    IESLiveCountTimer *_matchBellTimeOutTimer;
    unsigned long long _lastPrecisionMatchID;
}

@property (retain, nonatomic) HTSLivePKApi *pkApi;
@property (retain, nonatomic) id<IESLivePKProvider> pkProvider;
@property (retain, nonatomic) IESLivePKModel *pkmodel;
@property (retain, nonatomic) IESLiveCountTimer *automatchTimer;
@property (retain, nonatomic) IESLiveCountTimer *matchBellTimeOutTimer;
@property (nonatomic) unsigned long long lastPrecisionMatchID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)bindAction;
- (void)setPkmodel:(id)arg0;
- (void)stopAutoMatch;
- (id)pkmodel;
- (void)startAutoMatch;
- (void)startAutoMatchWithConfig:(id)arg0;
- (void)updateAutoMatchTimer;
- (void)cancelAutoMatchTimer;
- (void)leaveAutoMatchPool;
- (void)exitMatchBell;
- (void)rejectMatchBell;
- (void)acceptMatchBell;
- (void)cancelMatchBellTimeoutTimer;
- (void)setPkProvider:(id)arg0;
- (id)pkProvider;
- (void)setPkApi:(id)arg0;
- (void)getAutoMatchSetting;
- (void)onReceivedPKActivePush:(id)arg0;
- (void)onReceivedPrecisionMatchMessage:(id)arg0;
- (void)handleAutoMatchResult:(id)arg0 signExtra:(id)arg1 battleAttachedInfo:(id)arg2;
- (id)pkApi;
- (void)startAutoMatchProcess;
- (void)showAutoMatchAlertPanelWithConfig:(id)arg0;
- (void)realStartAutoMatch;
- (void)tryAutoMatch:(BOOL)arg0 isHighWay:(BOOL)arg1 battleAttachedInfo:(id)arg2;
- (id)automatchTimer;
- (void)p_trackWithLimitErrorCodeIfNeeded:(unsigned long long)arg0;
- (void)setupAutoMatchTimer:(long long)arg0;
- (void)p_trackAutoMatchTimeUp;
- (void)setAutomatchTimer:(id)arg0;
- (void)logPrecisionMessageReceived:(id)arg0;
- (unsigned long long)lastPrecisionMatchID;
- (void)setLastPrecisionMatchID:(unsigned long long)arg0;
- (void)showMatchBellBattleInvitePanel;
- (void)startMatchBellTimeoutTimer;
- (void)setMatchBellTimeOutTimer:(id)arg0;
- (id)matchBellTimeOutTimer;
- (void).cxx_destruct;
- (void)dealloc;

@end