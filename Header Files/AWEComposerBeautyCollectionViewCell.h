//
//     Generated by private class-dump
//

@class UIColor, NSString, UIImageView, UIFont, UIView, UILabel, AWETitleRollingTextView;

@interface AWEComposerBeautyCollectionViewCell : UICollectionViewCell <ACCBeautyItemCellProtocol> {
    BOOL _isNewStyle;
    BOOL _shouldShowAppliedInidicator;
    BOOL _useSystemSelection;
    BOOL _isSmallIcon;
    BOOL _textFolded;
    BOOL _applied;
    long long _downloadStatus;
    unsigned long long _iconStyle;
    double _iconWidth;
    double _selectIndicatorWidth;
    double _selectBorderWidth;
    UILabel *_nameLabel;
    UIView *_flagDotView;
    UIImageView *_iconImageView;
    UIView *_backView;
    UIFont *_selectedFont;
    UIFont *_unselectedFont;
    UIView *_coverIconImageView;
    UIView *_selectedIndicatorView;
    AWETitleRollingTextView *_rollingTitleView;
    UIView *_appliedIndicator;
    UIImageView *_downloadImgView;
    UIImageView *_downloadingImgView;
    UIColor *_rollingTitleViewColor;
    UIColor *_selectedIndicatorViewColor;
    UIColor *_namelblSelectColor;
    UIColor *_namelblUnSelectColor;
    UIColor *_appliedIndicatorColor;
    UIColor *_appliedIndicatorUnSelectColor;
}

@property (nonatomic) unsigned long long iconStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *coverIconImageView;
@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWETitleRollingTextView *rollingTitleView;
@property (retain, nonatomic) UIView *appliedIndicator;
@property (retain, nonatomic) UIImageView *downloadImgView;
@property (retain, nonatomic) UIImageView *downloadingImgView;
@property (retain, nonatomic) UIView *flagDotView;
@property (nonatomic) BOOL textFolded;
@property (nonatomic) BOOL applied;
@property (retain, nonatomic) UIColor *rollingTitleViewColor;
@property (retain, nonatomic) UIColor *selectedIndicatorViewColor;
@property (retain, nonatomic) UIColor *namelblSelectColor;
@property (retain, nonatomic) UIColor *namelblUnSelectColor;
@property (retain, nonatomic) UIColor *appliedIndicatorColor;
@property (retain, nonatomic) UIColor *appliedIndicatorUnSelectColor;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL shouldShowAppliedInidicator;
@property (nonatomic) long long downloadStatus;
@property (nonatomic) BOOL useSystemSelection;
@property (nonatomic) BOOL isSmallIcon;
@property (nonatomic) unsigned long long iconStyle;
@property (nonatomic) double iconWidth;
@property (nonatomic) double selectIndicatorWidth;
@property (nonatomic) double selectBorderWidth;
@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) UIFont *unselectedFont;

+ (id)identifier;
+ (double)maxTextWidth;

- (BOOL)isNewStyle;
- (void)setIsNewStyle:(BOOL)arg0;
- (void)addSubviews;
- (id)selectedIndicatorView;
- (void)setSelectedIndicatorView:(id)arg0;
- (void)p_startLoadingAnimation;
- (id)unselectedFont;
- (void)setUnselectedFont:(id)arg0;
- (id)createRotationAnimation;
- (void)updateWithSelected:(BOOL)arg0;
- (void)p_stopLoadingAnimation;
- (void)configWithIconStyle:(unsigned long long)arg0;
- (void)configWithRoundStyle;
- (void)configWithSquareStyle;
- (id)downloadImgView;
- (void)setDownloadImgView:(id)arg0;
- (void)setFlagDotViewHidden:(BOOL)arg0;
- (id)flagDotView;
- (void)setFlagDotView:(id)arg0;
- (void)setIsSmallIcon:(BOOL)arg0;
- (void)setImageWithUrls:(id)arg0 placeholder:(id)arg1;
- (void)configWithBeauty:(id)arg0;
- (void)makeSelected;
- (void)makeDeselected;
- (void)setShouldShowAppliedIndicator:(BOOL)arg0;
- (void)setShouldShowAppliedIndicatorWhenSwitchIsEnabled:(BOOL)arg0;
- (void)setApplied:(BOOL)arg0;
- (void)enableCellItem:(BOOL)arg0;
- (id)unselectedNameLabelTextColor;
- (BOOL)useSystemSelection;
- (double)selectIndicatorWidth;
- (id)rollingTitleView;
- (id)appliedIndicator;
- (id)downloadingImgView;
- (id)rollingTitleViewColor;
- (void)setTextFolded:(BOOL)arg0;
- (double)selectBorderWidth;
- (id)namelblSelectColor;
- (id)namelblUnSelectColor;
- (id)appliedIndicatorColor;
- (id)appliedIndicatorUnSelectColor;
- (BOOL)textFolded;
- (BOOL)shouldShowAppliedInidicator;
- (BOOL)applied;
- (id)selectedIndicatorViewColor;
- (void)setRollingTitleViewColor:(id)arg0;
- (void)setSelectedIndicatorViewColor:(id)arg0;
- (void)setNamelblSelectColor:(id)arg0;
- (void)setNamelblUnSelectColor:(id)arg0;
- (void)setAppliedIndicatorColor:(id)arg0;
- (void)setAppliedIndicatorUnSelectColor:(id)arg0;
- (id)coverIconImageView;
- (void)setCoverIconImageView:(id)arg0;
- (void)configRollingTitleViewColor:(id)arg0;
- (void)configSelectedIndicatorViewColor:(id)arg0;
- (void)configNamelblSelectColor:(id)arg0 unSelect:(id)arg1;
- (void)configAppliedIndicatorColor:(id)arg0 unSelect:(id)arg1;
- (void)setSelectIndicatorWidth:(double)arg0;
- (void)setSelectBorderWidth:(double)arg0;
- (void)addCoverIconImageView:(id)arg0;
- (void)removeCoverIconImageView;
- (void)setShouldShowAppliedInidicator:(BOOL)arg0;
- (void)setUseSystemSelection:(BOOL)arg0;
- (BOOL)isSmallIcon;
- (void)setRollingTitleView:(id)arg0;
- (void)setAppliedIndicator:(id)arg0;
- (void)setDownloadingImgView:(id)arg0;
- (id)accessibilityLabel;
- (void)setBackView:(id)arg0;
- (void)setAvailable:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)backView;
- (void)setSelected:(BOOL)arg0;
- (id)nameLabel;
- (void)prepareForReuse;
- (double)iconWidth;
- (BOOL)isAccessibilityElement;
- (id)iconImageView;
- (void)setIconImage:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (id)selectedFont;
- (void)setSelectedFont:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (unsigned long long)iconStyle;
- (void)setIconStyle:(unsigned long long)arg0;
- (long long)downloadStatus;
- (void)setDownloadStatus:(long long)arg0;
- (void)setIconWidth:(double)arg0;

@end
