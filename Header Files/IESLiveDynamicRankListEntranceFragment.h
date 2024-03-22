//
//     Generated by private class-dump
//

@class IESLiveDynamicRankListEntranceView, NSDictionary, NSString;

@interface IESLiveDynamicRankListEntranceFragment : IESLiveRoomComponent <HTSLiveRankListRouter, IESLiveStickerAnchorActions, HTSLiveMessageSubscriber, IESLiveDynamicRankListEntranceViewDelegate, IESLiveDynamicRankListEntranceViewDataProvider> {
    BOOL _externalHideVertical;
    IESLiveDynamicRankListEntranceView *_entranceView;
    NSDictionary *_statusMap;
    id /* block */ _hideVerticalCompletion;
}

@property (retain, nonatomic) IESLiveDynamicRankListEntranceView *entranceView;
@property (copy, nonatomic) NSDictionary *statusMap;
@property (nonatomic) BOOL externalHideVertical;
@property (copy, nonatomic) id /* block */ hideVerticalCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;
+ (BOOL)isMixed;

- (id)entranceView;
- (void)setEntranceView:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)handleOrientationChanged:(long long)arg0;
- (id)dynamicSchema;
- (id)statusMap;
- (void)setStatusMap:(id)arg0;
- (void)componentOrientationTransitioning:(long long)arg0;
- (void)stickerViewMoving:(id)arg0;
- (void)stickerViewMoveEnd:(id)arg0;
- (void)hideVerticalEntranceAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)showVerticalEntranceAnimated:(BOOL)arg0;
- (BOOL)enableVerticalEntrance;
- (void)updateEntranceStatus:(id)arg0;
- (void)showRankListView;
- (void)hideRankListView;
- (void)showRankListViewFallBack;
- (unsigned long long)getCurrentWarningLevel;
- (void)_postPerfWarningNotfication:(unsigned long long)arg0;
- (void)p_handleAwardMessage:(id)arg0;
- (void)p_prepareResourceIfNeededWithAwardMessage:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)externalHideVertical;
- (void)setExternalHideVertical:(BOOL)arg0;
- (void)setHideVerticalCompletion:(id /* block */)arg0;
- (void)p_handleExternalCompletion;
- (void)p_addEntranceView:(BOOL)arg0;
- (void)updateEntranceViewWithOrientationIfNeeded;
- (id /* block */)hideVerticalCompletion;
- (id)p_generateAspectFitImageWithContent:(id)arg0 container:(id)arg1 contentSize:(struct CGSize { double x0; double x1; })arg2 containerSize:(struct CGSize { double x0; double x1; })arg3;
- (id)p_generateImageWithContent:(id)arg0 containerSize:(struct CGSize { double x0; double x1; })arg1 container:(id)arg2;
- (long long)assetBizTypeWithRankType:(unsigned long long)arg0;
- (id)p_buildRankAwardMixInfoWithMessage:(id)arg0;
- (void)didChangeDynamicEntranceWithSize:(struct CGSize { double x0; double x1; })arg0;
- (void)didFaildToLoadDynamicEntrance;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;

@end