//
//     Generated by private class-dump
//

@protocol IESLiveLongPressOuterMenuProvider <NSObject>

- (void)shareToUser:(id)arg0 aweRoomModel:(id)arg1 trackDict:(id)arg2;
- (void)insertRecommendModel:(id)arg0 forRoom:(id)arg1;
- (void)addRecommendStateIntoCache:(id)arg0;
- (void)fetchRecommandFriendsApiWithParms:(id)arg0 completion:(id /* block */)arg1;
- (void)removeRecommendStateIntoCache:(id)arg0;
- (void)fetchCancelRecommandApiWithParms:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)queryRecommendStateInCache:(id)arg0;
- (void)injectOuterMenuItemsWithPanelModel:(id)arg0 roomModel:(id)arg1 trackContext:(id)arg2 dismissAction:(id /* block */)arg3;
- (id)customOperationFunModelsWithRoomModel:(id)arg0 isInRoom:(BOOL)arg1;
- (void)showAwemeStyleLongPressPanelWithRoom:(id)arg0 actionArray:(id)arg1 allowShare:(BOOL)arg2 trackParams:(id)arg3;
- (id)getDuxUIImage:(id)arg0;
- (id)customOperationAwemeStyleFunModelsWithRoomModel:(id)arg0 isInRoom:(BOOL)arg1 trackParams:(id)arg2;
- (void)addRecommendToFriendModelIfNeed:(id /* block */)arg0;
- (void)resortOperationFunModelsWithRoomModel:(id)arg0;
- (void)fetchRecommandStateApiWithParms:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchRecommandApiWithRecommand:(BOOL)arg0 WithParams:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)longPressPannelShowing;
- (BOOL)queryLocalPromotionState;
- (void)openDouPlusWithUrl:(id)arg0 anchorID:(id)arg1;
- (void)queryForLiveLongPressDouPlusUrl:(id)arg0 roomID:(id)arg1 entranceType:(id)arg2 completion:(id /* block */)arg3;
- (void)addRecommendClickIntoCache:(BOOL)arg0;
- (BOOL)queryRecommendClick;
- (void)fetchShareRoomApiWithParms:(id)arg0 completion:(id /* block */)arg1;

@end