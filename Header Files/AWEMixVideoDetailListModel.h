//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, NSNumber;

@interface AWEMixVideoDetailListModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasMore;
    NSArray *_list;
    NSArray *_mixCards;
    NSNumber *_maxCursor;
    NSNumber *_minCursor;
    NSDictionary *_logPB;
}

@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) NSArray *mixCards;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSDictionary *logPB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listJSONTransformer;
+ (id)mixCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:(id)arg0;
- (void)setMinCursor:(id)arg0;
- (id)mixCards;
- (id)logPB;
- (void)setMixCards:(id)arg0;
- (void)setLogPB:(id)arg0;
- (void).cxx_destruct;
- (id)list;
- (void)setList:(id)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end