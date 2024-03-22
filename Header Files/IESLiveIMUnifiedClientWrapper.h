//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSTimer, NSString, NSObject;
@protocol IESLiveIMUnifiedClientDelegate;

@interface IESLiveIMUnifiedClientWrapper : IESLiveIMClientWrapper {
    BOOL _needHttpFetching;
    NSObject<IESLiveIMUnifiedClientDelegate> *_delegate;
    NSMutableDictionary *_paramsDicWithHTTP;
    NSMutableDictionary *_paramsDicRegistering;
    NSMutableDictionary *_paramsDicWithWS;
    NSTimer *_wrapperStateCheckTimer;
    NSMutableDictionary *_registerMap;
    double _unusedTime;
    NSString *_umgwGlobalExt;
}

@property (retain, nonatomic) NSMutableDictionary *paramsDicWithHTTP;
@property (retain, nonatomic) NSMutableDictionary *paramsDicRegistering;
@property (retain, nonatomic) NSMutableDictionary *paramsDicWithWS;
@property (retain, nonatomic) NSTimer *wrapperStateCheckTimer;
@property (retain, nonatomic) NSMutableDictionary *registerMap;
@property (nonatomic) BOOL needHttpFetching;
@property (nonatomic) double unusedTime;
@property (retain, nonatomic) NSString *umgwGlobalExt;
@property (weak, nonatomic) NSObject<IESLiveIMUnifiedClientDelegate> *delegate;

- (void)setupWithConfig:(id)arg0;
- (id)registerMap;
- (void)setRegisterMap:(id)arg0;
- (void)channel:(id)arg0 received:(id)arg1;
- (void)channel:(id)arg0 closed:(id)arg1;
- (void)channel:(id)arg0 transportChanged:(id)arg1;
- (id)assembleHttpFetcherParams:(id)arg0;
- (id)httpBodyField;
- (id)assembleWsFetcherHeaders:(id)arg0;
- (id)assembleWsFetcherParams:(id)arg0;
- (void)setupWsFetcherWithConfig:(id)arg0;
- (void)registerBusiness:(long long)arg0 params:(id)arg1;
- (void)unregisterBusiness:(long long)arg0 params:(id)arg1;
- (id)assembleWsRegisterdToken;
- (void)setParamsDicWithHTTP:(id)arg0;
- (void)setParamsDicRegistering:(id)arg0;
- (void)setParamsDicWithWS:(id)arg0;
- (id)paramsDicWithHTTP;
- (id)paramsDicRegistering;
- (void)asyncSendRegisterPacket:(BOOL)arg0 With:(long long)arg1 params:(id)arg2;
- (id)paramsDicWithWS;
- (id)p_createAndSaveRegisterModelWith:(BOOL)arg0 token:(long long)arg1;
- (id)p_createUnlinkPacketWith:(id)arg0 params:(id)arg1;
- (void)startWrapperStateCheckTimer;
- (void)setNeedHttpFetching:(BOOL)arg0;
- (void)stopWrapperStateCheckTimer;
- (void)p_handleRegisterBackMessage:(id)arg0;
- (void)setUmgwGlobalExt:(id)arg0;
- (void)p_updateParams:(id)arg0 fromPacket:(id)arg1;
- (id)umgwGlobalExt;
- (void)trackBizRegisterSucceed:(BOOL)arg0 model:(id)arg1 params:(id)arg2;
- (id)wrapperStateCheckTimer;
- (void)setWrapperStateCheckTimer:(id)arg0;
- (void)doWrapperStateCheck;
- (void)doRegisterTimetoutCheck;
- (void)doHttpFetchAndRegisterCheck;
- (void)doWrapperUseStateCheck;
- (BOOL)needHttpFetching;
- (double)unusedTime;
- (void)setUnusedTime:(double)arg0;
- (void).cxx_destruct;
- (void)reconnect;
- (void)stop;
- (id)delegate;
- (void)start;
- (void)setDelegate:(id)arg0;

@end
