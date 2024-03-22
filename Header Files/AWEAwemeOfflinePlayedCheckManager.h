//
//     Generated by private class-dump
//

@class NSMutableSet, NSRecursiveLock;

@interface AWEAwemeOfflinePlayedCheckManager : NSObject {
    NSMutableSet *_playedVideoItemIDs;
    NSRecursiveLock *_lock;
    long long _count;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSMutableSet *playedVideoItemIDs;

+ (id)sharedInstance;

- (void)setPlayedVideoItemIDs:(id)arg0;
- (id)playedVideoItemIDs;
- (void)playedItemIDArrayReport;
- (void)savePlayedVideoItemID:(id)arg0;
- (void)setCount:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)count;
- (id)lock;
- (void)setLock:(id)arg0;

@end