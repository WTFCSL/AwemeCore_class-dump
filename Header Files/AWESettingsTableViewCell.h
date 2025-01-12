//
//     Generated by private class-dump
//

@class UIView, NSString, UITapGestureRecognizer, UIImageView, UIButton, AWESettingItemModel, AWESettingsTableViewCellContainer, UITextField, UILabel;
@protocol AWESettingsTableViewCellBizAbilityProtocol, AWESettingSwitchProtocol;

@interface AWESettingsTableViewCell : UITableViewCell <UITextFieldDelegate, AWESettingsTableViewCellProtocol> {
    BOOL _disableSelectedBackground;
    BOOL _useCardUIStyle;
    AWESettingItemModel *_itemModel;
    unsigned long long _cornerType;
    UIImageView *_loadingView;
    UILabel *_loadingplaceHolderLabel;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_fancySubtitleLabel;
    UILabel *_detailLabel;
    UIView<AWESettingSwitchProtocol> *_aSwitch;
    UIImageView *_iconImageView;
    UIImageView *_arrowImageView;
    UIImageView *_selectImageView;
    UIImageView *_customRightImageView;
    UITextField *_textField;
    UIImageView *_textFieldRightImageView;
    UIView *_roundDotView;
    UITapGestureRecognizer *_rightImageViewGesture;
    UIView *_lineView;
    UIButton *_rightButton;
    UIButton *_detailButton;
    double _titleWidth;
    double _titleLabelOriginX;
    double _detailLabelRightMargin;
    AWESettingsTableViewCellContainer *_containerView;
    UIView *_highlightView;
}

@property (class, retain, nonatomic) id<AWESettingsTableViewCellBizAbilityProtocol> bizAbilityImpl;

@property (retain, nonatomic) UIImageView *loadingView;
@property (retain, nonatomic) UILabel *loadingplaceHolderLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *fancySubtitleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *aSwitch;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *customRightImageView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIImageView *textFieldRightImageView;
@property (retain, nonatomic) UIView *roundDotView;
@property (retain, nonatomic) UITapGestureRecognizer *rightImageViewGesture;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *detailButton;
@property (nonatomic) double titleWidth;
@property (nonatomic) double titleLabelOriginX;
@property (nonatomic) double detailLabelRightMargin;
@property (nonatomic) BOOL useCardUIStyle;
@property (retain, nonatomic) AWESettingsTableViewCellContainer *containerView;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) AWESettingItemModel *itemModel;
@property (nonatomic) BOOL disableSelectedBackground;
@property (nonatomic) unsigned long long cornerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)titleLineSpacing;
+ (id)bizAbilityImpl;
+ (void)setBizAbilityImpl:(id)arg0;
+ (id)unexpectedIdentifier;
+ (double)titleLineSpacingWithFontAdapter:(id)arg0;
+ (id)identifier;

