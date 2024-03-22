//
//     Generated by private class-dump
//

@class UIView, NSString, CJPayChannelBizModel, UIImageView, CJPayStyleCheckMark, MASConstraint, CJPayMethodCellTagView, UILabel;

@interface CJPayMethodTableViewCell : UITableViewCell <CJPayMethodDataUpdateProtocol> {
    UIImageView *_bankIconView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    CJPayStyleCheckMark *_confirmImageView;
    UIView *_seperateView;
    CJPayMethodCellTagView *_suggestView;
    MASConstraint *_titleLabelTopBaseContentViewConstraint;
    MASConstraint *_titleLabelBottomBaseContentViewConstraint;
    MASConstraint *_titleLabelLeftBaseIconImageViewConstraint;
    MASConstraint *_titleLabelCenterBaseContentViewConstraint;
    UIView *_disableView;
    CJPayChannelBizModel *_model;
    MASConstraint *_seperateViewLeftMarginConstraint;
}

@property (retain, nonatomic) UIImageView *bankIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayMethodCellTagView *suggestView;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIView *seperateView;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) CJPayChannelBizModel *model;
@property (retain, nonatomic) MASConstraint *seperateViewLeftMarginConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelTopBaseContentViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelBottomBaseContentViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelLeftBaseIconImageViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelCenterBaseContentViewConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calHeight:(id)arg0;

- (id)seperateView;
- (void)setSeperateView:(id)arg0;
- (void)setConfirmImageView:(id)arg0;
- (id)confirmImageView;
- (id)disableView;
- (void)setDisableView:(id)arg0;
- (id)titleLabelTopBaseContentViewConstraint;
- (id)titleLabelLeftBaseIconImageViewConstraint;
- (id)suggestView;
- (id)titleLabelCenterBaseContentViewConstraint;
- (id)titleLabelBottomBaseContentViewConstraint;
- (id)bankIconView;
- (void)setTitleLabelCenterBaseContentViewConstraint:(id)arg0;
- (void)setTitleLabelLeftBaseIconImageViewConstraint:(id)arg0;
- (void)setBankIconView:(id)arg0;
- (void)setTitleLabelTopBaseContentViewConstraint:(id)arg0;
- (void)setTitleLabelBottomBaseContentViewConstraint:(id)arg0;
- (void)setSeperateViewLeftMarginConstraint:(id)arg0;
- (id)seperateViewLeftMarginConstraint;
- (void)p_setViewEnable:(BOOL)arg0;
- (void)setSuggestView:(id)arg0;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)updateContent:(id)arg0;

@end
