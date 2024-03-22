//
//     Generated by private class-dump
//

@class UIImageView, AWESelfDigitalControlCellModel, UILabel, UIView;

@interface AWESelfDigitalControlCell : UITableViewCell {
    AWESelfDigitalControlCellModel *_model;
    UIView *_cellBackgroundView;
    UIView *_cellMaskView;
    UIImageView *_leftImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_rightArrow;
    UILabel *_stateLabel;
}

@property (retain, nonatomic) UIView *cellBackgroundView;
@property (retain, nonatomic) UIView *cellMaskView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) AWESelfDigitalControlCellModel *model;

+ (id)identifier;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)setRightArrow:(id)arg0;
- (id)cellMaskView;
- (void)setMaskViewColor:(BOOL)arg0;
- (void)setCellMaskView:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)rightArrow;
- (id)cellBackgroundView;
- (void)setCellBackgroundView:(id)arg0;
- (id)leftImageView;
- (void)setLeftImageView:(id)arg0;
- (id)stateLabel;
- (void)setStateLabel:(id)arg0;

@end
