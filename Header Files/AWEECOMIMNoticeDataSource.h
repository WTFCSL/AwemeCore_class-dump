//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, BDECIMKVStore, NSString;

@interface AWEECOMIMNoticeDataSource : NSObject <AWEECOMIMConvDataSourceProtocol> {
    BOOL shouldNotMergeUpdate;
    id /* block */ dataSourceUpdated;
    NSArray *curDataModels;
    BDECIMKVStore *_kvStore;
    NSMutableDictionary *_allDataModelsDict;
}

@property (retain) NSMutableDictionary *allDataModelsDict;
@property (retain, nonatomic) BDECIMKVStore *kvStore;
@property (readonly, copy) NSArray *curDataModels;
@property (copy, nonatomic) id /* block */ dataSourceUpdated;
@property (nonatomic) BOOL shouldNotMergeUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markConversationReadWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)markAllConversationReadWithCompletion:(id /* block */)arg0;
- (void)setDataSourceUpdated:(id /* block */)arg0;
- (void)fetchConversationsWithCompletion:(id /* block */)arg0;
- (id)curDataModels;
- (void)configConversationTopWithIsTop:(BOOL)arg0 model:(id)arg1 completion:(id /* block */)arg2;
- (void)configConversationMuteWithIsMute:(BOOL)arg0 model:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteConversationWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setShouldNotMergeUpdate:(BOOL)arg0;
- (void)setAllDataModelsDict:(id)arg0;
- (void)noticeConversationUpdate:(id)arg0;
- (id)allDataModelsDict;
- (id)noticeGroupIDsFromCache;
- (void)fetchOrUpdateConversationsAllInfoByGroupIDs:(id)arg0 removeAll:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)fetchConversationsWithGroupIDs:(id)arg0 removeAll:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)fetchConversationUnreadWithGroupIDs:(id)arg0 completion:(id /* block */)arg1;
- (void)updateUnreadInfoWithconversationDataMap:(id)arg0 unreadInfo:(id)arg1;
- (void)innerMarkConversationReadWithModel:(id)arg0 atuoRequestToRefresh:(BOOL)arg1 completion:(id /* block */)arg2;
- (id /* block */)dataSourceUpdated;
- (id)noticeGroupIDsDefault;
- (BOOL)shouldNotMergeUpdate;
- (id)kvStore;
- (void)setKvStore:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
