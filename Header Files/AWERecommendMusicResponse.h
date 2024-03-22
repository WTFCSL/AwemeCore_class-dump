//
//     Generated by private class-dump
//

@class NSNumber, NSArray;

@interface AWERecommendMusicResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSNumber *_cursor;
    NSArray *_musicList;
}

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *musicList;

+ (id)hasMoreJSONTransformer;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)musicList;
- (void)setMusicList:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;

@end
