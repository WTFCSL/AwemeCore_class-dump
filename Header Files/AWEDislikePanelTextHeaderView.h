//
//     Generated by private class-dump
//

@class UILabel;

@interface AWEDislikePanelTextHeaderView : UICollectionReusableView {
    UILabel *_title;
}

@property (retain, nonatomic) UILabel *title;

- (void)configWithTitle:(id)arg0 iconURLStr:(id)arg1 placeHolder:(id)arg2;
- (void)configWithTitle:(id)arg0 iconURLStr:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (void)setTitle:(id)arg0;
- (void)setupUI;

@end
