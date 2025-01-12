//
//     Generated by private class-dump
//

@class AWEFeedCollectionContainerLayoutConfig, AWEFeedCollectionContainerContext;
@protocol AWEFeedCollectionContainerRelatedRecommendSectionDelegate;

@interface AWEVideoDescriptionMaskRelatedRecommendSectionController : AWEBaseListSectionController {
    id<AWEFeedCollectionContainerRelatedRecommendSectionDelegate> _delegate;
    AWEFeedCollectionContainerContext *_containerContext;
    AWEFeedCollectionContainerLayoutConfig *_layoutConfig;
    double _cellWidth;
}

@property (nonatomic) double cellWidth;
@property (weak, nonatomic) id<AWEFeedCollectionContainerRelatedRecommendSectionDelegate> delegate;
@property (retain, nonatomic) AWEFeedCollectionContainerContext *containerContext;
@property (copy, nonatomic) AWEFeedCollectionContainerLayoutConfig *layoutConfig;

- (void)setLayoutConfig:(id)arg0;
- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (void)didSelectItemAtIndex:(long long)arg0 model:(id)arg1;
- (void)configSupplementaryHeaderView:(id)arg0;
- (void)viewControllerWillAppear:(BOOL)arg0 isBeingPresented:(BOOL)arg1 isMovingToParentViewController:(BOOL)arg2;
- (id)init;
- (void).cxx_destruct;
- (Class)cellClass;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (double)cellWidth;
- (id)containerContext;
- (void)setContainerContext:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)setCellWidth:(double)arg0;
- (Class)headerViewClass;
- (id)layoutConfig;

@end
