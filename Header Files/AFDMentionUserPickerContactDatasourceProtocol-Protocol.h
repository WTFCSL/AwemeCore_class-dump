//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary, NSMutableArray;

@protocol AFDMentionUserPickerContactDatasourceProtocol <NSObject>

@property (readonly, nonatomic) NSArray *recentDatasource;
@property (retain, nonatomic) NSMutableArray *ailabDefaultDataSource;
@property (readonly, nonatomic) NSArray *friendDatasource;
@property (readonly, nonatomic) NSArray *contactDatasource;
@property (readonly, nonatomic) NSArray *localSearchDataSource;
@property (readonly, nonatomic) NSArray *remoteSearchDataSource;
@property (readonly, nonatomic) NSArray *remoteSugDataSource;
@property (readonly, copy, nonatomic) NSString *remoteSearchKeyword;
@property (readonly, copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) id /* block */ searchCompletion;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) id /* block */ fetchListCompletion;
@property (copy, nonatomic) id /* block */ sugSearchCompletion;

- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)setRefer:(id)arg0;
- (id)refer;
- (void)startSearchWithKeyword:(id)arg0;
- (void)setFetchListCompletion:(id /* block */)arg0;
- (void)searchUserWithKeyword:(id)arg0;
- (void)fetchDataWithCompletion:(id /* block */)arg0;
- (id)ailabDefaultDataSource;
- (void)setAilabDefaultDataSource:(id)arg0;
- (id)recentDatasource;
- (id /* block */)sugSearchCompletion;
- (id)contactDatasource;
- (id)remoteSugDataSource;
- (id /* block */)fetchListCompletion;
- (id)localSearchDataSource;
- (void)fetchSearchLoadmoreData;
- (void)searchMore;
- (BOOL)isSearchListContainUser:(id)arg0;
- (id)friendDatasource;
- (id)remoteSearchDataSource;
- (id)remoteSearchKeyword;
- (void)setSugSearchCompletion:(id /* block */)arg0;
- (id)source;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (BOOL)hasMore;
- (void)setSource:(id)arg0;
- (id)keyword;
- (id /* block */)searchCompletion;
- (void)setSearchCompletion:(id /* block */)arg0;

@end
