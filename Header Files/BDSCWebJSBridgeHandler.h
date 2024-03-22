//
//     Generated by private class-dump
//

@class BDByteScreenCastContext;
@protocol BDSCWebJSBridgeHandlerDelegate;

@interface BDSCWebJSBridgeHandler : NSObject {
    BDByteScreenCastContext *_byteScreenCastContext;
    id<BDSCWebJSBridgeHandlerDelegate> _delegate;
}

@property (retain, nonatomic) BDByteScreenCastContext *byteScreenCastContext;
@property (weak, nonatomic) id<BDSCWebJSBridgeHandlerDelegate> delegate;

- (id)byteScreenCastContext;
- (void)invokeWithArgs:(id)arg0;
- (id)invokeWithAction:(id)arg0 uuid:(id)arg1 params:(id)arg2;
- (void)invokeWebEvent:(id)arg0 uuid:(id)arg1 params:(id)arg2;
- (void)onPlayProgressChanged:(id)arg0;
- (void)setByteScreenCastContext:(id)arg0;
- (void)onDidFindDevices:(id)arg0;
- (void)onConnectResult:(id)arg0 error:(id)arg1;
- (void)onPlayError:(id)arg0;
- (void)onPlayStateChanged:(unsigned long long)arg0;
- (void)onEventWith:(id)arg0 messageJson:(id)arg1;
- (void)onSwitchDecodeResult:(long long)arg0;
- (void)onReplyAckWith:(id)arg0 errorCode:(long long)arg1 errorMessage:(id)arg2;
- (void)invokeWebEvent:(id)arg0 params:(id)arg1;
- (BOOL)connectWithUuid:(id)arg0 params:(id)arg1;
- (void)startSearchWithUuid:(id)arg0 params:(id)arg1;
- (void)stopSearchWithUuid:(id)arg0 params:(id)arg1;
- (void)disconnectWithUuid:(id)arg0 params:(id)arg1;
- (void)playWithUuid:(id)arg0 params:(id)arg1;
- (void)openSchemaWithUuid:(id)arg0 params:(id)arg1;
- (void)stopCastWithUuid:(id)arg0 params:(id)arg1;
- (void)resumeWithUuid:(id)arg0 params:(id)arg1;
- (void)pauseWithUuid:(id)arg0 params:(id)arg1;
- (void)seekWithUuid:(id)arg0 params:(id)arg1;
- (void)sendEventWithUuid:(id)arg0 params:(id)arg1;
- (id)diagnosisFeedbackWithUuid:(id)arg0 params:(id)arg1;
- (id)diagnosisSearchFailWithUuid:(id)arg0 params:(id)arg1;
- (void)useSoftwareDecodeWithUuid:(id)arg0 params:(id)arg1;
- (void)jumpToSystemSettingWithUuid:(id)arg0 params:(id)arg1;
- (id)getEventParamsWithUuid:(id)arg0 params:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end