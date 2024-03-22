//
//     Generated by private class-dump
//

@class NSArray, AWELifeSnackBarData, AWENearbyVideoTags, NSString, AWENearbyC2CellExpressData;

@interface AWENearbyVideoAttribute : AWEBaseApiModel {
    BOOL _isLocalLifeVideo;
    BOOL _hasSpuService;
    BOOL _enableFeedDualPlay;
    NSArray *_nearbyTags;
    AWENearbyVideoTags *_grouponBottomTag;
    AWENearbyVideoTags *_grouponBottomRightTag;
    AWENearbyC2CellExpressData *_grouponExpressModule;
    NSString *_snackbar;
    long long _titleLimitLine;
    AWELifeSnackBarData *_snackBarData;
}

@property (retain, nonatomic) AWELifeSnackBarData *snackBarData;
@property (nonatomic) BOOL isLocalLifeVideo;
@property (nonatomic) BOOL hasSpuService;
@property (nonatomic) BOOL enableFeedDualPlay;
@property (copy, nonatomic) NSArray *nearbyTags;
@property (retain, nonatomic) AWENearbyVideoTags *grouponBottomTag;
@property (retain, nonatomic) AWENearbyVideoTags *grouponBottomRightTag;
@property (retain, nonatomic) AWENearbyC2CellExpressData *grouponExpressModule;
@property (copy, nonatomic) NSString *snackbar;
@property (nonatomic) long long titleLimitLine;

+ (BOOL)automaticallyDefaultMapping;
+ (id)nearbyTagsJSONTransformer;

- (BOOL)isLocalLifeVideo;
- (void)setIsLocalLifeVideo:(BOOL)arg0;
- (void)setEnableFeedDualPlay:(BOOL)arg0;
- (id)snackbar;
- (id)snackBarData;
- (BOOL)hasSpuService;
- (void)setHasSpuService:(BOOL)arg0;
- (BOOL)enableFeedDualPlay;
- (id)nearbyTags;
- (void)setNearbyTags:(id)arg0;
- (id)grouponBottomTag;
- (void)setGrouponBottomTag:(id)arg0;
- (id)grouponBottomRightTag;
- (void)setGrouponBottomRightTag:(id)arg0;
- (id)grouponExpressModule;
- (void)setGrouponExpressModule:(id)arg0;
- (void)setSnackbar:(id)arg0;
- (long long)titleLimitLine;
- (void)setTitleLimitLine:(long long)arg0;
- (void)setSnackBarData:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
