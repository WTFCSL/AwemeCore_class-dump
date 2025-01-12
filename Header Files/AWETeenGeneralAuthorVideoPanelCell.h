//
//     Generated by private class-dump
//

@class UIViewController, NSString, UICollectionView, AWETeenExtraParamModel, AWETeenGeneralAuthorVideoCardModel;
@protocol AWETeenGeneralCellInteractionDelegate;

@interface AWETeenGeneralAuthorVideoPanelCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWETeenGeneralCellProtocol> {
    BOOL _isPlaying;
    BOOL _isAppearing;
    UIViewController *_viewController;
    AWETeenGeneralAuthorVideoCardModel *_model;
    id<AWETeenGeneralCellInteractionDelegate> _interactionDelegate;
    AWETeenExtraParamModel *_extraParam;
    UICollectionView *_collectionView;
    long long _beginDraggingIndex;
    struct CGPoint { double x; double y; } _beginDraggingOffset;
}

@property (retain, nonatomic) AWETeenGeneralAuthorVideoCardModel *model;
@property (weak, nonatomic) id<AWETeenGeneralCellInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct CGPoint { double x; double y; } beginDraggingOffset;
@property (nonatomic) long long beginDraggingIndex;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isAppearing;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)arg0;

- (double)currPlaybackTime;
- (void)p_setupUI;
- (id)extraParam;
- (void)setExtraParam:(id)arg0;
- (void)showLog;
- (long long)currPlayIndex;
- (void)seekToPlayIndex:(long long)arg0;
- (id)visibleVideoControllers;
- (id)visibleSlidesViews;
- (void)setBeginDraggingOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)setBeginDraggingIndex:(long long)arg0;
- (void)p_recordBeginDraggingVelocity:(id)arg0;
- (void)p_enterAuthorVCIfNeeded:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1;
- (void)p_fixTargetContentOffset:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)p_checkAutoPlay;
- (struct CGPoint { double x0; double x1; })beginDraggingOffset;
- (void)configWithModel:(id)arg0 interactionDelegate:(id)arg1 extraParam:(id)arg2;
- (void)scrollToVideoWithItemID:(id)arg0;
- (long long)beginDraggingIndex;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setModel:(id)arg0;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setViewController:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)viewController;
- (BOOL)canPlay;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setIsAppearing:(BOOL)arg0;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (id)model;
- (void)setInteractionDelegate:(id)arg0;
- (id)interactionDelegate;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)isAppearing;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)play;
- (void)pause;
- (void)reset;
- (void)setIsPlaying:(BOOL)arg0;
- (void)seekToTime:(double)arg0;

@end
