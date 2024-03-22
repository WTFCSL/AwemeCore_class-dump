//
//     Generated by private class-dump
//

@class IESLiveMessageUplinkApi, NSMutableDictionary, NSMutableSet, IESLiveGCDTimer, NSString;
@protocol IESLiveMonitor, IESLiveSettings;

@interface IESLiveMessageUplinkServiceIMP : NSObject <IESLiveSettingsSubscriber, IESLiveMessageUplinkService> {
    BOOL _isUplinkServiceEnable;
    long long _serviceId;
    long long _methodId;
    id /* block */ _isFrontierConnectd;
    id /* block */ _sendMessageByFrontierChannel;
    id /* block */ _isLiveConnectd;
    id /* block */ _sendMessageByLiveChannel;
    id<IESLiveSettings> _settings;
    long long _strategy;
    double _timeout;
    NSMutableSet *_routeServiceIdSet;
    IESLiveMessageUplinkApi *_uplinkApi;
    IESLiveGCDTimer *_timeoutCheckTimer;
    NSMutableDictionary *_requestMap;
    id<IESLiveMonitor> _monitor;
}

@property (retain, nonatomic) id<IESLiveSettings> settings;
@property (nonatomic) BOOL isUplinkServiceEnable;
@property (nonatomic) long long strategy;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSMutableSet *routeServiceIdSet;
@property (retain, nonatomic) IESLiveMessageUplinkApi *uplinkApi;
@property (retain, nonatomic) IESLiveGCDTimer *timeoutCheckTimer;
@property (retain, nonatomic) NSMutableDictionary *requestMap;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long serviceId;
@property (nonatomic) long long methodId;
@property (copy, nonatomic) id /* block */ isFrontierConnectd;
@property (copy, nonatomic) id /* block */ sendMessageByFrontierChannel;
@property (copy, nonatomic) id /* block */ isLiveConnectd;
@property (copy, nonatomic) id /* block */ sendMessageByLiveChannel;

+ (id)sharedInstance;

- (id)requestMap;
- (void)setRequestMap:(id)arg0;
- (void)setMethodId:(long long)arg0;
- (long long)methodId;
- (void)asynSendMessageWith:(id)arg0 completion:(id /* block */)arg1;
- (id /* block */)isFrontierConnectd;
- (void)setIsFrontierConnectd:(id /* block */)arg0;
- (id /* block */)sendMessageByFrontierChannel;
- (void)setSendMessageByFrontierChannel:(id /* block */)arg0;
- (id /* block */)isLiveConnectd;
- (void)setIsLiveConnectd:(id /* block */)arg0;
- (id /* block */)sendMessageByLiveChannel;
- (void)setSendMessageByLiveChannel:(id /* block */)arg0;
- (void)settingUpdateWithKey:(id)arg0 value:(id)arg1;
- (void)p_addQueryToParams:(id)arg0 fromParams:(id)arg1;
- (void)stopTimeoutCheckTimer;
- (void)startTimeoutCheckTimer;
- (id)timeoutCheckTimer;
- (void)setTimeoutCheckTimer:(id)arg0;
- (void)doTimeoutCheck;
- (void)onUplinkReceivingMessage:(id)arg0;
- (id)routeServiceIdSet;
- (void)setIsUplinkServiceEnable:(BOOL)arg0;
- (BOOL)isUplinkServiceEnable;
- (id)p_uplinkPacketWith:(id)arg0;
- (void)sendByFrontier:(id)arg0;
- (void)sendByHttpWith:(id)arg0;
- (id)p_keyOfUplinkPacketWith:(id)arg0;
- (id)pushMessageWith:(id)arg0;
- (BOOL)isValidMessageForUplink:(id)arg0;
- (id)uplinkApi;
- (void)sendByLive:(id)arg0;
- (void)setRouteServiceIdSet:(id)arg0;
- (void)setUplinkApi:(id)arg0;
- (long long)strategy;
- (id)init;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (id)settings;
- (double)timeout;
- (void)setServiceId:(long long)arg0;
- (id)errorWithCode:(long long)arg0 message:(id)arg1;
- (void)dealloc;
- (long long)serviceId;
- (void)setStrategy:(long long)arg0;
- (void)setTimeout:(double)arg0;

@end
