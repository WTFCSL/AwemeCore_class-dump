//
//     Generated by private class-dump
//

@protocol AWEUserRecommendTableViewModelProtocol;

@protocol AWEUserRecommendCellViewProtocol <NSObject>

+ (double)heightForModel:(id)arg0 viewModel:(id)arg1;

@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;

- (void)setViewModel:(id)arg0;
- (id)viewModel;

@optional

- (void)configWithModel:(id)arg0;
- (void)onSelected;
- (void)onModelUpdated;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (void)didEndDisplaying;
- (void)willDisplay;

@end