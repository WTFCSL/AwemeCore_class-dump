//
//     Generated by private class-dump
//

@class UIScrollView, NSString, NSArray;
@protocol DitoNestedScrollItemDelegate, DitoComponentViewModel, DitoComponentView;

@interface DitoNestedScrollItem : NSObject <DitoViscousDragItemDelegate_Private> {
    BOOL _nestedScrollEnabled;
    BOOL _nestedScrolling;
    BOOL _skipScrollForViscousDrag;
    BOOL _lockNestedScroll;
    BOOL _boundaryDockingWhenFling;
    NSString *_key;
    UIScrollView *_nestedScrollView;
    id<DitoComponentViewModel> _viewModel;
    id<DitoComponentView> _componentView;
    NSArray *_viscousDragItemList;
    id<DitoNestedScrollItemDelegate> _delegate;
    unsigned long long _scrollState;
    unsigned long long _positionToTopLine;
}

@property (readonly, nonatomic) UIScrollView *bodyContainerView;
@property (readonly, nonatomic) double nestedScrollTopInsetLine;
@property (copy, nonatomic) NSString *key;
@property (weak, nonatomic) UIScrollView *nestedScrollView;
@property (weak, nonatomic) id<DitoComponentViewModel> viewModel;
@property (weak, nonatomic) id<DitoComponentView> componentView;
@property (nonatomic) BOOL nestedScrollEnabled;
@property (nonatomic) BOOL nestedScrolling;
@property (copy, nonatomic) NSArray *viscousDragItemList;
@property (nonatomic) BOOL skipScrollForViscousDrag;
@property (weak, nonatomic) id<DitoNestedScrollItemDelegate> delegate;
@property (nonatomic) unsigned long long scrollState;
@property (nonatomic) BOOL lockNestedScroll;
@property (nonatomic) BOOL boundaryDockingWhenFling;
@property (nonatomic) unsigned long long positionToTopLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nestedScrollView;
- (id)viscousDragItemList;
- (void)setNestedScrollView:(id)arg0;
- (BOOL)viscousDragging;
- (BOOL)nestedScrolling;
- (BOOL)viscousDragViewBeActivate;
- (BOOL)nestedScrollEnabled;
- (void)setNestedScrollEnabled:(BOOL)arg0;
- (void)setBoundaryDockingWhenFling:(BOOL)arg0;
- (void)setViscousDragItemList:(id)arg0;
- (BOOL)boundaryDockingWhenFling;
- (void)setNestedScrolling:(BOOL)arg0;
- (unsigned long long)positionToTopLine;
- (void)setPositionToTopLine:(unsigned long long)arg0;
- (BOOL)lockNestedScroll;
- (double)nestedScrollTopInsetLine;
- (void)viscousDragBody:(id)arg0;
- (void)viscousDragBody:(id)arg0 targetOffset:(struct CGPoint { double x0; double x1; })arg1;
- (BOOL)isNestedScrolling;
- (void)viscousDragScrollViewDidScroll:(id)arg0;
- (id)findViscousDragItemByScrollView:(id)arg0;
- (BOOL)skipScrollForViscousDrag;
- (void)setSkipScrollForViscousDrag:(BOOL)arg0;
- (void)setLockNestedScroll:(BOOL)arg0;
- (id)key;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)scrollState;
- (void)setViewModel:(id)arg0;
- (void)setKey:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setComponentView:(id)arg0;
- (id)componentView;
- (id)bodyContainerView;
- (void)setScrollState:(unsigned long long)arg0;

@end
