//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWESchoolListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_schoolList;
    NSNumber *_cursor;
    NSNumber *_total;
}

@property (copy, nonatomic) NSArray *schoolList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *total;

+ (id)schoolListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)schoolList;
- (void)setSchoolList:(id)arg0;
- (id)cursor;
- (id)total;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;
- (void)setTotal:(id)arg0;

@end
