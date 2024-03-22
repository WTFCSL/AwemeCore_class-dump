//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, AWEListDataController;
@protocol AWEHttpTask;

@interface AWELandscapeGeneralSearchDataController : AWEListDataController {
    AWEListDataController *_originDataController;
    NSString *_keyword;
    NSString *_searchID;
    long long _offset;
    id<AWEHttpTask> _httpTask;
    NSString *_logPb;
    NSMutableSet *_itemIDSet;
}

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) long long offset;
@property (retain, nonatomic) id<AWEHttpTask> httpTask;
@property (copy, nonatomic) NSString *logPb;
@property (retain, nonatomic) NSMutableSet *itemIDSet;
@property (weak, nonatomic) AWEListDataController *originDataController;

+ (BOOL)isValidGeneralSearchModel:(id)arg0;
+ (BOOL)isValidExternalGeneralSearchModel:(id)arg0;
+ (BOOL)isValidGeneralSearchLoadMoreModel:(id)arg0;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)setHttpTask:(id)arg0;
- (id)httpTask;
- (void)setLogPb:(id)arg0;
- (id)logPb;
- (id)filterAwemeModels:(id)arg0;
- (id)originDataController;
- (void)handleOriginDataSource;
- (void)handleOriginSearchID;
- (id)itemIDSet;
- (void)trackInvalidGeneralSearchModel:(id)arg0;
- (id)initWithOriginDataController:(id)arg0 searchParams:(id)arg1;
- (void)setOriginDataController:(id)arg0;
- (void)setItemIDSet:(id)arg0;
- (void).cxx_destruct;
- (void)setOffset:(long long)arg0;
- (long long)offset;
- (id)params;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (id)searchID;
- (void)setSearchID:(id)arg0;

@end
