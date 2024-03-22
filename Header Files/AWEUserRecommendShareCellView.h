//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEUserRecommendTableViewModelProtocol;

@interface AWEUserRecommendShareCellView : AWEUserRecommendBaseCellView <AWEUserRecommendCellViewProtocol> {
    id<AWEUserRecommendTableViewModelProtocol> _viewModel;
    long long _cellType;
}

@property (nonatomic) long long cellType;
@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)arg0;
- (void)onSelected;
- (void)p_clickPrimaryButton:(id)arg0;
- (void)p_clickRemoveButton:(id)arg0;
- (void)p_accessibilityRemove;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 layout:(id)arg1;
- (void)setViewModel:(id)arg0;
- (void)setCellType:(long long)arg0;
- (id)viewModel;
- (long long)cellType;
- (id)secondaryButtonTitle;
- (void)willDisplay;
- (void)updateAccessibilityElements;

@end