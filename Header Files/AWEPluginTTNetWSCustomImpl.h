//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;
@protocol BDPPluginTTNetWSCustomImplDelegate;

@interface AWEPluginTTNetWSCustomImpl : NSObject <BDPTTNetWSPluginDelegate, WsDelegate> {
    NSMutableDictionary *_ttnetSocketInfoDict;
    NSMutableDictionary *_ttnetSockets;
    id<BDPPluginTTNetWSCustomImplDelegate> _delegate;
}

@property (retain, nonatomic) NSMutableDictionary *ttnetSocketInfoDict;
@property (retain, nonatomic) NSMutableDictionary *ttnetSockets;
@property (weak, nonatomic) id<BDPPluginTTNetWSCustomImplDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)onPushMessageReceived:(id)arg0 message:(id)arg1 type:(unsigned long long)arg2;
- (void)onFeedbackLog:(id)arg0 feedbacklog:(id)arg1;
- (void)onConnectionErrorWithState:(id)arg0 connectionState:(unsigned long long)arg1 url:(id)arg2 error:(id)arg3;
- (void)onConnectionStateChanged:(id)arg0 connectionState:(unsigned long long)arg1 url:(id)arg2;
- (void)closeAllTTNetSockets;
- (id)ttnetSockets;
- (id)getPushManagerKey:(id)arg0;
- (id)ttnetSocketInfoDict;
- (id)getPushManagerForTaskID:(id)arg0;
- (BOOL)sendTTNetSocket:(id)arg0 param:(id)arg1;
- (BOOL)closeTTNetSocket:(id)arg0 param:(id)arg1;
- (long long)getSocketTaskIdForPushManager:(id)arg0;
- (id)getProtocolTypeForPushManager:(id)arg0;
- (id)getUrlForPushManager:(id)arg0;
- (id)getPushManagerStateString:(unsigned long long)arg0;
- (void)setTtnetSocketInfoDict:(id)arg0;
- (void)setTtnetSockets:(id)arg0;
- (void)bdp_setDelegate:(id)arg0;
- (long long)getAWETTNetWSDataTypeFromTTNetDataType:(unsigned long long)arg0;
- (BOOL)bdp_createTTNetSocketTaskWithUrl:(id)arg0 taskID:(id)arg1 param:(id)arg2;
- (BOOL)bdp_operateTTNetSocketTaskWithParam:(id)arg0 errMsg:(id *)arg1;
- (void)bdp_closeAllTTNetSockets;
- (id)getHeaderForPushManager:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;

@end
