//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableDictionary, AWEAICreateEffectsKeyWordsView, AWEAICreateEffectsPropView, UIButton, IESEffectModel, AWEAICreateEffectsNaviView;

@interface AWEAICreateEffectsViewController : AWEHalfScreenSuperViewController {
    BOOL _forceDarkStyle;
    BOOL _completeDismiss;
    BOOL _isFirstLoad;
    NSMutableDictionary *_trackInfo;
    NSString *_selectedEffectId;
    NSArray *_selectedKeyWords;
    NSString *_selectedKeyWordsString;
    id /* block */ _finishBlock;
    AWEAICreateEffectsNaviView *_naviView;
    AWEAICreateEffectsPropView *_propView;
    AWEAICreateEffectsKeyWordsView *_keyWordsView;
    UIButton *_completeButton;
    NSArray *_aiEffectModels;
    IESEffectModel *_selectedModel;
    long long _currentSelectIndex;
}

@property (retain, nonatomic) AWEAICreateEffectsNaviView *naviView;
@property (retain, nonatomic) AWEAICreateEffectsPropView *propView;
@property (retain, nonatomic) AWEAICreateEffectsKeyWordsView *keyWordsView;
@property (retain, nonatomic) UIButton *completeButton;
@property (copy, nonatomic) NSArray *aiEffectModels;
@property (retain, nonatomic) IESEffectModel *selectedModel;
@property (nonatomic) long long currentSelectIndex;
@property (nonatomic) BOOL isFirstLoad;
@property (nonatomic) BOOL forceDarkStyle;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (copy, nonatomic) NSString *selectedEffectId;
@property (copy, nonatomic) NSArray *selectedKeyWords;
@property (copy, nonatomic) NSString *selectedKeyWordsString;
@property (nonatomic) BOOL completeDismiss;
@property (copy, nonatomic) id /* block */ finishBlock;

- (void)setIsFirstLoad:(BOOL)arg0;
- (id)accui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)accui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })accui_emptyPageEdgeInsets;
- (id)accui_emptyPageOnView;
- (id)selectedModel;
- (long long)currentSelectIndex;
- (id)naviView;
- (void)setSelectedModel:(id)arg0;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (id)completeButton;
- (void)setCompleteButton:(id)arg0;
- (void)setForceDarkStyle:(BOOL)arg0;
- (BOOL)forceDarkStyle;
- (void)setNaviView:(id)arg0;
- (void)setSelectedEffectId:(id)arg0;
- (void)setSelectedKeyWordsString:(id)arg0;
- (void)setCurrentSelectIndex:(long long)arg0;
- (void)setCompleteDismiss:(BOOL)arg0;
- (id)propView;
- (void)setPropView:(id)arg0;
- (void)fetchCreatAIData;
- (void)preLoadEffectResoure:(id)arg0;
- (BOOL)usePreloadHuafengEffects;
- (void)handleServerData:(id)arg0;
- (void)trackSelectAIStyle;
- (id)keyWordsView;
- (void)setAiEffectModels:(id)arg0;
- (id)selectedEffectId;
- (id)aiEffectModels;
- (id)selectedKeyWordsString;
- (void)setSelectedKeyWords:(id)arg0;
- (void)setUpUIView;
- (id)keywordsConvertToModels:(id)arg0;
- (id)selectedKeyWords;
- (void)trackClickKeywords:(id)arg0 isSelected:(BOOL)arg1 isCustomKey:(BOOL)arg2;
- (void)trackClickAddKeywords;
- (void)completeButtonAction:(id)arg0;
- (void)trackClickCompletionButton:(id)arg0;
- (BOOL)completeDismiss;
- (id)trackClickCommonTrackInfo;
- (void)setKeyWordsView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (double)cornerRadius;
- (unsigned long long)viewStyle;
- (void)viewDidLoad;
- (unsigned long long)animationStyle;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (BOOL)isFirstLoad;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg0;
- (double)containerHeight;
- (double)containerWidth;

@end