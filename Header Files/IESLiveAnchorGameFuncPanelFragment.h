//
//     Generated by private class-dump
//

@class UIView, NSString, IESLivePopupItem, IESLiveFunctionSquareViewController, NSArray, IESLiveAnchorGameFuncPanelStore, HTSLiveExpandToolbarItem, IESLiveAnchorFunctionRegistry;
@protocol IESLiveBubbleGuide;

@interface IESLiveAnchorGameFuncPanelFragment : IESLiveRoomComponent <IESLiveAnchorGameFuncPanelReaction, IESLiveAnchorInteractiveGameRouter> {
    BOOL _isGuideProcess;
    NSArray *anchorInteractiveGameModels;
    IESLiveAnchorGameFuncPanelStore *_anchorInteractiveGameStore;
    HTSLiveExpandToolbarItem *_gameCenterItem;
    IESLiveFunctionSquareViewController *_gameEntranceViewController;
    UIView<IESLiveBubbleGuide> *_tip;
    IESLivePopupItem *_popupItem;
    IESLiveAnchorFunctionRegistry *_functionRegistry;
}

@property (retain, nonatomic) IESLiveAnchorGameFuncPanelStore *anchorInteractiveGameStore;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *gameCenterItem;
@property (retain, nonatomic) IESLiveFunctionSquareViewController *gameEntranceViewController;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tip;
@property (nonatomic) BOOL isGuideProcess;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) IESLiveAnchorFunctionRegistry *functionRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *anchorInteractiveGameModels;

- (void)hidePanel;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)mountDidFinishForLevel:(long long)arg0;
- (void)showGameCenterItem:(BOOL)arg0;
- (void)reloadInteractiveList;
- (void)refetchInteractiveList;
- (id)interactiveGameItemFromGameId:(long long)arg0;
- (id)interactiveGameItemFromAppId:(id)arg0;
- (id)interactiveGameItemFromInteractID:(unsigned long long)arg0;
- (void)hideAnchorInteractiveGameView;
- (void)hideAnchorInteractiveGameViewWithCompletion:(id /* block */)arg0;
- (void)showAnchorInteractiveGameView;
- (void)showAnchorInteractiveEntrance;
- (void)hideAnchorInteractiveEntrance;
- (void)startGameWithAnchorInteractiveGameItem:(id)arg0 source:(id)arg1;
- (void)startGameWithAnchorInteractiveGameItem:(id)arg0 source:(id)arg1 activityName:(id)arg2;
- (void)startGameWithAnchorInteractiveGameItem:(id)arg0 source:(id)arg1 activityName:(id)arg2 sourceFrom:(id)arg3;
- (void)updateReddotCount:(long long)arg0 forGameItem:(long long)arg1;
- (void)showBubbleTips:(id)arg0;
- (void)updateGameEntranceItemAlpha:(double)arg0;
- (id)anchorInteractiveGameModels;
- (void)setAnchorInteractiveGameModels:(id)arg0;
- (void)updateNeedShowInteractiveGameView:(BOOL)arg0;
- (void)setPopupItem:(id)arg0;
- (id)popupItem;
- (void)removeTipView;
- (void)setAnchorInteractiveGameStore:(id)arg0;
- (void)pr_setupObserver;
- (void)setFunctionRegistry:(id)arg0;
- (id)functionRegistry;
- (id)gameCenterItem;
- (void)pr_removeTipView;
- (id)anchorInteractiveGameStore;
- (void)pr_showTipOnInteractiveItem:(id)arg0 withDuration:(double)arg1 withGameItem:(id)arg2;
- (void)pr_traceGamePopShow:(id)arg0 gameItem:(id)arg1;
- (BOOL)pr_isSupprotCurrentInteractiveEntrance:(id)arg0;
- (id)gameEntranceViewController;
- (void)setGameEntranceViewController:(id)arg0;
- (void)setupPopup;
- (void)showAnchorInteractiveGameEntranceWithItem:(id)arg0;
- (BOOL)isGuideProcess;
- (void)setIsGuideProcess:(BOOL)arg0;
- (void)pr_processGuideParamfromComponentContext;
- (BOOL)p_checkEnableShowGameCenter;
- (void)didGameModelsUpdated:(BOOL)arg0;
- (void)setGameCenterItem:(id)arg0;
- (void).cxx_destruct;
- (void)setTip:(id)arg0;
- (id)tip;

@end
