//
//     Generated by private class-dump
//

@class UIScrollView;

@protocol AWEHPTopTabEditViewControllerProtocol <NSObject>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL hasEdited;
@property (copy, nonatomic) id /* block */ showCannotMoveToast;

- (id /* block */)showCannotMoveToast;
- (void)setShowCannotMoveToast:(id /* block */)arg0;
- (void)updateTopTabList:(id)arg0;
- (void)updateRecommendWithList:(id)arg0;
- (id)currentTabList;
- (void)setScrollView:(id)arg0;
- (long long)numberOfCells;
- (id)scrollView;
- (void)setHasEdited:(BOOL)arg0;
- (BOOL)hasEdited;

@end
