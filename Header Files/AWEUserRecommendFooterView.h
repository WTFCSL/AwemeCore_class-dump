//
//     Generated by private class-dump
//

@class NSString, AWEBinding, UILabel, AWEUILoadingView;
@protocol AWEUserRecommendTableViewModelProtocol;

@interface AWEUserRecommendFooterView : UIView <AWEUserRecommendHeaderFooterViewProtocol> {
    BOOL _displaying;
    BOOL _hasTriggeredLoadMore;
    id<AWEUserRecommendTableViewModelProtocol> _viewModel;
    UILabel *_promptLabel;
    AWEUILoadingView *_loadingView;
    AWEBinding *_dataStateBinding;
}

@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEBinding *dataStateBinding;
@property (nonatomic) BOOL displaying;
@property (nonatomic) BOOL hasTriggeredLoadMore;
@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;
+ (id)headerFooterView;

- (void)p_setupUI;
- (void)p_loadMore;
- (void)willBeginDragging;
- (void)didScrollWithVelocity:(double)arg0;
- (void)setDisplaying:(BOOL)arg0;
- (BOOL)displaying;
- (id)dataStateBinding;
- (void)setDataStateBinding:(id)arg0;
- (BOOL)hasTriggeredLoadMore;
- (void)setHasTriggeredLoadMore:(BOOL)arg0;
- (void)setPromptLabel:(id)arg0;
- (id)promptLabel;
- (void).cxx_destruct;
- (void)config;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)layoutSubviews;
- (void)didEndDisplaying;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)willDisplay;

@end
