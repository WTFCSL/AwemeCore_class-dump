//
//     Generated by private class-dump
//

@class NSArray, NSNumber, NSString;

@interface AWETeenVideoCollectionListResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_awemeList;
    NSNumber *_cursor;
    NSString *_version;
}

@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *version;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (id)cursor;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;

@end