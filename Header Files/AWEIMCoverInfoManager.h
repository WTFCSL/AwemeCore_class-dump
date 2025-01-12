//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEIMDouyinRedPacketDataManager;

@interface AWEIMCoverInfoManager : NSObject {
    NSMutableDictionary *_coverInfoMap;
    AWEIMDouyinRedPacketDataManager *_manager;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (retain, nonatomic) NSMutableDictionary *coverInfoMap;
@property (retain, nonatomic) AWEIMDouyinRedPacketDataManager *manager;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutexLock;

+ (id)shareInstance;

- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })mutexLock;
- (void)setMutexLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;
- (void)setCoverInfoMap:(id)arg0;
- (id)coverInfoMap;
- (void)fetchCoverListWithCompletion:(id /* block */)arg0;
- (void)p_setCoverInfoCache:(id)arg0;
- (id)p_getAllDefaultModelCache;
- (id)getDefaultCoverModel;
- (void)setDefaultCoverModel:(id)arg0;
- (void)getCoverInfoWithCoverID:(id)arg0 fromCache:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)getCustomizedLimitInfo:(id /* block */)arg0;
- (void)clearCoverWithId:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setManager:(id)arg0;
- (id)manager;
- (void)setActionId:(id)arg0;

@end
