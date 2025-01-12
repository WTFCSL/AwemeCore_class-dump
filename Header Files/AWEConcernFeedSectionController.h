//
//     Generated by private class-dump
//

@class AWECommonFeedSectionContext;

@interface AWEConcernFeedSectionController : AWEBaseListSectionController <AWECommonFeedSectionControllerProtocol> {
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ autoPlayHandler;
    void /* unknown type, empty encoding */ superCollectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sectionContext;
}

@property (nonatomic) void /* unknown type, empty encoding */ isActive;
@property (nonatomic, retain) void /* unknown type, empty encoding */ autoPlayHandler;
@property (nonatomic, retain) void /* unknown type, empty encoding */ superCollectionView;
@property (nonatomic, retain) AWECommonFeedSectionContext *sectionContext;

- (id)liveTransitionContext;
- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)sectionDidEndDisplayingCell:(id)arg0 index:(long long)arg1;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (Class)cellClassForModel:(id)arg0 index:(long long)arg1;
- (void)configSupplementaryHeaderView:(id)arg0;
- (void)sectionWillDisplaySupplementaryView:(id)arg0;
- (void)sectionDidEndDisplayingSupplementaryView:(id)arg0;
- (void)setAutoPlayHandler:(id)arg0;
- (id)superCollectionView;
- (void)setSuperCollectionView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })activeViewFrame;
- (BOOL)shouldNotActive;
- (long long)preferScaleMode;
- (id)autoPlayHandler;
- (void)didBecomeActive;
- (id)init;
- (id)transitionContext;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)didResignActive;
- (BOOL)hasVideo;
- (BOOL)isActive;
- (void)updateDisplay:(BOOL)arg0;
- (id)sectionContext;
- (void)setSectionContext:(id)arg0;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;
- (Class)headerViewClass;

@end
