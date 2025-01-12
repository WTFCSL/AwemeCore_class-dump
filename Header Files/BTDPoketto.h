//
//     Generated by private class-dump
//

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface BTDPoketto : NSObject {
    NSRecursiveLock *_lock;
    NSMutableDictionary *_cidKeys;
    NSMutableArray *_allKeys;
    NSMutableDictionary *_models;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableDictionary *cidKeys;
@property (retain, nonatomic) NSMutableArray *allKeys;
@property (retain, nonatomic) NSMutableDictionary *models;

+ (id)sharedInstance;

- (id)mmkv;
- (id)getObjectForCid:(id)arg0 logExtra:(id)arg1;
- (void)setIsFromLocal:(id)arg0;
- (id)getObjectForCid:(id)arg0;
- (void)setCidKeys:(id)arg0;
- (void)setAllKeys:(id)arg0;
- (id)parseKeyFromCid:(id)arg0 logExtra:(id)arg1 model:(id)arg2;
- (void)removeExpiredData:(id)arg0;
- (id)sortedData;
- (id)keyFromObject:(id)arg0;
- (id)cidKeys;
- (void)setObject:(id)arg0 forRit:(id)arg1;
- (void)setObject:(id)arg0 forReqId:(id)arg1;
- (void)removeDataForKey:(id)arg0 cid:(id)arg1;
- (BOOL)isConfirmProtocol:(id)arg0;
- (id)ritFromObject:(id)arg0;
- (id)ritFromLogExtra:(id)arg0;
- (void)cacheResultForCid:(id)arg0 object:(id)arg1 key:(id)arg2;
- (BOOL)getIsFromLocal:(id)arg0;
- (id)reqIdFromObject:(id)arg0;
- (void)removeObjectForCid:(id)arg0 logExtra:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (id)allKeys;
- (id)models;
- (id)lock;
- (void)setModels:(id)arg0;
- (void)save;
- (void)setLock:(id)arg0;
- (void)setObject:(id)arg0;
- (void)removeData:(id)arg0;
- (unsigned long long)isValidObject:(id)arg0;
- (void)saveObject:(id)arg0 forKey:(id)arg1;

@end
