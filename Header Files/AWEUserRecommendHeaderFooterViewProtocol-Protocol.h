//
//     Generated by private class-dump
//

@protocol AWEUserRecommendTableViewModelProtocol;

@protocol AWEUserRecommendHeaderFooterViewProtocol <NSObject>

+ (double)height;
+ (id)headerFooterView;

@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;

- (void)setViewModel:(id)arg0;
- (id)viewModel;

@optional

- (void)willBeginDragging;
- (void)didScrollWithVelocity:(double)arg0;
- (void)config;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)didEndDragging;

@end
