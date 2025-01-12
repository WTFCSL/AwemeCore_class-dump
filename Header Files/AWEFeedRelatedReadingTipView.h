//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, UITapGestureRecognizer, AWEPlayInteractionContext, UIImageView, NSDictionary, YYLabel, UILabel, AWEHotSpotListModel;

@interface AWEFeedRelatedReadingTipView : UIView <DUXSheetDelegate, AWERelatedReadingBottomBarViewProtocol> {
    BOOL _mpShowFirst;
    NSString *_referString;
    YYLabel *_hotSearchTipLabel;
    UILabel *_jumpTipLabel;
    UIImageView *_hotIconImageView;
    UIImageView *_arrowImageView;
    UILabel *_tagLabel;
    UITapGestureRecognizer *_recognizer;
    AWEAwemeModel *_awemeModel;
    AWEHotSpotListModel *_hotSpotListModel;
    NSDictionary *_textAttributes;
    long long _type;
    long long _currentScene;
    NSString *_realDiversionType;
    AWEPlayInteractionContext *_context;
}

@property (retain, nonatomic) YYLabel *hotSearchTipLabel;
@property (retain, nonatomic) UILabel *jumpTipLabel;
@property (retain, nonatomic) UIImageView *hotIconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEHotSpotListModel *hotSpotListModel;
@property (retain, nonatomic) NSDictionary *textAttributes;
@property (nonatomic) long long type;
@property (nonatomic) long long currentScene;
@property (copy, nonatomic) NSString *realDiversionType;
@property (nonatomic) BOOL mpShowFirst;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showFeedBottomArticleBarSuperiorToHotSearch:(id)arg0 otherParams:(id)arg1;
+ (BOOL)showFeedBottomArticleBarInferiorToHotSearch:(id)arg0 otherParams:(id)arg1;
+ (void)trackReadingBarShowEvent:(id)arg0 otherParams:(id)arg1;
+ (id)separateGroupIDFromSchema:(id)arg0;
+ (id)addParams:(id)arg0 toString:(id)arg1;
+ (id)relatedArticleParamsWithModel:(id)arg0 enterFrom:(id)arg1;
+ (void)setCheckBoxStatus:(BOOL)arg0 forAction:(id)arg1;
+ (id)separateParamFromBdpLog:(id)arg0 param:(id)arg1;
+ (id)mpGuideSwitchWithModel:(id)arg0;

- (id)awemeModel;
- (id)referString;
- (void)sheetDidClickCloseButton:(id)arg0;
- (void)sheetDidClickMaskArea:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)handleViewDidAppear;
- (id)hotSpotListModel;
- (void)configureWithModel:(id)arg0 referString:(id)arg1;
- (void)jumpAction;
- (void)configureWithModel:(id)arg0 type:(long long)arg1;
- (void)trackRelatedReadingShowIfNeeded;
- (void)setHotSpotListModel:(id)arg0;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)configureUI;
- (void)tryOpenMpWithScheme:(id)arg0;
- (void)clearOpenAppDialogAction:(id)arg0;
- (id)hotIconImageView;
- (id)hotSearchTipLabel;
- (BOOL)showFeedBottomArticleBarSuperiorToHotSearch;
- (BOOL)showFeedBottomArticleBarInferiorToHotSearch;
- (id)relatedReadingContent;
- (void)setCurrentScene:(long long)arg0;
- (long long)viewTypeForString:(id)arg0 model:(id)arg1;
- (long long)sceneForType:(long long)arg0;
- (void)jumpUsingSchema;
- (BOOL)canOpenApp;
- (unsigned long long)openAppType;
- (BOOL)isRelatedArticle;
- (id)jumpTipLabel;
- (void)handleRelatedReadingTarget;
- (id)relatedArticleAppendParamDict;
- (void)tryOpenAppWithURL:(id)arg0 mpSchema:(id)arg1;
- (void)setRealDiversionType:(id)arg0;
- (id)realDiversionType;
- (id)mpTrackerDict;
- (void)showOpenAppNewDialog:(id)arg0 mpSchema:(id)arg1;
- (void)openApp;
- (void)showOpenAppOldDialog:(id)arg0 mpSchema:(id)arg1;
- (void)trackOpenAppDialogShow;
- (id)openAppDialogTitle;
- (void)trackOpenAppDialogClick:(id)arg0 checked:(BOOL)arg1;
- (id)commonTrackParams;
- (id)openAppConfig;
- (void)trackIronManIfNeededWithAppear:(BOOL)arg0;
- (BOOL)mpShowFirst;
- (void)setMpShowFirst:(BOOL)arg0;
- (id)setupArrowImageView;
- (id)jumpTipString;
- (void)setJumpTipLabel:(id)arg0;
- (void)setHotIconImageView:(id)arg0;
- (void)setHotSearchTipLabel:(id)arg0;
- (void)showSheetWithViewController:(id)arg0 sheetHeight:(double)arg1 openAppURL:(id)arg2 mpSchema:(id)arg3;
- (void)setupVideoContextForPanel;
- (void)handleJumpTipLabelAndHotIconImageView:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)setContext:(id)arg0;
- (long long)type;
- (long long)currentScene;
- (id)textAttributes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setType:(long long)arg0;
- (id)context;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setTextAttributes:(id)arg0;
- (BOOL)isAccessibilityElement;
- (void)configureWithModel:(id)arg0;
- (void)configureWithContext:(id)arg0;
- (id)bgColor;
- (id)recognizer;
- (void)setRecognizer:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
