//
//     Generated by private class-dump
//

@class AWEGradientView, UIView, UILabel, BDImageView;

@interface AWETheaterMoreFeedCoverView : UIView {
    id /* block */ _finishImageRequestBlock;
    BDImageView *_coverImageView;
    UIView *_tagBackgroundView;
    UILabel *_tagLabel;
    AWEGradientView *_gradientView;
    UILabel *_scoreLabel;
    UILabel *_updateInfoLabel;
}

@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *updateInfoLabel;
@property (copy, nonatomic) id /* block */ finishImageRequestBlock;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (id)tagBackgroundView;
- (void)setTagBackgroundView:(id)arg0;
- (void)updateCoverImage:(id)arg0;
- (void)updateCoverTag:(id)arg0;
- (void)updateCoverInfoView:(id)arg0;
- (id)updateInfoLabel;
- (id /* block */)finishImageRequestBlock;
- (void)configWithSectionItem:(id)arg0 themeStyle:(long long)arg1;
- (void)setFinishImageRequestBlock:(id /* block */)arg0;
- (void)setUpdateInfoLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)gradientView;
- (void)reset;
- (void)setupUI;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg0;

@end
