//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWERelationCleanFollowingListResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_cleanList;
    long long _index;
    long long _total;
    long long _vcdCount;
    long long _hotsoonHasMore;
    NSString *_hotsoonText;
}

@property (retain, nonatomic) NSArray *cleanList;
@property (nonatomic) long long index;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;
@property (nonatomic) long long vcdCount;
@property (nonatomic) long long hotsoonHasMore;
@property (copy, nonatomic) NSString *hotsoonText;

+ (id)cleanListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)hotsoonText;
- (void)setHotsoonText:(id)arg0;
- (long long)hotsoonHasMore;
- (void)setHotsoonHasMore:(long long)arg0;
- (id)cleanList;
- (void)setCleanList:(id)arg0;
- (long long)vcdCount;
- (void)setVcdCount:(long long)arg0;
- (long long)total;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (long long)index;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setTotal:(long long)arg0;

@end
