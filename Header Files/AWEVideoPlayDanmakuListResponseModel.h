//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEVideoPlayDanmakuListResponseModel : AWEBaseApiModel {
    NSArray *_danmakuList;
    long long _offset;
    long long _count;
    long long _hasMore;
}

@property (copy, nonatomic) NSArray *danmakuList;
@property (nonatomic) long long offset;
@property (nonatomic) long long count;
@property (nonatomic) long long hasMore;

+ (id)danmakuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)danmakuList;
- (void)setDanmakuList:(id)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (void)setOffset:(long long)arg0;
- (long long)offset;
- (long long)count;
- (void)setHasMore:(long long)arg0;
- (long long)hasMore;

@end