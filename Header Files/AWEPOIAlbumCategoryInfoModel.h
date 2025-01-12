//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSArray;

@interface AWEPOIAlbumCategoryInfoModel : AWEBaseApiModel {
    BOOL _hasMore;
    BOOL _shouldShowUploadButton;
    NSString *_tabName;
    NSString *_tabID;
    long long _totalCount;
    long long _nextOffset;
    NSMutableArray *_photoInfos;
    NSArray *_photoInfosString;
    long long _tabIndex;
    NSString *_poiID;
    NSString *_backendType;
}

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long nextOffset;
@property (retain, nonatomic) NSMutableArray *photoInfos;
@property (copy, nonatomic) NSArray *photoInfosString;
@property (nonatomic) long long tabIndex;
@property (nonatomic) BOOL shouldShowUploadButton;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *backendType;

+ (id)photoInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)poiID;
- (void)setPoiID:(id)arg0;
- (void)setBackendType:(id)arg0;
- (id)backendType;
- (void)setTabID:(id)arg0;
- (void)setNextOffset:(long long)arg0;
- (id)photoInfosString;
- (void)setPhotoInfosString:(id)arg0;
- (BOOL)shouldShowUploadButton;
- (void)setShouldShowUploadButton:(BOOL)arg0;
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
- (void)setTabIndex:(long long)arg0;
- (void)setTabName:(id)arg0;
- (id)tabName;

@end
