//
//     Generated by private class-dump
//

@class YYLabel, AWEPOIDetailNGPOIMallTitleComponentViewModel;

@interface AWEPOIDetailNGPOIMallTitleComponentView : DitoComponentView {
    AWEPOIDetailNGPOIMallTitleComponentViewModel *_viewModel;
    YYLabel *_poiMallTitleLabel;
}

@property (weak, nonatomic) AWEPOIDetailNGPOIMallTitleComponentViewModel *viewModel;
@property (retain, nonatomic) YYLabel *poiMallTitleLabel;

- (void)updateViewModel:(id)arg0;
- (id)poiMallTitleLabel;
- (void)setPoiMallTitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setupUI;

@end