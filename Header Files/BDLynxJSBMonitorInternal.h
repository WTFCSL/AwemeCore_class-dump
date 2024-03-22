//
//     Generated by private class-dump
//

@class NSString;

@interface BDLynxJSBMonitorInternal : NSObject <BDLynxBridgeListenerDelegate> {
    BOOL _turnOnJSBMonitor;
    BOOL _turnOnFetchMonitor;
    BOOL _turnOnJSBPerfMonitor;
}

@property (nonatomic) BOOL turnOnJSBMonitor;
@property (nonatomic) BOOL turnOnFetchMonitor;
@property (nonatomic) BOOL turnOnJSBPerfMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getErrorInfoWithBridgeMessage:(id)arg0 period:(long long)arg1;
+ (id)shareInstance;

- (void)lynxBridge:(id)arg0 willCallEvent:(id)arg1;
- (void)lynxBridge:(id)arg0 didCallEvent:(id)arg1;
- (void)lynxBridge:(id)arg0 willHandleMethod:(id)arg1;
- (void)lynxBridge:(id)arg0 didHandleMethod:(id)arg1;
- (void)lynxBridge:(id)arg0 willCallback:(id)arg1;
- (void)lynxBridge:(id)arg0 didCallback:(id)arg1;
- (id)dictionaryWithJsonString:(id)arg0;
- (BOOL)isRequestJSB:(id)arg0;
- (BOOL)turnOnJSBPerfMonitor;
- (void)reportErrorWithBridge:(id)arg0 message:(id)arg1 period:(long long)arg2;
- (BOOL)turnOnFetchMonitor;
- (void)reportFetchErrorIfNeeded:(id)arg0 withResultMessage:(id)arg1;
- (void)reportXRequestErrorIfNeeded:(id)arg0 withResultMessage:(id)arg1;
- (void)reportPerfWithBridge:(id)arg0 message:(id)arg1;
- (id)toAdapterFetchErrorReport:(id)arg0 withResultMessage:(id)arg1;
- (id)toNormalFetchErrorReport:(id)arg0 withResultMessage:(id)arg1;
- (id)getFetchServerInfoFromMessage:(id)arg0;
- (long long)codeForDict:(id)arg0 key:(id)arg1 defaultCode:(long long)arg2;
- (id)getFetchInfoFromMessage:(id)arg0 serverInfo:(id)arg1 errCode:(long long)arg2;
- (id)msgForDict:(id)arg0 key:(id)arg1 cls:(Class)arg2;
- (id)toAdapterXRequestReport:(id)arg0 withResultMessage:(id)arg1;
- (id)toNormalXRequestReport:(id)arg0 withResultMessage:(id)arg1;
- (id)getXRequestInfoFromMessage:(id)arg0 serverInfo:(id)arg1;
- (id)getInfoWithBridgeMessage:(id)arg0;
- (BOOL)turnOnJSBMonitor;
- (void)setTurnOnJSBMonitor:(BOOL)arg0;
- (void)setTurnOnFetchMonitor:(BOOL)arg0;
- (void)setTurnOnJSBPerfMonitor:(BOOL)arg0;

@end
