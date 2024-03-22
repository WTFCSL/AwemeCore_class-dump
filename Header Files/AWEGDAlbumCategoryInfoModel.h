//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSArray;

@interface AWEGDAlbumCategoryInfoModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSString *_tabName;
    NSString *_tabID;
    long long _totalCount;
    long long _nextOffset;
    long long _nextPage;
    NSMutableArray *_photoInfos;
    NSArray *_photoInfosString;
    long long _tabIndex;
}

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long nextOffset;
@property (nonatomic) long long nextPage;
@property (retain, nonatomic) NSMutableArray *photoInfos;
@property (copy, nonatomic) NSArray *photoInfosString;
@property (nonatomic) long long tabIndex;

+ (id)photoInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setTabID:(id)arg0;
- (void)setNextOffset:(long long)arg0;
- (id)photoInfosString;
- (void)setPhotoInfosString:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (long long)nextOffset;
- (long long)totalCount;
- (long long)tabIndex;
- (id)photoInfos;
- (void)setPhotoInfos:(id)arg0;
- (void)setTotalCount:(long long)arg0;
- (id)tabID;
- (long long)nextPage;
- (void)setNextPage:(long long)arg0;
- (void)setTabIndex:(long long)arg0;
- (void)setTabName:(id)arg0;
- (id)tabName;

@end
