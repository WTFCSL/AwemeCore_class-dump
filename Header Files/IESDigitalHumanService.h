//
//     Generated by private class-dump
//

@class IESDigitalHumanTraceInfo, NSString, NSHashTable, DigitalHuman;

@interface IESDigitalHumanService : NSObject <DigitalHumanStatusDelegate, VoiceTextDelegate, DHBridge, IESDigitalHumanService> {
    NSHashTable *_delegates;
    DigitalHuman *_digitalHuman;
    IESDigitalHumanTraceInfo *_traceInfo;
}

@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) DigitalHuman *digitalHuman;
@property (retain, nonatomic) IESDigitalHumanTraceInfo *traceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)digitalHumanServiceWithAnchorUID:(id)arg0 traceInfo:(id)arg1 DIContext:(id)arg2;

- (id)initWithDIContext:(id)arg0;
- (BOOL)isBoe;
- (id)getXTtToken;
- (id)getDid;
- (id)getInstallID;
- (BOOL)isPpe;
- (void)onSdkError:(long long)arg0 withMsg:(id)arg1 withErrorExtraJson:(id)arg2;
- (void)onReConnectRoomInfo:(BOOL)arg0 withRoomState:(long long)arg1;
- (void)onWsConnectSucc:(BOOL)arg0;
- (void)onWsConnectError:(int)arg0 withMsg:(id)arg1;
- (void)onDigitalHumanReplayStreamText:(id)arg0 withTimeState:(id)arg1;
- (void)onUserText:(id)arg0 withTimeState:(id)arg1;
- (void)onDigitalHumanText:(id)arg0 withTimeState:(id)arg1;
- (void)onSdkEvent:(long long)arg0 withMsg:(id)arg1 withErrorExtraJson:(id)arg2;
- (void)onEventWithName:(id)arg0 withParams:(id)arg1;
- (id)getAppId;
- (id)traceInfo;
- (void)setTraceInfo:(id)arg0;
- (void)releaseDelegate:(id)arg0;
- (void)startDigitalHumanServiceWithRTCInfo:(id)arg0 scene:(id)arg1 completion:(id /* block */)arg2;
- (void)stopDigitalHumanServiceWithCompletion:(id /* block */)arg0;
- (void)sendTextToDigitalHuman:(id)arg0 completion:(id /* block */)arg1;
- (void)interruptDigitalHumanWithCompletion:(id /* block */)arg0;
- (void)interruptSelfWithCompletion:(id /* block */)arg0;
- (void)triggerDigitalHumanSayByeWithCompletion:(id /* block */)arg0;
- (void)triggerDigitalHumanSayHiWithQuery:(id)arg0 response:(id)arg1 completion:(id /* block */)arg2;
- (void)setDigitalHuman:(id)arg0;
- (id)digitalHuman;
- (void)runCompletion:(id /* block */)arg0 result:(BOOL)arg1 json:(id)arg2 errorCode:(int)arg3 errorMsg:(id)arg4;
- (id)delegates;
- (void)setDelegates:(id)arg0;
- (void).cxx_destruct;
- (void)registerDelegate:(id)arg0;
- (void)dealloc;
- (void)onStart;
- (void)onStop;

@end
