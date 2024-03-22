//
//     Generated by private class-dump
//

@class AWEPlayInteractionViewController, NSString, AWEPlayInteractionContext, DUXContentSheet, AWEPlayAiToTextMutliTabViewController, AWEAwemeModel, NSDictionary;
@protocol AWEPlayAiToTextPanelDelegate;

@interface AWEPlayAiToTextPanelManager : NSObject <DUXSheetDelegate, AWEPlayAiToTextPanelViewControllerDelegate, DUXBasicSheetDelegate> {
    BOOL _isAITextPanelShowing;
    BOOL _shouldDisableFullScreenPop;
    id<AWEPlayAiToTextPanelDelegate> _delegete;
    AWEPlayInteractionContext *_context;
    AWEPlayInteractionViewController *_container;
    NSString *_referString;
    NSString *_enterMethod;
    NSDictionary *_extraDict;
    AWEAwemeModel *_currentModel;
    DUXContentSheet *_sheet;
    AWEPlayAiToTextMutliTabViewController *_aiToTextViewController;
    long long _closeType;
}

@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (weak, nonatomic) AWEPlayAiToTextMutliTabViewController *aiToTextViewController;
@property (nonatomic) BOOL isAITextPanelShowing;
@property (nonatomic) long long closeType;
@property (nonatomic) BOOL shouldDisableFullScreenPop;
@property (weak, nonatomic) id<AWEPlayAiToTextPanelDelegate> delegete;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (weak, nonatomic) AWEPlayInteractionViewController *container;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setEnterMethod:(id)arg0;
- (void)sheetDidClickCloseButton:(id)arg0;
- (void)sheetDidClickMaskArea:(id)arg0;
- (void)sheetWillDismiss:(id)arg0;
- (void)sheetDidDismiss:(id)arg0;
- (void)sheet:(id)arg0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 withUserInteraction:(BOOL)arg2;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (BOOL)isAITextPanelShowing;
- (void)setExtraDict:(id)arg0;
- (id)extraDict;
- (long long)closeType;
- (void)setCloseType:(long long)arg0;
- (void)setIsAITextPanelShowing:(BOOL)arg0;
- (void)onDislikeClicked:(id)arg0;
- (void)setAiToTextViewController:(id)arg0;
- (void)setShouldDisableFullScreenPop:(BOOL)arg0;
- (id)aiToTextViewController;
- (void)AiToTextPanelExitTrack;
- (BOOL)shouldDisableFullScreenPop;
- (void)aiToTextPanelViewControllerWillShowMenu:(id)arg0;
- (void)aiToTextPanelViewControllerDismissMenu:(id)arg0;
- (void)showAiToTextPanelWithModel:(id)arg0 targetHeight:(double)arg1 completion:(id /* block */)arg2;
- (id)container;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)context;
- (void)dealloc;
- (void)addObserver;
- (void)dismissWithAnimation:(BOOL)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;
- (id)delegete;
- (void)setDelegete:(id)arg0;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end