//
//     Generated by private class-dump
//

@class AWEProfileExtensionAreaCommonParamModel, NSString, AWEMusicCardExtensionModel, UIView;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AWEMusicProfileExtensionAreaCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol> {
    BOOL _isActiveSubtitleOnce;
    BOOL _isActiveIcon;
    BOOL _isShowing;
    BOOL _isLunaIcon;
    UIView<AWEProfileExtensionAreaCardViewProtocol> *_cardView;
    AWEProfileExtensionAreaCommonParamModel *_commonParamModel;
    AWEMusicCardExtensionModel *_originalModel;
    NSString *_currentSubTitle;
    long long _currentIconShowCount;
}

@property (retain, nonatomic) UIView<AWEProfileExtensionAreaCardViewProtocol> *cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (nonatomic) BOOL isActiveSubtitleOnce;
@property (nonatomic) BOOL isActiveIcon;
@property (retain, nonatomic) AWEMusicCardExtensionModel *originalModel;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) NSString *currentSubTitle;
@property (nonatomic) BOOL isLunaIcon;
@property (nonatomic) long long currentIconShowCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)arg0;
+ (id)shared;

- (void)setIsShowing:(BOOL)arg0;
- (BOOL)shouldShowCard;
- (void)passCardView:(id)arg0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)cardWillDisappear;
- (void)cardDidDisappear;
- (void)setCommonParamModel:(id)arg0;
- (id)commonParamModel;
- (void)updateCardView;
- (id)p_trackParams;
- (id)p_userWrapperKey:(id)arg0;
- (void)setOriginalModel:(id)arg0;
- (id)originalModel;
- (void)setIsActiveSubtitleOnce:(BOOL)arg0;
- (void)p_extraSubTitleShowedCountPlus:(long long)arg0;
- (id)p_subtitleIconClickedWrapperKey:(id)arg0;
- (void)updateCustomDetailViewWithSubtitle:(id)arg0 iconURL:(id)arg1;
- (BOOL)isActiveIcon;
- (void)setIsActiveIcon:(BOOL)arg0;
- (BOOL)isActiveSubtitleOnce;
- (BOOL)p_canShowExtraSubTitle;
- (id)p_subtitleIconShowedWrapperKey:(id)arg0;
- (void)setCurrentIconShowCount:(long long)arg0;
- (BOOL)p_canShowIconAnimation;
- (void)setIsLunaIcon:(BOOL)arg0;
- (void)setCurrentSubTitle:(id)arg0;
- (long long)currentIconShowCount;
- (id)currentSubTitle;
- (BOOL)isLunaIcon;
- (void)updateSubtitle;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (BOOL)isCurrentUser;
- (id)cardView;
- (void)setCardView:(id)arg0;
- (void)updateIcon;

@end
