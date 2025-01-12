//
//     Generated by private class-dump
//

@class IESLiveToolbarTracker, HTSEventContext, NSArray, UIView, NSString, IESLiveGuardCollectionView, NSMutableArray, IESLivePanelConfiguration;

@interface IESLivePanelCollectionView : UIView <IESLivePanelViewRouter, IESLiveAutoRotateAction, HorizontalScrollCollectionViewCellDelegate, IESLiveSplitScreenAction, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _isAnchorNewStyle;
    BOOL _isAudienceNewStyle;
    BOOL _needAverage;
    HTSEventContext *_trackContext;
    IESLiveGuardCollectionView *_collectionView;
    IESLivePanelConfiguration *_panelConfig;
    IESLiveToolbarTracker *_tracker;
    NSMutableArray *_cachedAnimationArr;
    NSArray *_titles;
    NSArray *_items;
    UIView *_exclutionsMask;
    UIView *_blurView;
}

@property (retain, nonatomic) IESLiveGuardCollectionView *collectionView;
@property (retain, nonatomic) IESLivePanelConfiguration *panelConfig;
@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) UIView *exclutionsMask;
@property (retain, nonatomic) UIView *blurView;
@property (nonatomic) BOOL needAverage;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveToolbarTracker *tracker;
@property (retain, nonatomic) NSMutableArray *cachedAnimationArr;
@property (nonatomic) BOOL isAnchorNewStyle;
@property (nonatomic) BOOL isAudienceNewStyle;
@property (copy, nonatomic) NSArray *titles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (BOOL)isNewStyle;
- (void)setPanelConfig:(id)arg0;
- (id)panelConfig;
- (void)splitScreenBreakPointUpdate;
- (void)dismissPanelView:(id /* block */)arg0;
- (void)animationForAutoRotateToOrientation:(long long)arg0 duration:(double)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)setIsAnchorNewStyle:(BOOL)arg0;
- (void)showAnimationWithItems:(id)arg0 andGroupTitle:(id)arg1;
- (void)refreshPanelFrame;
- (void)setIsAudienceNewStyle:(BOOL)arg0;
- (void)highlightGuide;
- (BOOL)needAverage;
- (void)didTapItemAtIndexPath:(id)arg0;
- (void)setNeedAverage:(BOOL)arg0;
- (void)logEvent:(id)arg0 fileName:(const char *)arg1 functionName:(const char *)arg2 line:(int)arg3 extra:(id)arg4;
- (id)exclutionsMask;
- (BOOL)sectionCanHorizentalScroll:(long long)arg0;
- (struct CGSize { double x0; double x1; })referenceSizeForKind:(id)arg0 inSection:(long long)arg1;
- (void)cellClick:(id)arg0;
- (id)cachedAnimationArr;
- (void)dismissPanelView;
- (id)exclustionsMaskView;
- (void)setExclutionsMask:(id)arg0;
- (BOOL)isAnchorNewStyle;
- (BOOL)isAudienceNewStyle;
- (void)cleanMask;
- (void)setCachedAnimationArr:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (id)tracker;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setTracker:(id)arg0;
- (void)setItems:(id)arg0;
- (void)setBlurView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)items;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)blurView;
- (id)initWithConfiguration:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)reloadWithItems:(id)arg0;
- (id)titles;
- (void)setTitles:(id)arg0;

@end
