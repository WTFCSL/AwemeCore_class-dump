//
//     Generated by private class-dump
//

@class UIFont, NSString, AWEConcernCardModel, AWEMarkViewUIConfigModel;

@interface AWEFeedVideoSingleCardLayoutAdjuster : NSObject <AWEFeedVideoSingleCardLayoutAdjusterProtocol> {
    BOOL _feedbackAlignName;
    BOOL _hashTagNoBold;
    BOOL _bottomBarAddBlurView;
    BOOL _timeLabelCloseToPlayButton;
    BOOL _isNeedAdjustLayout;
    UIFont *_authorNameFont;
    double _authorNameFontSize;
    UIFont *_publishTimeFont;
    double _publishTimeFontSize;
    UIFont *_descFont;
    double _descFontSize;
    double _contentLineHeight;
    double _contentBottomMargin;
    double _videoCornerRadius;
    double _bottomBarHeight;
    UIFont *_bottomBarTextFont;
    double _bottomBarLeftMargin;
    double _bottomBarRightMargin;
    double _bottomBarImageTextMagin;
    double _bottomBarTextArrowMagin;
    UIFont *_timeLblFont;
    double _playButtonRightBottomMargin;
    AWEMarkViewUIConfigModel *_anchorUIConfigModel;
    double _actionPanelLeadingTrailingMargin;
    double _actionPanelHeight;
    UIFont *_actionPanelButtonTextFont;
    AWEConcernCardModel *_cardModel;
    long long _adjustType;
    struct CGSize { double width; double height; } _avatarSize;
    struct CGSize { double width; double height; } _bottomBarIconSize;
    struct CGSize { double width; double height; } _playButtonIconSize;
    struct CGSize { double width; double height; } _actionPanelButtonIconSize;
}

@property (nonatomic) long long adjustType;
@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (retain, nonatomic) UIFont *authorNameFont;
@property (nonatomic) double authorNameFontSize;
@property (retain, nonatomic) UIFont *publishTimeFont;
@property (nonatomic) double publishTimeFontSize;
@property (nonatomic) BOOL feedbackAlignName;
@property (retain, nonatomic) UIFont *descFont;
@property (nonatomic) double descFontSize;
@property (nonatomic) double contentLineHeight;
@property (nonatomic) double contentBottomMargin;
@property (nonatomic) BOOL hashTagNoBold;
@property (nonatomic) double videoCornerRadius;
@property (nonatomic) double bottomBarHeight;
@property (nonatomic) struct CGSize { double width; double height; } bottomBarIconSize;
@property (retain, nonatomic) UIFont *bottomBarTextFont;
@property (nonatomic) double bottomBarLeftMargin;
@property (nonatomic) double bottomBarRightMargin;
@property (nonatomic) double bottomBarImageTextMagin;
@property (nonatomic) double bottomBarTextArrowMagin;
@property (nonatomic) BOOL bottomBarAddBlurView;
@property (retain, nonatomic) UIFont *timeLblFont;
@property (nonatomic) struct CGSize { double width; double height; } playButtonIconSize;
@property (nonatomic) double playButtonRightBottomMargin;
@property (nonatomic) BOOL timeLabelCloseToPlayButton;
@property (retain, nonatomic) AWEMarkViewUIConfigModel *anchorUIConfigModel;
@property (nonatomic) double actionPanelLeadingTrailingMargin;
@property (nonatomic) double actionPanelHeight;
@property (nonatomic) struct CGSize { double width; double height; } actionPanelButtonIconSize;
@property (retain, nonatomic) UIFont *actionPanelButtonTextFont;
@property (nonatomic) BOOL isNeedAdjustLayout;
@property (retain, nonatomic) AWEConcernCardModel *cardModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)layoutAdjustType;

- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (id)initWithCardModel:(id)arg0;
- (void)setAdjustType:(long long)arg0;
- (long long)adjustType;
- (id)descFont;
- (void)setDescFont:(id)arg0;
- (double)actionPanelHeight;
- (struct CGSize { double x0; double x1; })bottomBarIconSize;
- (id)bottomBarTextFont;
- (void)configDefaultData:(id)arg0;
- (struct CGSize { double x0; double x1; })videoAreaCutWithContainerWidth:(double)arg0 videoRawSize:(struct CGSize { double x0; double x1; })arg1;
- (id)authorNameFont;
- (void)setAuthorNameFont:(id)arg0;
- (double)authorNameFontSize;
- (void)setAuthorNameFontSize:(double)arg0;
- (id)publishTimeFont;
- (void)setPublishTimeFont:(id)arg0;
- (double)publishTimeFontSize;
- (void)setPublishTimeFontSize:(double)arg0;
- (BOOL)feedbackAlignName;
- (void)setFeedbackAlignName:(BOOL)arg0;
- (double)descFontSize;
- (void)setDescFontSize:(double)arg0;
- (double)contentLineHeight;
- (void)setContentLineHeight:(double)arg0;
- (BOOL)hashTagNoBold;
- (void)setHashTagNoBold:(BOOL)arg0;
- (double)videoCornerRadius;
- (void)setVideoCornerRadius:(double)arg0;
- (void)setBottomBarIconSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setBottomBarTextFont:(id)arg0;
- (double)bottomBarLeftMargin;
- (void)setBottomBarLeftMargin:(double)arg0;
- (double)bottomBarRightMargin;
- (void)setBottomBarRightMargin:(double)arg0;
- (double)bottomBarImageTextMagin;
- (void)setBottomBarImageTextMagin:(double)arg0;
- (double)bottomBarTextArrowMagin;
- (void)setBottomBarTextArrowMagin:(double)arg0;
- (BOOL)bottomBarAddBlurView;
- (void)setBottomBarAddBlurView:(BOOL)arg0;
- (id)timeLblFont;
- (void)setTimeLblFont:(id)arg0;
- (struct CGSize { double x0; double x1; })playButtonIconSize;
- (void)setPlayButtonIconSize:(struct CGSize { double x0; double x1; })arg0;
- (double)playButtonRightBottomMargin;
- (void)setPlayButtonRightBottomMargin:(double)arg0;
- (BOOL)timeLabelCloseToPlayButton;
- (void)setTimeLabelCloseToPlayButton:(BOOL)arg0;
- (id)anchorUIConfigModel;
- (void)setAnchorUIConfigModel:(id)arg0;
- (double)actionPanelLeadingTrailingMargin;
- (void)setActionPanelLeadingTrailingMargin:(double)arg0;
- (void)setActionPanelHeight:(double)arg0;
- (struct CGSize { double x0; double x1; })actionPanelButtonIconSize;
- (void)setActionPanelButtonIconSize:(struct CGSize { double x0; double x1; })arg0;
- (id)actionPanelButtonTextFont;
- (void)setActionPanelButtonTextFont:(id)arg0;
- (BOOL)isNeedAdjustLayout;
- (void)setIsNeedAdjustLayout:(BOOL)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })avatarSize;
- (void)setAvatarSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setBottomBarHeight:(double)arg0;
- (double)bottomBarHeight;
- (double)contentBottomMargin;
- (void)setContentBottomMargin:(double)arg0;

@end