//
//     Generated by private class-dump
//

@class UIView;
@protocol AWEHttpTask, AWEInstantAnchorProtocol;

@interface AWEFeedAnchorInstantConfig : AWEFeedAnchorBaseConfig {
    BOOL _isShowSuffix;
    UIView<AWEInstantAnchorProtocol> *_instantAnchorView;
    id<AWEHttpTask> _storeListRequestTask;
    id<AWEHttpTask> _anchorRequestTask;
}

@property (retain, nonatomic) UIView<AWEInstantAnchorProtocol> *instantAnchorView;
@property (nonatomic) BOOL isShowSuffix;
@property (weak, nonatomic) id<AWEHttpTask> storeListRequestTask;
@property (weak, nonatomic) id<AWEHttpTask> anchorRequestTask;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)arg0 extraInfo:(id)arg1;
+ (id)anchorType;

- (id)instantAnchorView;
- (id)anchorViewWithModel:(id)arg0;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)arg0 needPerformOnDisplay:(BOOL)arg1;
- (id /* block */)layoutWithAwemeModel:(id)arg0 commonLayoutInfo:(id)arg1;
- (id)anchorInfoExtra;
- (void)updateSDK;
- (void)fetchAnchorInfoWithShopId:(id)arg0 storeId:(id)arg1 subProductId:(id)arg2 itemId:(id)arg3 isFallback:(BOOL)arg4;
- (void)fetchStoreListWithShopId:(id)arg0 productId:(id)arg1;
- (BOOL)isShowSuffix;
- (void)reportSDKUpdate;
- (void)setAnchorRequestTask:(id)arg0;
- (void)setInstantAnchorView:(id)arg0;
- (void)setIsShowSuffix:(BOOL)arg0;
- (id)anchorRequestTask;
- (id)storeListRequestTask;
- (void)showInstantAnchorTowLine;
- (void)showInstantExtraTagsWithPlayBackTime:(double)arg0;
- (void)showInstantExtraTagsWithLoopTimes:(long long)arg0;
- (void)setStoreListRequestTask:(id)arg0;
- (void).cxx_destruct;
- (void)reset;
- (void)updateTags;

@end
