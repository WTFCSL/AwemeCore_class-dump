//
//     Generated by private class-dump
//

@class AWEPOIDetailSkinConfig, NSArray, AWEPOIRepeatBackgroundView, AWEPOIDetailProductItemRateCard, UILabel, AWEPOIUGCRateFiveStarView;

@interface AWEPOIDetailRateCardView : UIView {
    AWEPOIDetailProductItemRateCard *_model;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    NSArray *_gradeViewArray;
    AWEPOIUGCRateFiveStarView *_fiveStarView;
    id /* block */ _showModalWithTag;
    id /* block */ _onClose;
    AWEPOIDetailSkinConfig *_skinConfig;
    AWEPOIRepeatBackgroundView *_textureBackgroundView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) NSArray *gradeViewArray;
@property (retain, nonatomic) AWEPOIUGCRateFiveStarView *fiveStarView;
@property (retain, nonatomic) AWEPOIDetailProductItemRateCard *model;
@property (copy, nonatomic) id /* block */ showModalWithTag;
@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) AWEPOIDetailSkinConfig *skinConfig;
@property (retain, nonatomic) AWEPOIRepeatBackgroundView *textureBackgroundView;

- (void)onTapClose;
- (id)fiveStarView;
- (void)setFiveStarView:(id)arg0;
- (id)skinConfig;
- (void)setSkinConfig:(id)arg0;
- (void)updateSkinConfig:(id)arg0;
- (id)textureBackgroundView;
- (void)setTextureBackgroundView:(id)arg0;
- (id)gradeViewArray;
- (id /* block */)showModalWithTag;
- (void)setGradeViewArray:(id)arg0;
- (id)initWithPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)updateWithTagModel:(id)arg0;
- (void)setShowModalWithTag:(id /* block */)arg0;
- (void)setModel:(id)arg0;
- (void)setPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end
