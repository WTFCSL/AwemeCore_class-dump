//
//     Generated by private class-dump
//

@class UILabel, UIImageView, NSString;

@interface IESGCPDetailActionFooter : UIView {
    NSString *_title;
    id /* block */ _action;
    UILabel *_titlelabel;
    UIImageView *_icon;
}

@property (retain, nonatomic) UILabel *titlelabel;
@property (retain, nonatomic) UIImageView *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ action;

- (void)setTitlelabel:(id)arg0;
- (id)titlelabel;
- (id)icon;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (void)setAction:(id /* block */)arg0;
- (id /* block */)action;
- (void)setIcon:(id)arg0;
- (void)layoutView;
- (void)setTitle:(id)arg0;
- (void)setupView;
- (void)tapAction:(id)arg0;

@end
