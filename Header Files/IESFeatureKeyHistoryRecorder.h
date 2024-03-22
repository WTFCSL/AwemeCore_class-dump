//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSLock;

@interface IESFeatureKeyHistoryRecorder : NSObject {
    long long _maxSaveCount;
    NSString *_key;
    NSString *_storageKey;
    NSMutableArray *_keyHistoryArray;
    NSLock *_lock;
}

@property (nonatomic) long long maxSaveCount;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *storageKey;
@property (retain, nonatomic) NSMutableArray *keyHistoryArray;
@property (retain, nonatomic) NSLock *lock;
@property (readonly, nonatomic) unsigned long long count;

- (id)storageKey;
- (void)setStorageKey:(id)arg0;
- (id)initWithKey:(id)arg0 maxSaveCount:(long long)arg1;
- (void)addOrMoveToLast:(id)arg0;
- (id)getLastRangeKeyList:(long long)arg0 key:(id)arg1 excludeThis:(BOOL)arg2;
- (long long)maxSaveCount;
- (void)setMaxSaveCount:(long long)arg0;
- (id)keyHistoryArray;
- (void)removeKeyIfNeeded;
- (id)getLastRangeWithKeyList:(id)arg0 rangeCount:(long long)arg1 key:(id)arg2 excludeThis:(BOOL)arg3;
- (void)setKeyHistoryArray:(id)arg0;
- (void)addToFirstIfNotExist:(id)arg0;
- (void)addToLastIfNotExist:(id)arg0;
- (id)key;
- (BOOL)containsKey:(id)arg0;
- (void).cxx_destruct;
- (void)setKey:(id)arg0;
- (unsigned long long)count;
- (id)lock;
- (void)setLock:(id)arg0;
- (void)loadData;
- (void)saveData;

@end