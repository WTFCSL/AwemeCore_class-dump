//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWEPOIDetailNGPOIMallEmptyComponentViewModel;

@interface AWEPOIDetailNGPOIMallEmptyComponentView : DitoComponentView {
    UIImageView *_mallEmptyView;
    UILabel *_mallLabel;
    AWEPOIDetailNGPOIMallEmptyComponentViewModel *_viewModel;
}

@property (retain, nonatomic) UIImageView *mallEmptyView;
@property (retain, nonatomic) UILabel *mallLabel;
@property (weak, nonatomic) AWEPOIDetailNGPOIMallEmptyComponentViewModel *viewModel;

- (void)updateViewModel:(id)arg0;
- (id)mallLabel;
- (id)mallEmptyView;
- (void)setMallEmptyView:(id)arg0;
- (void)setMallLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setupUI;

@end