//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMapTable, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWENearbyClientAIManager : NSObject <AWENearbyClientAIManagerProtocol> {
    NSObject<OS_dispatch_semaphore> *_syncLock;
    NSObject<OS_dispatch_semaphore> *_fbSyncLock;
    NSMapTable *_locationReqCallBacks;
    NSMapTable *_feedButtonCallBacks;
    NSMutableDictionary *_packageStatusDic;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *syncLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *fbSyncLock;
@property (retain, nonatomic) NSMapTable *locationReqCallBacks;
@property (retain, nonatomic) NSMapTable *feedButtonCallBacks;
@property (retain, nonatomic) NSMutableDictionary *packageStatusDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)queryPackage:(id)arg0 callback:(id /* block */)arg1;
- (void)removeMessageHandler:(id)arg0;
- (void)registerFeedButtonMessageWithListener:(id)arg0 handler:(id /* block */)arg1;
- (void)triggerPackage:(id)arg0 event:(id)arg1 params:(id)arg2 callback:(id /* block */)arg3;
- (void)setSyncLock:(id)arg0;
- (void)registerLocationMessageWithListener:(id)arg0 handler:(id /* block */)arg1;
- (void)registerBussinessMessage;
- (id)handleLocationTriggerMessage:(id)arg0;
- (id)handleFeedButtonTriggerMessage:(id)arg0;
- (id)locationReqCallBacks;
- (id)fbSyncLock;
- (id)feedButtonCallBacks;
- (void)downloadPackage:(id)arg0 callback:(id /* block */)arg1;
- (BOOL)checkPackageReadyForBusiness:(id)arg0;
- (void)updatePackageReadyForBusiness:(id)arg0;
- (id)packageStatusDic;
- (void)setFbSyncLock:(id)arg0;
- (void)setLocationReqCallBacks:(id)arg0;
- (void)setFeedButtonCallBacks:(id)arg0;
- (void)setPackageStatusDic:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (id)syncLock;

@end