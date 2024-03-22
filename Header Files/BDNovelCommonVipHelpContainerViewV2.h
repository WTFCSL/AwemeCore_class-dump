//
//     Generated by private class-dump
//

@class BDNovelCommonVipHelpView, BDNovelCommonVipSubscribeView;
@protocol BDNovelCommonVipHelpContainerViewV2Delegate;

@interface BDNovelCommonVipHelpContainerViewV2 : BDNovelCommonVipBaseChildView {
    id<BDNovelCommonVipHelpContainerViewV2Delegate> _delegate;
    BDNovelCommonVipSubscribeView *_subscribeView;
    BDNovelCommonVipHelpView *_helpView;
}

@property (retain, nonatomic) BDNovelCommonVipSubscribeView *subscribeView;
@property (retain, nonatomic) BDNovelCommonVipHelpView *helpView;
@property (weak, nonatomic) id<BDNovelCommonVipHelpContainerViewV2Delegate> delegate;

- (void)setHelpView:(id)arg0;
- (id)helpView;
- (void)setSubscribeView:(id)arg0;
- (id)subscribeView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 parentView:(id)arg1 viewModel:(id)arg2;
- (void)sizeToWidth:(double)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;

@end
