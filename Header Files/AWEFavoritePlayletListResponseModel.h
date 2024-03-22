//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWEFavoritePlayletListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_playletList;
    NSNumber *_cursor;
}

@property (copy, nonatomic) NSArray *playletList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)playletListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)playletList;
- (void)setPlayletList:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;

@end