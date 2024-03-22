//
//     Generated by private class-dump
//

@class UILabel, BDSCImageView;

@interface BDSCSearchTipView : UIView {
    BOOL _onlyXsg;
    BDSCImageView *_imageView;
    UILabel *_tipLabel;
    long long _viewType;
    long long _viewStyle;
}

@property (retain, nonatomic) BDSCImageView *imageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) long long viewType;
@property (nonatomic) long long viewStyle;
@property (nonatomic) BOOL onlyXsg;

- (BOOL)onlyXsg;
- (void)updateViewStyle:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewType:(long long)arg1 viewStyle:(long long)arg2 onlyXsg:(BOOL)arg3;
- (void)setOnlyXsg:(BOOL)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (long long)viewStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (long long)viewType;
- (void)layoutSubviews;
- (void)setViewStyle:(long long)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setupSubviews;
- (void)setViewType:(long long)arg0;

@end
