//
//     Generated by private class-dump
//

@class NSString, LunaCyclePageViewModel, UIScrollView, LunaCyclePageItem, UIView;
@protocol LunaCyclePageDelegate, LunaCyclePageDataSource, LunaCycleViewItemProtocol;

@interface LunaCyclePageView : UIView <UIScrollViewDelegate, LunaCyclePageViewModelDelegate> {
    BOOL _isAutoNexting;
    BOOL _isEndDecelerating;
    BOOL _isDragging;
    id<LunaCyclePageDataSource> _dataSource;
    id<LunaCyclePageDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_bgView;
    LunaCyclePageViewModel *_viewModel;
    LunaCyclePageItem *_currentItemForPlay;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) LunaCyclePageViewModel *viewModel;
@property (nonatomic) BOOL isEndDecelerating;
@property (nonatomic) BOOL isDragging;
@property (retain, nonatomic) LunaCyclePageItem *currentItemForPlay;
@property (weak, nonatomic) id<LunaCyclePageDataSource> dataSource;
@property (weak, nonatomic) id<LunaCyclePageDelegate> delegate;
@property (nonatomic) BOOL isAutoNexting;
@property (retain, nonatomic) UIView *bgView;
@property (readonly, nonatomic) id<LunaCycleViewItemProtocol> currentItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsEndDecelerating:(BOOL)arg0;
- (void)scrollDidEnd:(long long)arg0;
- (void)setIsAutoNexting:(BOOL)arg0;
- (BOOL)isEndDecelerating;
- (void)updateCurrentItem;
- (void)__scrollEndToProcessSildeDirection:(id)arg0;
- (id)pageItemModel:(id)arg0 reuse:(id)arg1;
- (void)layoutUpdate:(double)arg0 offset:(double)arg1;
- (void)pageItemModelMayChanged:(id)arg0;
- (void)pageItemAddView:(id)arg0;
- (id)pageItemCurrentModel;
- (id)pageItemPreModelOfcurrent:(id)arg0;
- (id)pageItemNextModelOfcurrent:(id)arg0;
- (BOOL)isAutoNexting;
- (void)setCurrentItemForPlay:(id)arg0;
- (void)scrollContentOffset:(struct CGPoint { double x0; double x1; })arg0 animation:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)currentItemForPlay;
- (BOOL)scrollToNextAnimation:(BOOL)arg0 completion:(id /* block */)arg1;
- (BOOL)scrollToPreAnimation:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setDataSource:(id)arg0;
- (void)setScrollView:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (BOOL)isDragging;
- (id)currentItem;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)viewModel;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (id)scrollView;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)reloadData:(BOOL)arg0;
- (void)setIsDragging:(BOOL)arg0;

@end