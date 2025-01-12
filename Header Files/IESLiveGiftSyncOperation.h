//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveGiftSyncOperation : NSObject {
    long long _newGiftSyncedCountLimit;
    long long _newGiftSyncedInterval;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_requestedNewGiftsFrequencyMap;
}

@property (nonatomic) long long newGiftSyncedCountLimit;
@property (nonatomic) long long newGiftSyncedInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *requestedNewGiftsFrequencyMap;

- (void)cleanCurrentRoomMaps;
- (BOOL)enableCurrentRoomRequestedNewGiftTaskWithIDs:(id)arg0;
- (BOOL)enableCurrentRoomRequestedNewGiftTaskWithID:(id)arg0;
- (BOOL)_enableRequestedNewTaskWithID:(id)arg0;
- (id)requestedNewGiftsFrequencyMap;
- (long long)newGiftSyncedCountLimit;
- (long long)newGiftSyncedInterval;
- (void)setNewGiftSyncedCountLimit:(long long)arg0;
- (void)setNewGiftSyncedInterval:(long long)arg0;
- (void)setRequestedNewGiftsFrequencyMap:(id)arg0;
- (id)syncQueue;
- (id)init;
- (void).cxx_destruct;
- (void)setSyncQueue:(id)arg0;

@end
