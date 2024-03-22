//
//     Generated by private class-dump
//

@class NSDictionary, NSArray, AWEDicoverySearchManager, AWEContactsManager, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_group, AFDMentionAilabDefaultUserListDataControllerProtocol, AWEIMSearchEngineProtocol;

@interface AFDMentionUserPickerContactDatasource : NSObject <AFDMentionUserPickerContactDatasourceProtocol> {
    BOOL _sugHasMore;
    BOOL _isSearching;
    NSArray *_recentDatasource;
    NSMutableArray *_ailabDefaultDataSource;
    NSArray *_friendDatasource;
    NSArray *_contactDatasource;
    NSArray *_localSearchDataSource;
    NSArray *_remoteSearchDataSource;
    NSArray *_remoteSugDataSource;
    NSString *_remoteSearchKeyword;
    NSString *_keyword;
    NSString *_itemID;
    NSString *_refer;
    NSString *_source;
    id /* block */ _searchCompletion;
    NSDictionary *_logPassback;
    id /* block */ _fetchListCompletion;
    id /* block */ _sugSearchCompletion;
    AWEContactsManager *_contactManager;
    AWEDicoverySearchManager *_searchManager;
    NSObject<AFDMentionAilabDefaultUserListDataControllerProtocol> *_ailabDefaultUserListDataController;
    id<AWEIMSearchEngineProtocol> _searchEngine;
    long long _scene;
    NSMutableArray *_searchUserList;
    NSArray *_defaultUserList;
    NSObject<OS_dispatch_group> *_searchGroup;
}

@property (retain, nonatomic) AWEContactsManager *contactManager;
@property (retain, nonatomic) AWEDicoverySearchManager *searchManager;
@property (retain, nonatomic) NSObject<AFDMentionAilabDefaultUserListDataControllerProtocol> *ailabDefaultUserListDataController;
@property (retain, nonatomic) NSArray *recentDatasource;
@property (retain, nonatomic) NSArray *friendDatasource;
@property (retain, nonatomic) NSArray *contactDatasource;
@property (retain, nonatomic) NSArray *localSearchDataSource;
@property (retain, nonatomic) NSArray *remoteSearchDataSource;
@property (retain, nonatomic) NSArray *remoteSugDataSource;
@property (copy, nonatomic) NSString *remoteSearchKeyword;
@property (nonatomic) BOOL sugHasMore;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) id<AWEIMSearchEngineProtocol> searchEngine;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSMutableArray *searchUserList;
@property (retain, nonatomic) NSArray *defaultUserList;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *searchGroup;
@property (nonatomic) BOOL isSearching;
@property (retain, nonatomic) NSMutableArray *ailabDefaultDataSource;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) id /* block */ searchCompletion;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) id /* block */ fetchListCompletion;
@property (copy, nonatomic) id /* block */ sugSearchCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)setRefer:(id)arg0;
- (id)refer;
- (void)trackEvent;
- (void)p_setupSearchEngine;
- (id)ailabDefaultUserListDataController;
- (void)setSearchEngine:(id)arg0;
- (id)searchGroup;
- (void)p_fetchLocalDataSourceWithCompletion:(id /* block */)arg0;
- (void)setAilabDefaultUserListDataController:(id)arg0;
- (id)p_fillRecentDatasource:(id)arg0 withDataIfNeeded:(id)arg1;
- (void)setSearchGroup:(id)arg0;
- (void)startSearchWithKeyword:(id)arg0;
- (void)setFetchListCompletion:(id /* block */)arg0;
- (void)searchUserWithKeyword:(id)arg0;
- (void)fetchDataWithCompletion:(id /* block */)arg0;
- (void)p_search:(id)arg0;
- (void)p_fetchDataWithAilabDefaultUserListDataControllerWithCompletion:(id /* block */)arg0;
- (void)p_fetchDataWithAilabDefaultUserListDataControllerIfLoadMore:(BOOL)arg0 withCompletion:(id /* block */)arg1;
- (void)p_fetchRemoteSearchData:(BOOL)arg0;
- (id)ailabDefaultDataSource;
- (void)p_fetchDataWithContactManagerWithCompetion:(id /* block */)arg0;
- (void)setRecentDatasource:(id)arg0;
- (void)setAilabDefaultDataSource:(id)arg0;
- (id)contactManager;
- (id)recentDatasource;
- (id)p_getNotSelfList:(id)arg0;
- (void)setContactDatasource:(id)arg0;
- (id)p_getFriendList:(id)arg0;
- (void)setFriendDatasource:(id)arg0;
- (id)p_fastCombineListA:(id)arg0 withDeduplicatedListB:(id)arg1;
- (id)p_generateSugContextIsLoadMore:(BOOL)arg0;
- (id)p_convertAwemeUserToIMUser:(id)arg0;
- (void)setSugHasMore:(BOOL)arg0;
- (void)p_updateLogPassback:(id)arg0;
- (void)setRemoteSugDataSource:(id)arg0;
- (void)setRemoteSearchKeyword:(id)arg0;
- (id /* block */)sugSearchCompletion;
- (id)contactDatasource;
- (void)setLocalSearchDataSource:(id)arg0;
- (void)setRemoteSearchDataSource:(id)arg0;
- (void)p_fillSugDataWithResponseList:(id)arg0;
- (id)remoteSugDataSource;
- (id)searchUserList;
- (BOOL)p_isSearchMode;
- (BOOL)sugHasMore;
- (void)p_fetchSearchListWithLoadMore:(BOOL)arg0;
- (void)setSearchUserList:(id)arg0;
- (void)p_fetchDiscoverSearchAPIWithCompletion:(id /* block */)arg0;
- (id)p_combineListA:(id)arg0 withDeduplicatedListB:(id)arg1;
- (id)defaultUserList;
- (void)p_fetchLocalContactDBWithCompletion:(id /* block */)arg0;
- (id /* block */)fetchListCompletion;
- (id)localSearchDataSource;
- (id)p_convertSearchUserToIMUser:(id)arg0;
- (void)fetchSearchLoadmoreData;
- (void)searchMore;
- (BOOL)isSearchListContainUser:(id)arg0;
- (id)friendDatasource;
- (id)remoteSearchDataSource;
- (id)remoteSearchKeyword;
- (void)setSugSearchCompletion:(id /* block */)arg0;
- (void)setContactManager:(id)arg0;
- (void)setDefaultUserList:(id)arg0;
- (id)initWithScene:(long long)arg0;
- (BOOL)isSearching;
- (void)setScene:(long long)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (BOOL)hasMore;
- (void)setSource:(id)arg0;
- (long long)scene;
- (void)setIsSearching:(BOOL)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (id)searchManager;
- (void)setSearchManager:(id)arg0;
- (id /* block */)searchCompletion;
- (void)setSearchCompletion:(id /* block */)arg0;
- (id)searchEngine;

@end
