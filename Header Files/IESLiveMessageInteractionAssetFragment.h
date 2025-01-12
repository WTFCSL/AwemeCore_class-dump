//
//     Generated by private class-dump
//

@class IESLiveMessageInteractionAssetApi, NSString;

@interface IESLiveMessageInteractionAssetFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber> {
    BOOL _didMount;
    IESLiveMessageInteractionAssetApi *_assetApi;
}

@property (retain, nonatomic) IESLiveMessageInteractionAssetApi *assetApi;
@property (nonatomic) BOOL didMount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (BOOL)didMount;
- (void)setDidMount:(BOOL)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)arg0;
- (void)setAssetApi:(id)arg0;
- (void)fetchAsset:(BOOL)arg0;
- (BOOL)subscribeBackendDataWithInteractionAsset;
- (void)realFetchAsset;
- (void)dealInteractionAssetData:(id)arg0 error:(id)arg1;
- (id)assetApi;
- (void)broadcastAssetUpdateWith:(id)arg0;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;

@end
