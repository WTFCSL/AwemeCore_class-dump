//
//     Generated by private class-dump
//

@class UIFont, NSString, UIImage, NSURL, NSAttributedString, NSIndexPath, NSNumber, UIColor;
@protocol AWEUserSettingBigFontAdapterProtocol;

@interface AWESettingItemModel : NSObject {
    BOOL _isForbidChangeColor;
    BOOL _isCellLoading;
    BOOL _ignoreTitleTranslate;
    BOOL _ignoreDetailTranslate;
    BOOL _isFriendsGeckoImage;
    BOOL _isSwitchOn;
    BOOL _isEnable;
    BOOL _isDisableWithTitleAndSwtich;
    BOOL _isDisableExceptSwitch;
    BOOL _isSelect;
    BOOL _showDotView;
    BOOL _highlightDetail;
    BOOL _hasLineView;
    BOOL _rightPicColorChanged;
    BOOL _userInteractionEnabled;
    BOOL _shouldJumpUpdateHeight;
    long long _type;
    NSString *_identifier;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    NSString *_titleHighLightedPart;
    UIColor *_titleColor;
    NSString *_subTitle;
    NSString *_fancySubtitle;
    NSString *_detail;
    NSString *_rightButtonTitle;
    UIColor *_rightButtonBgColor;
    UIColor *_rightButtonLineColor;
    UIColor *_rightButtonTextColor;
    NSString *_loadingImageName;
    NSString *_loadingPlaceholderText;
    id /* block */ _rightButtonAction;
    id /* block */ _detailButtonAction;
    UIColor *_detailColor;
    UIFont *_detailFont;
    UIImage *_specificIconImage;
    NSString *_iconImageName;
    NSString *_svgIconImageName;
    NSURL *_iconImageNameUrl;
    NSString *_iconSearchBundleName;
    long long _cellType;
    NSString *_disbleToast;
    long long _dotType;
    long long _colorStyle;
    double _cellHeight;
    NSNumber *_customTopMargin;
    NSNumber *_customBottomMargin;
    id /* block */ _cellTappedBlock;
    id /* block */ _cellConfirmBlock;
    id /* block */ _switchChangedBlock;
    id /* block */ _cellRefreshBlock;
    NSString *_rightPicName;
    id /* block */ _rightPicTappedBlock;
    id /* block */ _refreshSubtitleBlock;
    long long _uploadIndex;
    NSNumber *_rightCustomViewForceVisibility;
    NSNumber *_customRightMargin;
    id<AWEUserSettingBigFontAdapterProtocol> _fontAdapter;
    NSIndexPath *_indexPath;
    long long _subtitleLeftIndentation;
    NSString *_textFieldContent;
    NSString *_textFieldPlaceholder;
    UIImage *_textFieldRightImage;
    long long _textFieldRightViewMode;
    id /* block */ _textFieldEditingChangedBlock;
    id /* block */ _textFieldEndEditingBlock;
    id /* block */ _textFieldBeginEditingBlock;
    id /* block */ _textFieldShouldReturnBlock;
    struct CGSize { double width; double height; } _rightPicSize;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *titleHighLightedPart;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *fancySubtitle;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (retain, nonatomic) UIColor *rightButtonBgColor;
@property (retain, nonatomic) UIColor *rightButtonLineColor;
@property (retain, nonatomic) UIColor *rightButtonTextColor;
@property (nonatomic) BOOL isForbidChangeColor;
@property (nonatomic) BOOL isCellLoading;
@property (copy, nonatomic) NSString *loadingImageName;
@property (copy, nonatomic) NSString *loadingPlaceholderText;
@property (copy, nonatomic) id /* block */ rightButtonAction;
@property (copy, nonatomic) id /* block */ detailButtonAction;
@property (retain, nonatomic) UIColor *detailColor;
@property (retain, nonatomic) UIFont *detailFont;
@property (nonatomic) BOOL ignoreTitleTranslate;
@property (nonatomic) BOOL ignoreDetailTranslate;
@property (nonatomic) BOOL isFriendsGeckoImage;
@property (retain, nonatomic) UIImage *specificIconImage;
@property (copy, nonatomic) NSString *iconImageName;
@property (copy, nonatomic) NSString *svgIconImageName;
@property (retain, nonatomic) NSURL *iconImageNameUrl;
@property (retain, nonatomic) NSString *iconSearchBundleName;
@property (nonatomic) long long cellType;
@property (nonatomic) BOOL isSwitchOn;
@property (nonatomic) BOOL isEnable;
@property (nonatomic) BOOL isDisableWithTitleAndSwtich;
@property (copy, nonatomic) NSString *disbleToast;
@property (nonatomic) BOOL isDisableExceptSwitch;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL showDotView;
@property (nonatomic) long long dotType;
@property (nonatomic) long long colorStyle;
@property (nonatomic) double cellHeight;
@property (retain, nonatomic) NSNumber *customTopMargin;
@property (retain, nonatomic) NSNumber *customBottomMargin;
@property (nonatomic) BOOL highlightDetail;
@property (copy, nonatomic) id /* block */ cellTappedBlock;
@property (copy, nonatomic) id /* block */ cellConfirmBlock;
@property (copy, nonatomic) id /* block */ switchChangedBlock;
@property (copy, nonatomic) id /* block */ cellRefreshBlock;
@property (retain, nonatomic) NSString *rightPicName;
@property (nonatomic) struct CGSize { double width; double height; } rightPicSize;
@property (copy, nonatomic) id /* block */ rightPicTappedBlock;
@property (copy, nonatomic) id /* block */ refreshSubtitleBlock;
@property (nonatomic) BOOL hasLineView;
@property (nonatomic) long long uploadIndex;
@property (retain, nonatomic) NSNumber *rightCustomViewForceVisibility;
@property (retain, nonatomic) NSNumber *customRightMargin;
@property (nonatomic) BOOL rightPicColorChanged;
@property (retain, nonatomic) id<AWEUserSettingBigFontAdapterProtocol> fontAdapter;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) long long subtitleLeftIndentation;
@property (nonatomic) BOOL shouldJumpUpdateHeight;
@property (retain, nonatomic) NSString *textFieldContent;
@property (retain, nonatomic) NSString *textFieldPlaceholder;
@property (retain, nonatomic) UIImage *textFieldRightImage;
@property (nonatomic) long long textFieldRightViewMode;
@property (copy, nonatomic) id /* block */ textFieldEditingChangedBlock;
@property (copy, nonatomic) id /* block */ textFieldEndEditingBlock;
@property (copy, nonatomic) id /* block */ textFieldBeginEditingBlock;
@property (copy, nonatomic) id /* block */ textFieldShouldReturnBlock;

