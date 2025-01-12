//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface TTCdnCacheVerifyManager : NSObject {
    BOOL verifyEnabled;
    BOOL isAddFilter;
    NSMutableArray *verifyRegexMutableArray;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } verifyRegexLock;
}

+ (id)shareInstance;

- (void)addCdnCacheVerifyRequestFilter;
- (id /* block */)generateVerifyRequestFilterBlock;
- (id /* block */)generateVerifyResponseChainFilterBlock;
- (BOOL)isVerifyEnabled;
- (BOOL)filterRule:(id)arg0;
- (id)generateVerifyValue;
- (void)onConfigChange:(BOOL)arg0 data:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
