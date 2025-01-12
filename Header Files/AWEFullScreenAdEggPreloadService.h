//
//     Generated by private class-dump
//

@class NSObject, NSString, NSLock, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEFullScreenAdEggPreloadService : HTSService <AWEFullScreenAdEggPreloadService> {
    BOOL _isLoading;
    BOOL _isLocalDataUpdate;
    NSLock *_lock;
    NSMutableArray *_preloadLocalModels;
    NSMutableArray *_currentLoadModels;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *preloadLocalModels;
@property (retain, nonatomic) NSMutableArray *currentLoadModels;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic) BOOL isLocalDataUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveDataInDiskWithNotification:(id)arg0;
- (void)adSearchMiddlePageModelReceiveWithNotification:(id)arg0;
- (void)setPreloadLocalModels:(id)arg0;
- (void)checkAndUpdateLocalStorage;
- (id)preloadLocalModels;
- (BOOL)isModelExpired:(id)arg0;
- (void)trackDataReceivedWithModel:(id)arg0;
- (BOOL)tryPreloadAdEggResourceWithModel:(id)arg0;
- (BOOL)isLocalDataUpdate;
- (void)setIsLocalDataUpdate:(BOOL)arg0;
- (id)currentLoadModels;
- (void)trackPreloadStartWithModel:(id)arg0;
- (BOOL)needPreloadResourceWithModel:(id)arg0;
- (void)preloadImageDataWithModel:(id)arg0;
- (void)preloadAlphaPlayerResourceWithModel:(id)arg0;
- (void)trackPreloadResultWithModel:(id)arg0 success:(long long)arg1 failReason:(id)arg2;
- (void)onServiceStartUp;
- (void)setCurrentLoadModels:(id)arg0;
- (BOOL)isLoading;
- (id)init;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (id)taskQueue;
- (id)lock;
- (void)setIsLoading:(BOOL)arg0;
- (void)setLock:(id)arg0;

@end
