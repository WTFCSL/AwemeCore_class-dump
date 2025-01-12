//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEMusicCyclePageItem;
@protocol AWEMusicCyclePageViewModelDelegate;

@interface AWEMusicCyclePageViewModel : NSObject {
    id<AWEMusicCyclePageViewModelDelegate> _delegate;
    AWEMusicCyclePageItem *_currentItem;
    AWEMusicCyclePageItem *_preItem;
    AWEMusicCyclePageItem *_nextItem;
    NSMutableDictionary *_reuse;
    struct CGSize { double width; double height; } _itemSize;
}

@property (retain, nonatomic) AWEMusicCyclePageItem *preItem;
@property (retain, nonatomic) AWEMusicCyclePageItem *currentItem;
@property (retain, nonatomic) AWEMusicCyclePageItem *nextItem;
@property (retain, nonatomic) NSMutableDictionary *reuse;
@property (weak, nonatomic) id<AWEMusicCyclePageViewModelDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;

- (void)setReuse:(id)arg0;
- (id)reuse;
- (BOOL)canScrollToNext;
- (void)pageWillChangeAnimation:(BOOL)arg0;
- (BOOL)canScrollToPre;
- (unsigned long long)currentPageItem:(double)arg0;
- (BOOL)updateCurrentItem:(id)arg0;
- (void)correctScrollViewOffsetIfNeed:(id)arg0;
- (void)onScrollDidEnd:(id)arg0 isManual:(BOOL)arg1;
- (void)dropPageItem:(id)arg0;
- (id)reusePageItem:(id)arg0;
- (id)preItem;
- (void)setPreItem:(id)arg0;
- (void)initViewItems:(unsigned long long)arg0;
- (void)addPageItemViews;
- (void)addPageItemView:(id)arg0;
- (id)pageItemOfPosition:(unsigned long long)arg0;
- (void)onScrolling:(id)arg0;
- (id)init;
- (void)setCurrentItem:(id)arg0;
- (void).cxx_destruct;
- (id)nextItem;
- (id)currentItem;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void)setItemSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setNextItem:(id)arg0;
- (void)reloadData:(BOOL)arg0;
- (void)layoutItems;

@end
