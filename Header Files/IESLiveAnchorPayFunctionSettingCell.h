//
//     Generated by private class-dump
//

@class UIImageView, UISwitch, UILabel, IESLiveImageTextView, UIView;
@protocol IESLiveAnchorPayFunctionSettingCellDelegate;

@interface IESLiveAnchorPayFunctionSettingCell : UITableViewCell {
    id<IESLiveAnchorPayFunctionSettingCellDelegate> _delegate;
    UISwitch *_switchView;
    UILabel *_titleLabel;
    UILabel *_subTitlelabel;
    IESLiveImageTextView *_textArrowView;
    UIImageView *_selectionView;
    UIView *_dotView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitlelabel;
@property (retain, nonatomic) IESLiveImageTextView *textArrowView;
@property (retain, nonatomic) UIImageView *selectionView;
@property (retain, nonatomic) UIView *dotView;
@property (weak, nonatomic) id<IESLiveAnchorPayFunctionSettingCellDelegate> delegate;
@property (retain, nonatomic) UISwitch *switchView;

- (void)renderWithItem:(id)arg0;
- (id)textArrowView;
- (id)subTitlelabel;
- (void)setSubTitlelabel:(id)arg0;
- (void)setTextArrowView:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (id)selectionView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSelectionView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)dotView;
- (void)setDotView:(id)arg0;
- (void)setupViews;
- (id)switchView;
- (void)setSwitchView:(id)arg0;
- (void)toggleAction;

@end
