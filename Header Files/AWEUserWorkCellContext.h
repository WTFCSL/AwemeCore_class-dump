//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, UIImage, AWEUserWorkCellComponentConfig, AWEProfileEventCenter, AWEBinding, AWEProfileServiceCenter, NSNumber;

@interface AWEUserWorkCellContext : AWEPageContext {
    BOOL _usingDynamicCover;
    BOOL _needShowWaterfallVideoTagView;
    BOOL _needShowLBStarAtlasTagLabel;
    BOOL _needShowFlameInComeLabel;
    BOOL _forceShowUnreadLabel;
    BOOL _forceHiddenCountLableText;
    BOOL _forceHideRightTopCornerContainer;
    BOOL _forceHideRightBottomCornerContainer;
    AWEUserWorkCellComponentConfig *_componentConfig;
    AWEProfileServiceCenter *_cellServiceCenter;
    AWEProfileEventCenter *_cellEventCenter;
    id /* block */ _onDiggedBlock;
    NSString *_tagLabelString;
    NSString *_accessibilityLabel;
    NSString *_firstAccessibilityLabel;
    NSString *_afterAccessibilityLabel;
    long long _showDouGuideTagStauts;
    id /* block */ _blIconBlock;
    NSString *_blProhibitedText;
    NSString *_blCountLableText;
    UIImage *_privacyIconImage;
    NSString *_bCountLableText;
    id /* block */ _chooseButtonClickCallback;
    NSNumber *_chooseNumber;
    AWEAwemeModel *_data;
    NSString *_imageName;
    AWEBinding *_diggCountBinding;
    AWEBinding *_playCountBinding;
    AWEBinding *_descriptionStringBinding;
    struct CGSize { double width; double height; } _cellSize;
}

@property (weak, nonatomic) AWEAwemeModel *data;
@property (copy, nonatomic) NSString *imageName;
@property (weak, nonatomic) AWEUserWorkCellComponentConfig *componentConfig;
@property (retain, nonatomic) AWEProfileServiceCenter *cellServiceCenter;
@property (retain, nonatomic) AWEProfileEventCenter *cellEventCenter;
@property (copy, nonatomic) id /* block */ blIconBlock;
@property (copy, nonatomic) NSString *blProhibitedText;
@property (copy, nonatomic) NSString *blCountLableText;
@property (nonatomic) BOOL needShowLBStarAtlasTagLabel;
@property (nonatomic) BOOL needShowFlameInComeLabel;
@property (copy, nonatomic) NSString *bCountLableText;
@property (retain, nonatomic) AWEBinding *diggCountBinding;
@property (retain, nonatomic) AWEBinding *playCountBinding;
@property (retain, nonatomic) AWEBinding *descriptionStringBinding;
@property (nonatomic) BOOL forceHideRightTopCornerContainer;
@property (nonatomic) BOOL forceHideRightBottomCornerContainer;
@property (readonly, nonatomic) double padding;
@property (readonly, nonatomic) double iconViewWidth;
@property (readonly, nonatomic) double countLabelHeight;
@property (readonly, nonatomic) double unreadLabelWitdh;
@property (copy, nonatomic) id /* block */ onDiggedBlock;
@property (nonatomic) BOOL usingDynamicCover;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (copy, nonatomic) NSString *tagLabelString;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *firstAccessibilityLabel;
@property (copy, nonatomic) NSString *afterAccessibilityLabel;
@property (nonatomic) long long showDouGuideTagStauts;
@property (nonatomic) BOOL needShowWaterfallVideoTagView;
@property (retain, nonatomic) UIImage *privacyIconImage;
@property (nonatomic) BOOL forceShowUnreadLabel;
@property (nonatomic) BOOL forceHiddenCountLableText;
@property (copy, nonatomic) id /* block */ chooseButtonClickCallback;
@property (retain, nonatomic) NSNumber *chooseNumber;

+ (Class)aAWEUserProfileModuleServiceDOUYINHTSAdaperClass;

