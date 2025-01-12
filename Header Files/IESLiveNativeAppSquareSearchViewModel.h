//
//     Generated by private class-dump
//

@class NSArray, NSString, IESLiveNativeAppApi;

@interface IESLiveNativeAppSquareSearchViewModel : NSObject {
    BOOL _isSearchMode;
    NSArray *_historyList;
    NSArray *_resultList;
    unsigned long long _scene;
    NSString *_keyword;
    IESLiveNativeAppApi *_api;
}

@property (copy, nonatomic) NSArray *historyList;
@property (copy, nonatomic) NSArray *resultList;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) IESLiveNativeAppApi *api;
@property (readonly, nonatomic) BOOL isSearchMode;
@property (readonly, nonatomic) unsigned long long scene;

- (BOOL)isSearchMode;
- (void)saveSearchHistoryResultWithKeyword:(id)arg0;
- (id)historyList;
- (void)deleteHistoryItemWithKeyWord:(id)arg0;
- (void)setHistoryList:(id)arg0;
- (void)setResultList:(id)arg0;
- (id)resultList;
- (void)refreshSearchDataControllerWithKeyword:(id)arg0 callback:(id /* block */)arg1;
- (void)updateIsSearchMode:(BOOL)arg0;
- (void)clearSearchContent;
- (id)initWithScene:(unsigned long long)arg0 diContext:(id)arg1;
- (id)getSearchListInDisk;
- (void)saveSearchListInDiskWithSearchList:(id)arg0;
- (id)getFunctionSquareSearchBindUidKey;
- (void).cxx_destruct;
- (unsigned long long)scene;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (void)deleteAllHistory;
- (id)api;
- (void)setApi:(id)arg0;

@end