- (void)setIsEnable:(BOOL)arg0;
- (BOOL)isEnable;
- (id)rightButtonTitle;
- (void)setRightButtonTitle:(id)arg0;
- (id /* block */)cellTappedBlock;
- (void)setCellTappedBlock:(id /* block */)arg0;
- (long long)dotType;
- (void)setDotType:(long long)arg0;
- (id)rightButtonTextColor;
- (void)setRightButtonTextColor:(id)arg0;
- (void)setCellRefreshBlock:(id /* block */)arg0;
- (id)iconSearchBundleName;
- (id)svgIconImageName;
- (id /* block */)cellRefreshBlock;
- (void)setSvgIconImageName:(id)arg0;
- (void)setIconSearchBundleName:(id)arg0;
- (void)setIsSelect:(BOOL)arg0;
- (void)setUploadIndex:(long long)arg0;
- (void)setHasLineView:(BOOL)arg0;
- (long long)uploadIndex;
- (id)fontAdapter;
- (BOOL)isSelect;
- (id)disbleToast;
- (id /* block */)switchChangedBlock;
- (id)textFieldContent;
- (void)setIsSwitchOn:(BOOL)arg0;
- (void)setSwitchChangedBlock:(id /* block */)arg0;
- (void)setTextFieldRightImage:(id)arg0;
- (void)setTextFieldRightViewMode:(long long)arg0;
- (void)setTextFieldContent:(id)arg0;
- (void)setTextFieldBeginEditingBlock:(id /* block */)arg0;
- (void)setTextFieldEndEditingBlock:(id /* block */)arg0;
- (void)setTextFieldEditingChangedBlock:(id /* block */)arg0;
- (void)refreshCell;
- (void)setDisbleToast:(id)arg0;
- (id /* block */)textFieldBeginEditingBlock;
- (id /* block */)textFieldShouldReturnBlock;
- (void)setTextFieldShouldReturnBlock:(id /* block */)arg0;
- (id)customTopMargin;
- (id)customBottomMargin;
- (BOOL)showDotView;
- (id)fancySubtitle;
- (void)setFancySubtitle:(id)arg0;
- (void)setShowDotView:(BOOL)arg0;
- (id)titleHighLightedPart;
- (void)setTitleHighLightedPart:(id)arg0;
- (id)rightButtonBgColor;
- (void)setRightButtonBgColor:(id)arg0;
- (id)rightButtonLineColor;
- (void)setRightButtonLineColor:(id)arg0;
- (BOOL)isCellLoading;
- (void)setIsCellLoading:(BOOL)arg0;
- (id)loadingImageName;
- (void)setLoadingImageName:(id)arg0;
- (id)loadingPlaceholderText;
- (void)setLoadingPlaceholderText:(id)arg0;
- (id /* block */)rightButtonAction;
- (void)setRightButtonAction:(id /* block */)arg0;
- (id /* block */)detailButtonAction;
- (void)setDetailButtonAction:(id /* block */)arg0;
- (BOOL)ignoreTitleTranslate;
- (void)setIgnoreTitleTranslate:(BOOL)arg0;
- (BOOL)ignoreDetailTranslate;
- (void)setIgnoreDetailTranslate:(BOOL)arg0;
- (id)iconImageNameUrl;
- (void)setIconImageNameUrl:(id)arg0;
- (BOOL)isDisableExceptSwitch;
- (void)setIsDisableExceptSwitch:(BOOL)arg0;
- (void)setCustomTopMargin:(id)arg0;
- (void)setCustomBottomMargin:(id)arg0;
- (BOOL)highlightDetail;
- (void)setHighlightDetail:(BOOL)arg0;
- (id)rightPicName;
- (void)setRightPicName:(id)arg0;
- (struct CGSize { double x0; double x1; })rightPicSize;
- (void)setRightPicSize:(struct CGSize { double x0; double x1; })arg0;
- (id /* block */)rightPicTappedBlock;
- (void)setRightPicTappedBlock:(id /* block */)arg0;
- (id /* block */)refreshSubtitleBlock;
- (void)setRefreshSubtitleBlock:(id /* block */)arg0;
- (BOOL)hasLineView;
- (id)rightCustomViewForceVisibility;
- (void)setRightCustomViewForceVisibility:(id)arg0;
- (id)customRightMargin;
- (void)setCustomRightMargin:(id)arg0;
- (void)setFontAdapter:(id)arg0;
- (BOOL)isForbidChangeColor;
- (id)specificIconImage;
- (BOOL)isFriendsGeckoImage;
- (long long)subtitleLeftIndentation;
- (BOOL)rightPicColorChanged;
- (long long)textFieldRightViewMode;
- (id)textFieldRightImage;
- (BOOL)shouldJumpUpdateHeight;
- (BOOL)isDisableWithTitleAndSwtich;
- (id /* block */)textFieldEndEditingBlock;
- (id /* block */)textFieldEditingChangedBlock;
- (void)setIsDisableWithTitleAndSwtich:(BOOL)arg0;
- (id /* block */)cellConfirmBlock;
- (void)setCellConfirmBlock:(id /* block */)arg0;
- (void)setIsFriendsGeckoImage:(BOOL)arg0;
- (void)setSpecificIconImage:(id)arg0;
- (void)setSubtitleLeftIndentation:(long long)arg0;
- (void)setShouldJumpUpdateHeight:(BOOL)arg0;
- (void)setIsForbidChangeColor:(BOOL)arg0;
- (void)setRightPicColorChanged:(BOOL)arg0;
- (id)init;
- (void)setDetail:(id)arg0;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg0;
- (id)initWithIdentifier:(id)arg0;
- (void)setIndexPath:(id)arg0;
- (id)attributedTitle;
- (long long)type;
- (id)iconImageName;
- (id)titleColor;
- (void)setAttributedTitle:(id)arg0;
- (id)identifier;
- (id)indexPath;
- (BOOL)userInteractionEnabled;
- (id)title;
- (void)setType:(long long)arg0;
- (id)detail;
- (void)setCellType:(long long)arg0;
- (void)setTitleColor:(id)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (long long)cellType;
- (void)setIconImageName:(id)arg0;
- (void)setIdentifier:(id)arg0;
- (void)setTitle:(id)arg0;
- (double)cellHeight;
- (void)setCellHeight:(double)arg0;
- (void)setDetailColor:(id)arg0;
- (id)detailColor;
- (id)detailFont;
- (void)setDetailFont:(id)arg0;
- (BOOL)isSwitchOn;
- (long long)colorStyle;
- (void)setColorStyle:(long long)arg0;
- (id)textFieldPlaceholder;
- (void)setTextFieldPlaceholder:(id)arg0;

@end
