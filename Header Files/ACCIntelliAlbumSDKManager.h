//
//     Generated by private class-dump
//

@class ACCCameraSubscription;

@interface ACCIntelliAlbumSDKManager : NSObject {
    long long _innerModeState;
    ACCCameraSubscription *_subscription;
}

@property (nonatomic) long long innerModeState;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly, nonatomic) long long modelState;

+ (void)initializeIntelliAlbumSDK;
+ (BOOL)enableIntelliAlbumSDK;
+ (id)ILALock;
+ (id)shared;

- (void)downloadModels;
- (id)beautifyWithAssetList:(id)arg0 taskConfig:(id)arg1 tagMap:(id)arg2 progress:(id /* block */)arg3 finish:(id /* block */)arg4;
- (long long)modelState;
- (void)onClearCache;
- (void)setInnerModeState:(long long)arg0;
- (long long)innerModeState;
- (id)init;
- (void).cxx_destruct;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;

@end