- (id)componentConfig;
- (void)setComponentConfig:(id)arg0;
- (void)setUsingDynamicCover:(BOOL)arg0;
- (BOOL)shouldShowStoryTag;
- (BOOL)usingDynamicCover;
- (void)setChooseButtonClickCallback:(id /* block */)arg0;
- (BOOL)shouldShowLongVideoTag;
- (void)setChooseNumber:(id)arg0;
- (void)partOfVisibleStatusChangedWith:(id)arg0;
- (void)setOnDiggedBlock:(id /* block */)arg0;
- (void)setForceShowUnreadLabel:(BOOL)arg0;
- (id)aAWEUserProfileModuleServiceDOUYINHTSAdaper;
- (id)cellServiceCenter;
- (BOOL)shouldShowSharePostTag;
- (id /* block */)chooseButtonClickCallback;
- (id)chooseNumber;
- (id)blProhibitedText;
- (void)setForceHideRightTopCornerContainer:(BOOL)arg0;
- (void)setForceHideRightBottomCornerContainer:(BOOL)arg0;
- (id)privacyIconImage;
- (BOOL)needShowFlameInComeLabel;
- (void)setPrivacyIconImage:(id)arg0;
- (BOOL)__shouldShowPrivacyIconInMyHomepageWithData:(id)arg0;
- (id)diggCountBinding;
- (void)setDiggCountBinding:(id)arg0;
- (void)__updateAccessibilityLabelAndLeftBottomContent:(id)arg0;
- (id)playCountBinding;
- (void)setPlayCountBinding:(id)arg0;
- (id)descriptionStringBinding;
- (void)setDescriptionStringBinding:(id)arg0;
- (BOOL)__douGuideTagOnItem:(id)arg0;
- (void)setShowDouGuideTagStauts:(long long)arg0;
- (void)setNeedShowFlameInComeLabel:(BOOL)arg0;
- (void)updateFourCornersHiddenState;
- (id)__getProhibitedText:(id)arg0;
- (BOOL)__shouldShowMuteTips:(id)arg0;
- (void)setBlIconBlock:(id /* block */)arg0;
- (void)setBlProhibitedText:(id)arg0;
- (void)__updateAccessibilityLabelWithData:(id)arg0 title:(id)arg1 prohibitedText:(id)arg2;
- (void)setBlCountLableText:(id)arg0;
- (void)setNeedShowLBStarAtlasTagLabel:(BOOL)arg0;
- (void)setBCountLableText:(id)arg0;
- (double)iconViewWidth;
- (double)countLabelHeight;
- (double)unreadLabelWitdh;
- (void)updateContentWith:(id)arg0;
- (void)setCellServiceCenter:(id)arg0;
- (id)cellEventCenter;
- (void)setCellEventCenter:(id)arg0;
- (id /* block */)onDiggedBlock;
- (id)tagLabelString;
- (void)setTagLabelString:(id)arg0;
- (id)firstAccessibilityLabel;
- (void)setFirstAccessibilityLabel:(id)arg0;
- (id)afterAccessibilityLabel;
- (void)setAfterAccessibilityLabel:(id)arg0;
- (long long)showDouGuideTagStauts;
- (BOOL)needShowWaterfallVideoTagView;
- (void)setNeedShowWaterfallVideoTagView:(BOOL)arg0;
- (id /* block */)blIconBlock;
- (id)blCountLableText;
- (BOOL)needShowLBStarAtlasTagLabel;
- (BOOL)forceShowUnreadLabel;
- (id)bCountLableText;
- (BOOL)forceHiddenCountLableText;
- (void)setForceHiddenCountLableText:(BOOL)arg0;
- (BOOL)forceHideRightTopCornerContainer;
- (BOOL)forceHideRightBottomCornerContainer;
- (id)accessibilityLabel;
- (id)data;
- (void)setAccessibilityLabel:(id)arg0;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (void)setData:(id)arg0;
- (double)padding;
- (id)initWith:(id)arg0;
- (struct CGSize { double x0; double x1; })cellSize;
- (BOOL)isCurrentUser;
- (void)setCellSize:(struct CGSize { double x0; double x1; })arg0;

@end
