//
//     Generated by private class-dump
//

@class NSArray, NSTimer, NSMutableDictionary, NSString, IESLiveCheckApi;
@protocol IESLiveCheckSubscriberProtocol;

@interface IESLiveCheckServiceImp : NSObject <IESLiveCheckService> {
    BOOL _subcribeSuccess;
    id /* block */ liveCheckUpLinkBlock;
    id /* block */ frontierConnected;
    NSArray *_params;
    id /* block */ _broadcast;
    id<IESLiveCheckSubscriberProtocol> _subscriber;
    IESLiveCheckApi *_checkApi;
    struct IESLiveCheckConfig { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; long long x8; } *_liveCheckConfig;
    NSTimer *_roundCheckTimer;
    NSMutableDictionary *_subscribeResponseDict;
}

@property (copy, nonatomic) NSArray *params;
@property (copy, nonatomic) id /* block */ broadcast;
@property (weak, nonatomic) id<IESLiveCheckSubscriberProtocol> subscriber;
@property (retain, nonatomic) IESLiveCheckApi *checkApi;
@property (nonatomic) struct IESLiveCheckConfig { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; long long x8; } *liveCheckConfig;
@property (retain, nonatomic) NSTimer *roundCheckTimer;
@property (retain, nonatomic) NSMutableDictionary *subscribeResponseDict;
@property (nonatomic) BOOL subcribeSuccess;
@property (copy, nonatomic) id /* block */ liveCheckUpLinkBlock;
@property (copy, nonatomic) id /* block */ frontierConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)invalidateCheckTimer;
- (id)checkApi;
- (void)setCheckApi:(id)arg0;
- (void)subscribeLiveStatusChangeWithParams:(id)arg0 subscriber:(id)arg1;
- (void)subscribeLiveStatusChangeWithParams:(id)arg0 subscriber:(id)arg1 complete:(id /* block */)arg2;
- (void)subscribeLiveStatusChangeWithParams:(id)arg0 broadcast:(id /* block */)arg1;
- (void)subscribeLiveStatusChangeWithParams:(id)arg0 broadcast:(id /* block */)arg1 complete:(id /* block */)arg2;
- (id /* block */)liveCheckUpLinkBlock;
- (void)setLiveCheckUpLinkBlock:(id /* block */)arg0;
- (id /* block */)frontierConnected;
- (void)setFrontierConnected:(id /* block */)arg0;
- (void)setConfig;
- (void)onUplinkReceivingMessage:(id)arg0;
- (struct IESLiveCheckConfig { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; long long x8; } *)liveCheckConfig;
- (id)subscribeResponseDict;
- (void)setSubcribeSuccess:(BOOL)arg0;
- (void)processMessage:(id)arg0 apiEvent:(BOOL)arg1;
- (void)setLiveCheckConfig:(struct IESLiveCheckConfig { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; long long x8; } *)arg0;
- (void)excuteroundCheckWithParams:(id)arg0 subscribeType:(long long)arg1;
- (void)setRoundCheckTimer:(id)arg0;
- (id)roundCheckTimer;
- (BOOL)subcribeSuccess;
- (void)downgradeToRoundCheck:(id)arg0 subscribeType:(long long)arg1;
- (void)trackSubscribeSuccessWithParams:(id)arg0;
- (id)commomSurveyParamsWithCheckParam:(id)arg0;
- (void)sendBroadcastWithCheckResult:(id)arg0;
- (void)checkLiveWithCheckParams:(id)arg0 checkAliveType:(unsigned long long)arg1 apiEvent:(BOOL)arg2;
- (void)apisubscribeWithParams:(id)arg0 subscribeType:(long long)arg1 complete:(id /* block */)arg2;
- (BOOL)isSameSubscribeWithParams:(id)arg0;
- (void)setBroadcast:(id /* block */)arg0;
- (void)subscribeLiveStatusChangeWithParams:(id)arg0 complete:(id /* block */)arg1;
- (void)trackSubscribeWithParams:(id)arg0;
- (id)distributionSubscribeMessageWithSubscribeParams:(id)arg0 uniqueId:(long long)arg1;
- (void)setSubscribeResponseDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)broadcast;
- (id)subscriber;
- (id)params;
- (void)dealloc;
- (void)setParams:(id)arg0;
- (void)setSubscriber:(id)arg0;

@end
