//
//     Generated by private class-dump
//

@class UILabel, NSString, UIView;

@interface HTSLivePopupNavigationBar : UIView {
    UIView *_bgView;
    UIView *_bgBackgroundImageView;
    UIView *_titleView;
    UILabel *_titleLabel;
    NSString *_title;
    UIView *_leftBarButtonItem;
    UIView *_rightBarButtonItem;
    UIView *_naviBarSepetorLineView;
    id /* block */ _onLeftBarButtonClick;
    id /* block */ _onRightBarButtonClick;
    struct CGSize { double width; double height; } _titleSize;
}

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *bgBackgroundImageView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *leftBarButtonItem;
@property (retain, nonatomic) UIView *rightBarButtonItem;
@property (retain, nonatomic) UIView *naviBarSepetorLineView;
@property (copy, nonatomic) id /* block */ onLeftBarButtonClick;
@property (copy, nonatomic) id /* block */ onRightBarButtonClick;

- (void)setTopCornerRadius:(double)arg0;
- (void)setTitleSize:(struct CGSize { double x0; double x1; })arg0;
- (id)naviBarSepetorLineView;
- (void)setOnRightBarButtonClick:(id /* block */)arg0;
- (void)setOnLeftBarButtonClick:(id /* block */)arg0;
- (void)setNaviBarSepetorLineView:(id)arg0;
- (void)leftBarButtonClick;
- (void)rightBarButtonClick;
- (id)bgBackgroundImageView;
- (void)setBgBackgroundImageView:(id)arg0;
- (id /* block */)onLeftBarButtonClick;
- (id /* block */)onRightBarButtonClick;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleView:(id)arg0;
- (id)title;
- (void)clear;
- (void)setTitleLabel:(id)arg0;
- (id)titleView;
- (void)setTitle:(id)arg0;
- (id)leftBarButtonItem;
- (void)setLeftBarButtonItem:(id)arg0;
- (id)rightBarButtonItem;
- (void)setRightBarButtonItem:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (struct CGSize { double x0; double x1; })titleSize;

@end
