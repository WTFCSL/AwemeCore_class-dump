//
//     Generated by private class-dump
//

@class IESLiveIMClientWrapper, NSString, IESLiveIMBizConfig, IESLiveIMRoomConfig, IESLiveIMAppConfig;
@protocol IESLiveIMClientDataReceiver;

@interface IESLiveIMPaaSSingleClient : NSObject <IESLiveIMPaaSClient, IESLiveIMClientParamsConfig, IESLiveIMClientDataReceiver> {
    IESLiveIMAppConfig *_appConfig;
    IESLiveIMBizConfig *_bizConfig;
    IESLiveIMClientWrapper *_imClient;
    id<IESLiveIMClientDataReceiver> _dataReceiver;
    IESLiveIMRoomConfig *_roomConfig;
}

@property (retain, nonatomic) IESLiveIMClientWrapper *imClient;
@property (weak, nonatomic) id<IESLiveIMClientDataReceiver> dataReceiver;
@property (retain, nonatomic) IESLiveIMRoomConfig *roomConfig;
@property (retain, nonatomic) IESLiveIMAppConfig *appConfig;
@property (retain, nonatomic) IESLiveIMBizConfig *bizConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAppConfig:(id)arg0;
- (id)imClient;
- (void)setImClient:(id)arg0;
- (id)bizConfig;
- (void)setBizConfig:(id)arg0;
- (void)didRecievePacket:(id)arg0;
- (id)dataReceiver;
- (void)setDataReceiver:(id)arg0;
- (id)httpQuerys:(id)arg0;
- (id)httpParams:(id)arg0;
- (id)websocketUrl;
- (id)websocketHeaders:(id)arg0;
- (id)websocketParams:(id)arg0;
- (void)setRoomConfig:(id)arg0;
- (id)roomConfig;
- (id)paramsFromAppConfig;
- (id)paramsFromBizConfig;
- (id)paramsForNetwork:(id)arg0;
- (void)registerWith:(id)arg0 receiver:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)reconnect;
- (void)stop;
- (void)cleanup;
- (void)setup;
- (id)httpUrl;
- (void)start;
- (id)appConfig;
- (void)unregisterWith:(id)arg0;
- (long long)defaultTimeout;

@end