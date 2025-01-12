//
//     Generated by private class-dump
//

@class CJPayStyleCheckMark, UIImageView, UILabel, UIView;

@interface CJPayUnionBindCardChooseTableViewCell : UITableViewCell {
    BOOL _isSelected;
    UIView *_bgView;
    UIImageView *_iconImageView;
    UILabel *_bankCardLabel;
    CJPayStyleCheckMark *_selectView;
    UILabel *_rightLabel;
    UIView *_disabledView;
}

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *bankCardLabel;
@property (retain, nonatomic) CJPayStyleCheckMark *selectView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIView *disabledView;
@property (nonatomic) BOOL isSelected;

- (void)setSelectView:(id)arg0;
- (id)selectView;
- (void)p_setupUI;
- (id)disabledView;
- (void)setDisabledView:(id)arg0;
- (void)updateWithUnionCardInfoModel:(id)arg0;
- (id)bankCardLabel;
- (void)setBankCardLabel:(id)arg0;
- (id)init;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (id)iconImageView;
- (BOOL)isSelected;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (id)rightLabel;
- (void)setRightLabel:(id)arg0;

@end
