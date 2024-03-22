//
//     Generated by private class-dump
//

@class NSObject, AWEStorage, NSMutableSet;
@protocol OS_dispatch_queue;

@interface AWEOpenPlatformActionTrackerManager : NSObject {
    AWEStorage *_storage;
    NSMutableSet *_uniqueIDSet;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) AWEStorage *storage;
@property (retain, nonatomic) NSMutableSet *uniqueIDSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)shareManager;

- (void)addNotifications;
- (void)setUniqueIDSet:(id)arg0;
- (BOOL)enableAction;
- (void)setTrackParams:(id)arg0 WithUniqueID:(id)arg1;
- (id)uniqueIDSet;
- (id)getTrackerParamsFromUniqueID:(id)arg0;
- (id)handleTrackParams:(id)arg0;
- (void)removeTrackParamsWithUniqueID:(id)arg0;
- (id)dateWithStage:(id)arg0 reverse:(BOOL)arg1 withStages:(id)arg2 timeStamp:(id)arg3;
- (void)updateParams:(id)arg0 withUniqueID:(id)arg1;
- (void)uploadLocalTrackerWithUniqueID:(id)arg0;
- (void)tryUploadAllLocalTracker;
- (void)createLocalTrackerWithName:(id)arg0 withUniqueID:(id)arg1;
- (void)updateStage:(id)arg0 withUniqueID:(id)arg1;
- (void)setStorage:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)storage;
- (void)setSerialQueue:(id)arg0;
- (id)serialQueue;
- (void)appWillEnterForeground;

@end