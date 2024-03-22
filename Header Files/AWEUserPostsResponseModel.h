//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSString;

@interface AWEUserPostsResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    BOOL _hasLocateItem;
    BOOL _locateItemAvailable;
    BOOL _forwardHasMore;
    BOOL _replaceSeriesCover;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    NSArray *_awemes;
    NSArray *_timelist;
    NSNumber *_total;
    NSString *_timeQueryAnchorId;
    NSNumber *_locateOffset;
    NSNumber *_locateFrom;
    NSNumber *_locateItemCursor;
    NSNumber *_postSerialStyle;
}

@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *awemes;
@property (retain, nonatomic) NSArray *timelist;
@property (retain, nonatomic) NSNumber *total;
@property (retain, nonatomic) NSString *timeQueryAnchorId;
@property (nonatomic) BOOL hasLocateItem;
@property (retain, nonatomic) NSNumber *locateOffset;
@property (retain, nonatomic) NSNumber *locateFrom;
@property (nonatomic) BOOL locateItemAvailable;
@property (nonatomic) BOOL forwardHasMore;
@property (retain, nonatomic) NSNumber *locateItemCursor;
@property (retain, nonatomic) NSNumber *postSerialStyle;
@property (nonatomic) BOOL replaceSeriesCover;

+ (id)awemesJSONTransformer;
+ (id)getAwemeListWithArrayJson:(id)arg0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)minCursor;
- (id)maxCursor;
- (id)awemes;
- (void)setMaxCursor:(id)arg0;
- (void)setMinCursor:(id)arg0;
- (BOOL)replaceSeriesCover;
- (void)setAwemes:(id)arg0;
- (BOOL)forwardHasMore;
- (BOOL)hasLocateItem;
- (void)setHasLocateItem:(BOOL)arg0;
- (void)setForwardHasMore:(BOOL)arg0;
- (void)setReplaceSeriesCover:(BOOL)arg0;
- (id)postSerialStyle;
- (void)setPostSerialStyle:(id)arg0;
- (id)timelist;
- (id)locateItemCursor;
- (id)locateFrom;
- (void)setTimelist:(id)arg0;
- (id)locateOffset;
- (BOOL)locateItemAvailable;
- (void)setLocateItemCursor:(id)arg0;
- (void)setLocateFrom:(id)arg0;
- (void)setLocateOffset:(id)arg0;
- (id)timeQueryAnchorId;
- (void)setTimeQueryAnchorId:(id)arg0;
- (void)setLocateItemAvailable:(BOOL)arg0;
- (id)total;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setTotal:(id)arg0;

@end
