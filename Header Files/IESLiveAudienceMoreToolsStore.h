//
//     Generated by private class-dump
//

@class NSArray, IESLiveMoreToolsCommonUtil, IESLiveGCDTimer, HTSEventContext, NSMutableArray, NSString;
@protocol IESLiveAudienceMoreToolsReaction, IESLiveRoomService, IESLiveAudienceMoreToolsTempStateAreaActions;

@interface IESLiveAudienceMoreToolsStore : NSObject <IESLiveMoreToolsCommonUtilDelegate, HTSLiveStreamPlayerAction> {
    id<IESLiveAudienceMoreToolsReaction> _reaction;
    id<IESLiveRoomService> _roomModel;
    NSMutableArray *_tempStateAreaArray;
    HTSEventContext *_trackContext;
    NSArray *_itemSortList;
    NSArray *_tempStateAreaItemSortList;
    IESLiveMoreToolsCommonUtil *_moreToolsCommonUtil;
    id<IESLiveAudienceMoreToolsTempStateAreaActions> _itemEventDispatcher;
    NSArray *_needCheckItemTypeList;
    NSMutableArray *_tipsQueue;
    IESLiveGCDTimer *_guideDurationTimer;
}

@property (retain, nonatomic) NSMutableArray *tempStateAreaArray;
@property (retain, nonatomic) NSArray *itemSortList;
@property (retain, nonatomic) NSArray *tempStateAreaItemSortList;
@property (retain, nonatomic) IESLiveMoreToolsCommonUtil *moreToolsCommonUtil;
@property (retain, nonatomic) id<IESLiveAudienceMoreToolsTempStateAreaActions> itemEventDispatcher;
@property (retain, nonatomic) NSArray *needCheckItemTypeList;
@property (retain, nonatomic) NSMutableArray *tipsQueue;
@property (retain, nonatomic) IESLiveGCDTimer *guideDurationTimer;
@property (weak, nonatomic) id<IESLiveAudienceMoreToolsReaction> reaction;
@property (readonly, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)roomModel;
- (void)didSetAttachingDIContext;
- (void)refreshPanelIfNeeded;
- (BOOL)canShowBubbleType:(int)arg0 withCondition:(id)arg1;
- (void)showBubbleType:(int)arg0 tips:(id)arg1 duration:(double)arg2 afterDelay:(double)arg3 condition:(id)arg4;
- (void)streamPlayerDidReadyToRender;
- (void)updateRoomModel:(id)arg0;
- (id)sortedTempAreaItems;
- (id)tempStateAreaArray;
- (void)addTempStateAreaItem:(id)arg0;
- (void)removeTempStateAreaItem:(id)arg0;
- (void)changeShowReachBadgeIcon:(BOOL)arg0;
- (void)moreToolsReceiveDidEnterRoom:(id)arg0;
- (void)triggerTempStateAreaRequest;
- (void)triggerTempStateAreaCollectList;
- (id)trackerTypeWith:(id)arg0;
- (id)moreToolsCommonUtil;
- (id)tempStateAreaItemSortList;
- (id)itemEventDispatcher;
- (id)needCheckItemTypeList;
- (void)scheduleBubbleTimers;
- (BOOL)bubbleGuideEnable;
- (void)invalidateBubbleTimers;
- (void)recordComponentBubbleShow:(int)arg0;
- (void)trackBubbleShow:(id)arg0;
- (void)setGuideDurationTimer:(id)arg0;
- (id)tipsQueue;
- (void)setTipsQueue:(id)arg0;
- (void)dispatchTempStateModel:(id)arg0;
- (void)updateToolbarItemWith:(id)arg0;
- (void)removeToolbarItemWith:(id)arg0;
- (long long)tempStateAreaItemCount;
- (void)removeTempStateAreaItemServerCtrlItem;
- (void)removeTempStateAreaItemCollectionItem;
- (BOOL)addItemsByNewSort;
- (BOOL)needCheckItemTypeList:(long long)arg0;
- (void)setTempStateAreaArray:(id)arg0;
- (id)itemSortList;
- (void)setItemSortList:(id)arg0;
- (void)setTempStateAreaItemSortList:(id)arg0;
- (void)setMoreToolsCommonUtil:(id)arg0;
- (void)setItemEventDispatcher:(id)arg0;
- (void)setNeedCheckItemTypeList:(id)arg0;
- (id)guideDurationTimer;
- (id)init;
- (void).cxx_destruct;
- (id)reaction;
- (void)setReaction:(id)arg0;

@end
