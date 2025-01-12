//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface BDARVAdModelManager : NSObject {
    NSMutableDictionary *_allModel;
    NSMutableDictionary *_allCacheByCreatorId;
    NSMutableDictionary *_allCache;
}

@property (retain, nonatomic) NSMutableDictionary *allModel;
@property (retain, nonatomic) NSMutableDictionary *allCacheByCreatorId;
@property (retain, nonatomic) NSMutableDictionary *allCache;

+ (id)shareManager;

- (void)setAllModel:(id)arg0;
- (void)setAllCache:(id)arg0;
- (void)setAllCacheByCreatorId:(id)arg0;
- (id)allModel;
- (id)getItem:(id)arg0 key:(id)arg1;
- (id)loadAdModelWithoutSecondaryPartition:(id)arg0;
- (id)getAdModelFromModelArray:(id)arg0;
- (void)setAllTypeItems:(id)arg0 key:(id)arg1 enableExpire:(BOOL)arg2 needSecondaryPartition:(BOOL)arg3;
- (id)getItem:(id)arg0 key:(id)arg1 needSecondaryPartition:(BOOL)arg2;
- (long long)getAdCacheCount:(id)arg0 key:(id)arg1 needSecondaryPartition:(BOOL)arg2;
- (void)clearCacheWithKey:(id)arg0;
- (id)allCacheByCreatorId;
- (id)allCache;
- (void).cxx_destruct;

@end
