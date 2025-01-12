//
//     Generated by private class-dump
//

@class IESECMallShopMomentListModel;

@interface IESECMallShopMomentDataStorage : NSObject {
    BOOL _hasAsyncLoadCacheData;
    IESECMallShopMomentListModel *_straightOutListModel;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _straight_out_lock;
}

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } straight_out_lock;
@property (retain, nonatomic) IESECMallShopMomentListModel *straightOutListModel;
@property (nonatomic) BOOL hasAsyncLoadCacheData;

+ (id)sharedStorage;

- (void)storageDictionary:(id)arg0 forKey:(id)arg1;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })straight_out_lock;
- (void)setStraight_out_lock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;
- (void)asyncLoadCahceFirstScreenData;
- (void)clearCacheData;
- (void)setHasAsyncLoadCacheData:(BOOL)arg0;
- (void)removeStorageForKey:(id)arg0;
- (void)storageBool:(BOOL)arg0 forKey:(id)arg1;
- (id)syncLoadCacheFirstScreenData;
- (void)setStraightOutListModel:(id)arg0;
- (id)straightOutListModel;
- (BOOL)hasAsyncLoadCacheData;
- (id)loadFirstScreenListModel;
- (id)init;
- (id)dictionaryForKey:(id)arg0;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)arg0;
- (void)dealloc;

@end
