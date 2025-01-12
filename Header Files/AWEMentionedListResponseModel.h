//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWEMentionedListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_awemeList;
    NSNumber *_maxCursor;
}

@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (id)maxCursor;
- (void)setAwemeList:(id)arg0;
- (void)setMaxCursor:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end
