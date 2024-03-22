//
//     Generated by private class-dump
//

@class NSNumber, NSArray;

@interface AWEProfileMixResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSNumber *_cursor;
    NSArray *_mixInfos;
}

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *mixInfos;

+ (id)mixInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)mixInfos;
- (void)setMixInfos:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;

@end
