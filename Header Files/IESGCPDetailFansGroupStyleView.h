//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;

@interface IESGCPDetailFansGroupStyleView : UIView {
    UIView *_bgView;
    UILabel *_titleLabel;
    UILabel *_fansGroupCountLabel;
    UILabel *_descriptionLabel;
    UIImageView *_profileImageView;
    UIButton *_joinButton;
    id /* block */ _clickedBlock;
    id /* block */ _profileImageClickedBlock;
    id /* block */ _titleLabelClickedBlock;
}

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *fansGroupCountLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *profileImageView;
@property (retain, nonatomic) UIButton *joinButton;
@property (copy, nonatomic) id /* block */ clickedBlock;
@property (copy, nonatomic) id /* block */ profileImageClickedBlock;
@property (copy, nonatomic) id /* block */ titleLabelClickedBlock;

- (void)setClickedBlock:(id /* block */)arg0;
- (id /* block */)clickedBlock;
- (id)profileImageView;
- (id)fansGroupCountLabel;
- (id /* block */)titleLabelClickedBlock;
- (void)joinButtonClicked:(id)arg0;
- (id /* block */)profileImageClickedBlock;
- (void)setFansGroupCountLabel:(id)arg0;
- (void)setProfileImageView:(id)arg0;
- (void)setProfileImageClickedBlock:(id /* block */)arg0;
- (void)setTitleLabelClickedBlock:(id /* block */)arg0;
- (void)layoutViews;
- (void).cxx_destruct;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (void)setTitleLabel:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setupViews;
- (id)joinButton;
- (void)setJoinButton:(id)arg0;

@end
