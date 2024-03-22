//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWEMusicAwemeListResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_awemeList;
    NSNumber *_cursor;
}

@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;

@end
