//
//     Generated by private class-dump
//

@class UIColor, UIButton, AWEGradientView;

@interface AWESegmentSearchView : UIView {
    id /* block */ _searchBtnTappedBlock;
    UIColor *_color;
    UIButton *_searchButton;
    AWEGradientView *_gradientView;
}

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (copy, nonatomic) id /* block */ searchBtnTappedBlock;

- (void)searchButtonClicked;
- (void)themeDidReloaded;
- (void)configWithUserColor:(id)arg0;
- (void)setSearchBtnTappedBlock:(id /* block */)arg0;
- (id /* block */)searchBtnTappedBlock;
- (id)color;
- (void).cxx_destruct;
- (void)setSearchButton:(id)arg0;
- (void)setGradientView:(id)arg0;
- (id)searchButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)gradientView;
- (void)setColor:(id)arg0;
- (void)setupSubviews;

@end
