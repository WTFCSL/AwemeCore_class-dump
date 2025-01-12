//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEIMPrivacySettingSelectTableViewCell : AWEIMPrivacySettingBaseTableViewCell {
    UIImageView *_arrowView;
    UILabel *_selectTipLabel;
}

@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *selectTipLabel;

- (void)configWithModel:(id)arg0;
- (id)selectTipLabel;
- (void)p_updateTipLabelConstraint;
- (void)updateHorizontalConstraint;
- (struct CGSize { double x0; double x1; })titleContentSize;
- (void)makeConstraintForRatio:(double)arg0 containerWitdh:(double)arg1 leftAttachment:(double)arg2 rightAttachment:(double)arg3 leftFancySubtitleWidth:(double)arg4;
- (double)titleContentWidth;
- (void)setSelectTipLabel:(id)arg0;
- (void).cxx_destruct;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)setupUI;

@end
