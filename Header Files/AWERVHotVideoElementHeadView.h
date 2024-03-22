//
//     Generated by private class-dump
//

@class UIImageView, AWEAwemeModel, UILabel, AWERVDetailPageContext;

@interface AWERVHotVideoElementHeadView : UIView {
    id /* block */ _tapBlock;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_rightArrowImageView;
    AWERVDetailPageContext *_pageContext;
    AWEAwemeModel *_awemeModel;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ tapBlock;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)setRightArrowImageView:(id)arg0;
- (id)rightArrowImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 pageContext:(id)arg1;
- (void)configWithModel:(id)arg0 hotSpotModel:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)tapAction;

@end
