//
//     Generated by private class-dump
//

@class NSObject, NSString, NSDictionary, NSMutableDictionary, NSMutableArray, HGUniqueID;
@protocol HGNetworkTaskProtocol, OS_dispatch_queue;

@interface HGClientAIGameDetectManager : NSObject <HGApplicationLifeCycleMessage> {
    NSDictionary *_strategy;
    NSMutableDictionary *_imageCache;
    NSMutableArray *_gameIDCacheArr;
    HGUniqueID *_uniqueID;
    id<HGNetworkTaskProtocol> _networkTask;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSMutableDictionary *_trackerContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedManager;

- (void)applicationExitWithUniqueID:(id)arg0;
- (void)applicationFirstFrameDidShow:(id)arg0 baseVC:(id)arg1;
- (void)p_updateTrackerErrorMessage:(id)arg0;
- (void)p_excuteGameDetectMiddleCapture;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end