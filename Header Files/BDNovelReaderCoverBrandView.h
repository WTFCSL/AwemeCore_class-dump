//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface BDNovelReaderCoverBrandView : UIView {
    UIView *_leftLineView;
    UIView *_rightLineView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)leftLineView;
- (id)rightLineView;
- (void)setViewColor:(id)arg0;
- (void)setLeftLineView:(id)arg0;
- (void)setRightLineView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupViews;

@end