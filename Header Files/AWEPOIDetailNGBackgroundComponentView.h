//
//     Generated by private class-dump
//

@class AWEPOIDetailBackgroundViewController, UIView;

@interface AWEPOIDetailNGBackgroundComponentView : AWEPOIDetailHeaderImageComponentBaseView {
    AWEPOIDetailBackgroundViewController *_backgroundVC;
    UIView *_backgroundVCPlaceHolderView;
}

@property (retain, nonatomic) UIView *backgroundVCPlaceHolderView;
@property (retain, nonatomic) AWEPOIDetailBackgroundViewController *backgroundVC;

- (void)updateViewModel:(id)arg0;
- (void)updateComponentViewAlpha:(double)arg0;
- (void)updateBackgroundViewTop:(double)arg0;
- (id)backgroundVCPlaceHolderView;
- (id)backgroundVC;
- (void)setBackgroundVC:(id)arg0;
- (void)setBackgroundVCPlaceHolderView:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)didTap:(id)arg0;
- (void)setupUI;

@end
