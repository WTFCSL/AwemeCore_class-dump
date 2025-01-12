//
//     Generated by private class-dump
//

@class BDPCommon, NSMapTable, NSRecursiveLock;

@interface BDPCommonManager : NSObject {
    NSRecursiveLock *_lock;
    NSMapTable *_commons;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMapTable *commons;
@property (readonly, nonatomic) BDPCommon *foregroundAppCommon;

+ (id)sharedManager;

- (id)getCommonWithUniqueID:(id)arg0;
- (void)addCommon:(id)arg0 uniqueID:(id)arg1;
- (id)foregroundAppCommon;
- (void)setCommons:(id)arg0;
- (id)commons;
- (void)removeCommonWithUniqueID:(id)arg0;
- (BOOL)hasAppInTheForeground;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end
