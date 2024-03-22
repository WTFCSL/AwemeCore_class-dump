//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AFDCloseFriendsMomentResponse : AWEBaseApiModel {
    BOOL _hideVisitorList;
    BOOL _hasMore;
    BOOL _shouldShowMask;
    NSArray *_momentList;
    NSArray *_visitorList;
    NSNumber *_maxTimestamp;
    NSNumber *_minTimestamp;
    long long _expireTimestamp;
    NSNumber *_lastAuthorID;
}

@property (copy, nonatomic) NSArray *momentList;
@property (copy, nonatomic) NSArray *visitorList;
@property (nonatomic) BOOL hideVisitorList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *maxTimestamp;
@property (retain, nonatomic) NSNumber *minTimestamp;
@property (nonatomic) BOOL shouldShowMask;
@property (nonatomic) long long expireTimestamp;
@property (retain, nonatomic) NSNumber *lastAuthorID;

+ (id)hasMoreJSONTransformer;
+ (id)momentListJSONTransformer;
+ (id)visitorListJSONTransformer;
+ (id)hideVisitorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)momentList;
- (void)setMomentList:(id)arg0;
- (void)syncExtraFieldsToMomentModelWithForceClearItem:(id)arg0;
- (id)lastAuthorID;
- (id)visitorList;
- (void)setVisitorList:(id)arg0;
- (BOOL)hideVisitorList;
- (void)setHideVisitorList:(BOOL)arg0;
- (BOOL)shouldShowMask;
- (void)setShouldShowMask:(BOOL)arg0;
- (void)setLastAuthorID:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (long long)expireTimestamp;
- (void)setExpireTimestamp:(long long)arg0;
- (id)maxTimestamp;
- (void)setMaxTimestamp:(id)arg0;
- (id)minTimestamp;
- (void)setMinTimestamp:(id)arg0;

@end