- (id)itemModel;
- (void)setItemModel:(id)arg0;
- (void)setSelectImageView:(id)arg0;
- (id)selectImageView;
- (void)rightButtonClicked:(id)arg0;
- (void)setupBinding;
- (void)setTitleWidth:(double)arg0;
- (BOOL)useCardUIStyle;
- (void)setUseCardUIStyle:(BOOL)arg0;
- (id)realContentView;
- (id)realContentView;
- (void)highlightWithAnimation;
- (void)updateHorizontalConstraint;
- (struct CGSize { double x0; double x1; })titleContentSize;
- (void)makeConstraintForRatio:(double)arg0 containerWitdh:(double)arg1 leftAttachment:(double)arg2 rightAttachment:(double)arg3 leftFancySubtitleWidth:(double)arg4;
- (double)titleContentWidth;
- (void)beginEditingTextField;
- (void)p_textFieldEditingChanged:(id)arg0;
- (void)highlightWithAnimationWithDuration:(double)arg0 dismissDelay:(double)arg1;
- (void)startLoadingMoreAnimating;
- (void)stopLoadingMoreAnimating;
- (void)disableCell;
- (void)updateSubviewsColor;
- (void)setTitleLabelOriginX:(double)arg0;
- (void)setDetailLabelRightMargin:(double)arg0;
- (double)titleLabelOriginX;
- (double)detailLabelRightMargin;
- (id)roundDotView;
- (void)setRoundDotView:(id)arg0;
- (id)fancySubtitleLabel;
- (void)setFancySubtitleLabel:(id)arg0;
- (double)switchTransformOffSet;
- (double)switchTransformOffSet;
- (BOOL)adapterBigFont;
- (BOOL)adapterBigFont;
- (id)loadingplaceHolderLabel;
- (double)kTitleTopMargin;
- (double)kTitleHeight;
- (id)customRightImageView;
- (id)rightImageViewGesture;
- (void)customRightViewTapped:(id)arg0;
- (void)setRightImageViewGesture:(id)arg0;
- (long long)subtitleRightButtonTitleFontWeight;
- (double)kTitleWidth;
- (double)kRightButtonWidth;
- (double)kRightButtonHeight;
- (double)kSubtitleMinHeight;
- (double)kTitleSubtitleSpace;
- (id)textFieldRightImageView;
- (void)updateSubviewsCellTypeUnexpected;
- (void)updateSubviewsCellTypeDefault;
- (void)updateSubviewsCellTypeTitleOnly;
- (void)updateSubviewsCellTypeSelect;
- (void)updateSubviewsCellTypeIconDefault;
- (void)updateSubviewsCellTypeIconTitle;
- (void)updateSubviewsCellTypeIconOnlyDetailIndicator;
- (void)updateSubviewsCellTypeSwitch;
- (void)updateSubviewsCellTypeIconTitleSwitch;
- (void)updateSubviewsCellTypeSubTitleSwitch;
- (void)updateSubviewsCellTypeDetailSubTitleSwitch;
- (void)updateSubviewsCellTypeDetailButtonSwitch;
- (void)updateSubviewsCellTypeDetailSwitch;
- (void)updateSubviewsCellTypeTitleSubtitleSwitch;
- (void)updateSubviewsCellTypeIconTitleSubTitleSwitch;
- (void)updateSubviewsCellTypeDetail;
- (void)updateSubviewsCellTypeDetailIndicator;
- (void)updateSubviewsCellTypeIconDetail;
- (void)updateSubviewsCellTypeSubtitleSelect;
- (void)updateSubviewsCellTypeSubtitleSelectNew;
- (void)updateSubviewsCellTypeSubtitleDetail;
- (void)updateSubviewsCellTypeSubtitleIndicator;
- (void)updateSubviewsCellTypeIconSubtitleIndicator;
- (void)updateSubviewsCellTypeIconSubtitleDetailIndicator;
- (void)updateSubviewsCellTypeSubTitleDetailIndicator;
- (void)updateSubviewsCellTypeIconFancySubtitleDetailIndicator;
- (void)updateSubviewsCellTypeButton;
- (void)updateSubviewsCellTypeIconTitleSpecialDotIndicator;
- (void)updateSubviewsCellTypeIconDetailIndicator;
- (void)updateSubviewsCellTypeRightViewWithBlock;
- (void)updateSubviewsCellTypeSubTitleRightViewWithBlock;
- (void)updateSubviewsCellTypeTitleIconIndicator;
- (void)updateSubviewsCellTypeDetailIcon;
- (void)updateSubviewsCellTypeIconTitleRightButton;
- (void)updateSubviewsCellTypeSubtitleRightButton;
- (void)updateSubviewsCellTypeTitleDetailIcon;
- (void)updateSubviewsCellTypeDetailIndicatorOnlyProfileEdit;
- (void)updateSubviewsCellTypeTextField;
- (void)didGlobalBreakPointChanged;
- (void)resetSubviewsLayout;
- (double)subTitleLineSpacing;
- (BOOL)isDetailEmpty;
- (BOOL)isTitleEmpty;
- (void)setDotViewPositionIfNeeded;
- (BOOL)isAccessibilityTraitsButton;
- (void)detailButtonClicked:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForLastCharacter;
- (void)setSeparatorLineColor:(id)arg0;
- (void)updateSwitchUserInteractionEnabled:(BOOL)arg0;
- (void)highightWithAnimationV2;
- (void)setLoadingplaceHolderLabel:(id)arg0;
- (void)setCustomRightImageView:(id)arg0;
- (void)setTextFieldRightImageView:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setHighlightView:(id)arg0;
- (id)highlightView;
- (void)setTextField:(id)arg0;
- (id)rightButton;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (id)textField;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)textFieldDidBeginEditing:(id)arg0;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (id)iconImageView;
- (void)addObserver;
- (void)textFieldDidEndEditing:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (BOOL)accessibilityActivate;
- (void)setIconImageView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)detailLabel;
- (void)updateSubviews;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (double)titleWidth;
- (id)aSwitch;
- (void)setASwitch:(id)arg0;
- (void)setDetailLabel:(id)arg0;
- (void)updateTitleFont:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)detailButton;
- (void)setDetailButton:(id)arg0;
- (void)setDisableSelectedBackground:(BOOL)arg0;
- (BOOL)disableSelectedBackground;
- (unsigned long long)cornerType;
- (void)setCornerType:(unsigned long long)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
