//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESLiveIMUnifiedClientWrapper, NSString, IESLiveIMRoomConfig;
@protocol IESLiveIMClientDataReceiver;

@interface IESLiveIMPaaSUnifiedClient : IESLiveIMPaaSSingleClient <IESLiveIMUnifiedClientDelegate> {
    BOOL _isRunning;
    NSMutableDictionary *_dataSubscriberDic;
    IESLiveIMUnifiedClientWrapper *_unifiedClient;
    double _maxUnusedTime;
    id<IESLiveIMClientDataReceiver> _dataReceiver;
    IESLiveIMRoomConfig *_roomConfig;
}

@property (retain, nonatomic) NSMutableDictionary *dataSubscriberDic;
@property (retain, nonatomic) IESLiveIMUnifiedClientWrapper *unifiedClient;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) double maxUnusedTime;
@property (weak, nonatomic) id<IESLiveIMClientDataReceiver> dataReceiver;
@property (retain, nonatomic) IESLiveIMRoomConfig *roomConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRecievePacket:(id)arg0;
- (id)dataReceiver;
- (void)setDataReceiver:(id)arg0;
- (id)websocketUrl;
- (void)setRoomConfig:(id)arg0;
- (id)roomConfig;
- (void)registerWith:(id)arg0 receiver:(id)arg1;
- (void)setMaxUnusedTime:(double)arg0;
- (void)setUnifiedClient:(id)arg0;
- (id)unifiedClient;
- (id)dataSubscriberDic;
- (void)unregisterBusiness:(long long)arg0 params:(id)arg1;
- (id)businessParamsWith:(id)arg0;
- (void)registerBusiness:(long long)arg0 params:(id)arg1 receiver:(id)arg2;
- (double)maxUnusedTime;
- (void)didReceivePacket:(id)arg0 from:(long long)arg1;
- (void)unifiedClientLonglinkDisconnectWithNoBiz;
- (void)unifiedClient:(id)arg0 notUsedFortime:(double)arg1;
- (void)setDataSubscriberDic:(id)arg0;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (id)init;
- (void).cxx_destruct;
- (void)reconnect;
- (void)stop;
- (void)cleanup;
- (void)setup;
- (id)httpUrl;
- (void)start;
- (void)unregisterWith:(id)arg0;

@end