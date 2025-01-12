//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWEFansCategoryListDataModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSMutableArray *_followers;
    long long _offset;
}

@property (retain, nonatomic) NSMutableArray *followers;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;

+ (id)followersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setOffset:(long long)arg0;
- (id)followers;
- (long long)offset;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setFollowers:(id)arg0;

@end
