//
//     Generated by private class-dump
//

@class UIColor, NSString, UIImageView, NSArray, UILabel, UIView, AWETagLabelModel;

@interface AWEAdMoreLinkView : UIView <AWEAdMoreLinkView> {
    BOOL _adaptLightTheme;
    BOOL _labelOnly;
    BOOL _isHollow;
    BOOL _withPanelGuide;
    BOOL _isShowSearchDouPlusIcon;
    UILabel *_label;
    UIView *_containerView;
    NSString *_content;
    double _tagAlpha;
    UIColor *_tagColor;
    UIImageView *_tagImageView;
    UIImageView *_searchDouPlusIconView;
    NSString *_tagImageName;
    NSArray *_linkIcons;
    long long _decPaddingX;
    UIImageView *_rightIconImageView;
    AWETagLabelModel *_tagModel;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) double tagAlpha;
@property (nonatomic) BOOL isHollow;
@property (retain, nonatomic) UIColor *tagColor;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UIImageView *searchDouPlusIconView;
@property (copy, nonatomic) NSString *tagImageName;
@property (copy, nonatomic) NSArray *linkIcons;
@property (nonatomic) long long decPaddingX;
@property (retain, nonatomic) UIImageView *rightIconImageView;
@property (retain, nonatomic) AWETagLabelModel *tagModel;
@property (nonatomic) BOOL withPanelGuide;
@property (nonatomic) BOOL isShowSearchDouPlusIcon;
@property (nonatomic) BOOL labelOnly;
@property (nonatomic) BOOL adaptLightTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTagLabel:(id)arg0 padding:(long long)arg1 adaptLightTheme:(BOOL)arg2;
- (id)initWithContent:(id)arg0 alpha:(double)arg1 tagImageName:(id)arg2 serverImages:(id)arg3 height:(double)arg4;
- (void)setTagImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTagTextFont:(id)arg0;
- (void)setIsHollow:(BOOL)arg0;
- (void)setTagBackgroundColor:(id)arg0;
- (BOOL)labelOnly;
- (void)setLabelOnly:(BOOL)arg0;
- (BOOL)adaptLightTheme;
- (void)setAdaptLightTheme:(BOOL)arg0;
- (id)initWithContent:(id)arg0 height:(double)arg1;
- (id)initWithContent:(id)arg0 alpha:(double)arg1;
- (id)initWithContent:(id)arg0 alpha:(double)arg1 tagImageName:(id)arg2;
- (id)initWithContent:(id)arg0 alpha:(double)arg1 tagImageName:(id)arg2 height:(double)arg3;
- (id)initWithTagLabel:(id)arg0;
- (id)initWithTagLabel:(id)arg0 padding:(long long)arg1;
- (void)configWithLabelModel:(id)arg0;
- (void)updateAdMoreLinkViewUIWithSearchDouPlus:(id)arg0;
- (void)setUIWithPanelGuide;
- (void)setLabelTextFont:(id)arg0;
- (void)setLabelLeft:(double)arg0;
- (void)setLabelShadow:(double)arg0 shadowOffsetOfX:(double)arg1 shadowOffsetOfY:(double)arg2 shadowOpacity:(double)arg3 shadowRadius:(double)arg4;
- (double)tagAlpha;
- (void)setTagImageView:(id)arg0;
- (id)tagImageView;
- (BOOL)isHollow;
- (long long)decPaddingX;
- (void)setTagAlpha:(double)arg0;
- (id)tagImageName;
- (void)setTagImageName:(id)arg0;
- (void)setDecPaddingX:(long long)arg0;
- (id)rightIconImageView;
- (void)setRightIconImageView:(id)arg0;
- (id)linkIcons;
- (void)setTagModel:(id)arg0;
- (void)setIsShowSearchDouPlusIcon:(BOOL)arg0;
- (id)searchDouPlusIconView;
- (id)tagModel;
- (void)setWithPanelGuide:(BOOL)arg0;
- (BOOL)withPanelGuide;
- (BOOL)isShowSearchDouPlusIcon;
- (void)setSearchDouPlusIconView:(id)arg0;
- (void)setLinkIcons:(id)arg0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setLabel:(id)arg0;
- (id)content;
- (void)setContainerView:(id)arg0;
- (void)setContent:(id)arg0;
- (id)containerView;
- (id)snapshot;
- (id)label;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg0;
- (id)initWithContent:(id)arg0;
- (id)defaultText;
- (void)setupUI;
- (void)setLabelTextColor:(id)arg0;
- (id)tagColor;
- (void)setTagColor:(id)arg0;
- (void)layoutUI;

@end