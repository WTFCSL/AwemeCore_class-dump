//
//     Generated by private class-dump
//

@class UIColor, NSString, NSURL, NSAttributedString, NSNumber;

@interface AWETeenSettingItemModel : NSObject {
    BOOL _isCellLoading;
    BOOL _ignoreTitleTranslate;
    BOOL _ignoreDetailTranslate;
    BOOL _isSwitchOn;
    BOOL _isEnable;
    BOOL _isDisableExceptSwitch;
    BOOL _isSelect;
    BOOL _showDotView;
    BOOL _highlightDetail;
    BOOL _hasLineView;
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
    double _detailWidth;
    NSString *_iconImageName;
    NSString *_svgIconImageName;
    NSString *_iconImageBundle;
    NSURL *_iconImageNameUrl;
    long long _cellType;
    long long _colorStyle;
    double _cellHeight;
    NSNumber *_customTopMargin;
    NSNumber *_customBottomMargin;
    id /* block */ _cellTappedBlock;
    id /* block */ _switchChangedBlock;
    id /* block */ _cellRefreshBlock;
    NSString *_rightPicName;
    id /* block */ _rightPicTappedBlock;
    id /* block */ _refreshSubtitleBlock;
    long long _uploadIndex;
    NSNumber *_rightCustomViewForceVisibility;
    NSNumber *_customRightMargin;
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
@property (nonatomic) BOOL isCellLoading;
@property (copy, nonatomic) NSString *loadingImageName;
@property (copy, nonatomic) NSString *loadingPlaceholderText;
@property (copy, nonatomic) id /* block */ rightButtonAction;
@property (copy, nonatomic) id /* block */ detailButtonAction;
@property (retain, nonatomic) UIColor *detailColor;
@property (nonatomic) BOOL ignoreTitleTranslate;
@property (nonatomic) BOOL ignoreDetailTranslate;
@property (nonatomic) double detailWidth;
@property (copy, nonatomic) NSString *iconImageName;
@property (copy, nonatomic) NSString *svgIconImageName;
@property (copy, nonatomic) NSString *iconImageBundle;
@property (retain, nonatomic) NSURL *iconImageNameUrl;
@property (nonatomic) long long cellType;
@property (nonatomic) BOOL isSwitchOn;
@property (nonatomic) BOOL isEnable;
@property (nonatomic) BOOL isDisableExceptSwitch;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL showDotView;
@property (nonatomic) long long colorStyle;
@property (nonatomic) double cellHeight;
@property (retain, nonatomic) NSNumber *customTopMargin;
@property (retain, nonatomic) NSNumber *customBottomMargin;
@property (nonatomic) BOOL highlightDetail;
@property (copy, nonatomic) id /* block */ cellTappedBlock;
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

- (void)setIsEnable:(BOOL)arg0;
- (BOOL)isEnable;
- (id)rightButtonTitle;
- (void)setRightButtonTitle:(id)arg0;
- (id /* block */)cellTappedBlock;
- (void)setCellTappedBlock:(id /* block */)arg0;
- (id)rightButtonTextColor;
- (void)setRightButtonTextColor:(id)arg0;
- (void)setCellRefreshBlock:(id /* block */)arg0;
- (id)svgIconImageName;
- (id /* block */)cellRefreshBlock;
- (void)setSvgIconImageName:(id)arg0;
- (void)setIsSelect:(BOOL)arg0;
- (void)setUploadIndex:(long long)arg0;
- (void)setHasLineView:(BOOL)arg0;
- (long long)uploadIndex;
- (BOOL)isSelect;
- (id /* block */)switchChangedBlock;
- (void)setIsSwitchOn:(BOOL)arg0;
- (void)setSwitchChangedBlock:(id /* block */)arg0;
- (void)refreshCell;
- (id)customTopMargin;
- (id)customBottomMargin;
- (id)iconImageBundle;
- (BOOL)showDotView;
- (id)fancySubtitle;
- (void)setFancySubtitle:(id)arg0;
- (void)setShowDotView:(BOOL)arg0;
- (void)setIconImageBundle:(id)arg0;
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
- (double)detailWidth;
- (void)setDetailWidth:(double)arg0;
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
- (id)init;
- (void)setDetail:(id)arg0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg0;
- (id)attributedTitle;
- (long long)type;
- (id)iconImageName;
- (id)titleColor;
- (void)setAttributedTitle:(id)arg0;
- (id)identifier;
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
- (BOOL)isSwitchOn;
- (long long)colorStyle;
- (void)setColorStyle:(long long)arg0;

@end
