//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HTSKVStore;

@interface IESECActionPathTrackerImpl : NSObject <IESECActionPathTracker> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _trackerPluginLock;
    NSMutableDictionary *_trackerPlugins;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
    NSObject<OS_dispatch_queue> *_rwQueue;
    NSMutableArray *_pathStack;
    long long _packedLimit;
    NSMutableArray *_packedPathIDs;
    long long _packedPathIDsOnceFlag;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    id<HTSKVStore> _kvStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;

- (id)getPluginWithClass:(id)arg0;
- (id)createNewActionPath;
- (id)init_private;
- (void)actionPathStart:(id)arg0;
- (id)packedPathIDs;
- (void)dispatchNode:(id)arg0 pathID:(id)arg1;
- (void)actionPathEnd:(id)arg0;
- (void)dispatchNode:(id)arg0;
- (id)getActionPath:(id)arg0;
- (id)getActionPathIDs;
- (void).cxx_destruct;
- (void)record:(id)arg0;
- (void)dealloc;
- (void)registerPlugin:(Class)arg0;

@end