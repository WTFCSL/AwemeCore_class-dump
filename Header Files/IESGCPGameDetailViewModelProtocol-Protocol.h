//
//     Generated by private class-dump
//

@class IESGCPSKContext, NSString, NSNumber, IESGCPDetailData;

@protocol IESGCPGameDetailViewModelProtocol <NSObject>

@property (readonly, nonatomic) unsigned long long detailViewStyle;
@property (readonly, nonatomic) unsigned long long promoteScene;
@property (readonly, nonatomic) BOOL isUnionGame;
@property (readonly, nonatomic) NSString *enterFrom;
@property (readonly, nonatomic) BOOL isAnchor;
@property (readonly, nonatomic) NSString *videoID;
@property (readonly, nonatomic) NSString *anchorId;
@property (readonly, nonatomic) NSNumber *roomID;
@property (readonly, nonatomic) IESGCPSKContext *storeKitContext;
@property (readonly, nonatomic) IESGCPDetailData *dataModel;
@property (readonly, nonatomic) BOOL useHalfScreenConfig;

- (id)enterFrom;
- (void)trackEvent:(id)arg0 params:(id)arg1;
- (id)anchorId;
- (void)setScrollViewToStickyTop;
- (void)trackShowForStrategy;
- (id)reportParamsWithExtra:(id)arg0;
- (void)trackAdEventWithLabel:(id)arg0 refer:(id)arg1 extra:(id)arg2;
- (void)routeToTabWithTabID:(id)arg0 params:(id)arg1;
- (id)tabTrackList;
- (void)openAppStoreController;
- (void)openAppStoreControllerWith:(id /* block */)arg0;
- (void)openAppStoreControllerWithGameInfo:(id)arg0 completion:(id /* block */)arg1;
- (id)displayControlParams;
- (void)reserveGameWithShowLoadingInView:(id)arg0 isFullScreen:(BOOL)arg1 giftNum:(long long)arg2 completeBlock:(id /* block */)arg3;
- (void)cannelReserveGameWithShowLoadingInView:(id)arg0 isFullScreen:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)trackShowForStrategyWithView:(id)arg0;
- (id)trackPromoteSceneStr;
- (void)triggerDataConnectionWithActionType:(unsigned long long)arg0 extra:(id)arg1;
- (void)fetchGameDetailContentNodeWithComponentCriteria:(id)arg0 complete:(id /* block */)arg1;
- (id)lynxAppendUrlQueryItems;
- (unsigned long long)promoteScene;
- (BOOL)isUnionGame;
- (id)storeKitContext;
- (BOOL)useHalfScreenConfig;
- (BOOL)isAnchor;
- (id)dataModel;
- (id)roomID;
- (unsigned long long)detailViewStyle;
- (id)videoID;

@end
