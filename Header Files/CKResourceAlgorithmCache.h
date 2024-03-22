//
//     Generated by private class-dump
//

@class NSString, FMDatabaseQueue;

@interface CKResourceAlgorithmCache : NSObject <CKResourceCacheProtocol> {
    FMDatabaseQueue *ckDBQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)addOrUpdateCache:(id)arg0;
- (id)queryCache:(id)arg0;
- (BOOL)deleteCache:(id)arg0;
- (id)queryAllCache;
- (id)ckDBQueue;
- (id)generateConditionMap:(id)arg0;
- (BOOL)canHandle:(id)arg0;
- (void)setCkDBQueue:(id)arg0;
- (void).cxx_destruct;

@end