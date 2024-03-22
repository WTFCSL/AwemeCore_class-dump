//
//     Generated by private class-dump
//

@class NSString, UILabel, AWEUGPendantModel, UIView;
@protocol AWEUGPendantProgressProtocol, AWEUGPendantContentProtocol;

@interface AWEUGSidebarPendantView : UIView <AWEUGPendantUIProtocol, AWEUGFCoinUIProtocol> {
    BOOL isMovingPendant;
    id /* block */ closeTapHandler;
    id /* block */ contentTapHandler;
    id /* block */ bubbleTapHandler;
    id /* block */ edgedBubbleTapHandler;
    id /* block */ animationFrameHandler;
    id /* block */ stayPopupTriggerHandler;
    UIView<AWEUGPendantContentProtocol> *_contentView;
    UIView<AWEUGPendantProgressProtocol> *_progressView;
    UILabel *_coinLabel;
    AWEUGPendantModel *_pendantModel;
    long long _themeType;
}

@property (retain, nonatomic) UIView<AWEUGPendantContentProtocol> *contentView;
@property (retain, nonatomic) UIView<AWEUGPendantProgressProtocol> *progressView;
@property (retain, nonatomic) UILabel *coinLabel;
@property (retain, nonatomic) AWEUGPendantModel *pendantModel;
@property (nonatomic) long long themeType;
@property (copy, nonatomic) id /* block */ contentTapHandler;
@property (copy, nonatomic) id /* block */ closeTapHandler;
@property (copy, nonatomic) id /* block */ bubbleTapHandler;
@property (copy, nonatomic) id /* block */ edgedBubbleTapHandler;
@property (copy, nonatomic) id /* block */ animationFrameHandler;
@property (nonatomic) BOOL isMovingPendant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ stayPopupTriggerHandler;

- (void)setupUIWithModel:(id)arg0;
- (void)updateUIWithModel:(id)arg0;
- (void)trackLogWithKey:(id)arg0 message:(id)arg1;
- (id /* block */)contentTapHandler;
- (void)playAnimationFromFrame:(id)arg0 toFrame:(id)arg1 loop:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)setContentTapHandler:(id /* block */)arg0;
- (BOOL)checkDataIfReadyUIWithModel:(id)arg0;
- (void)setPendantModel:(id)arg0;
- (void)setupContentViewWithModel:(id)arg0;
- (id /* block */)animationFrameHandler;
- (void)setAnimationFrameHandler:(id /* block */)arg0;
- (id)pendantModel;
- (void)setIsMovingPendant:(BOOL)arg0;
- (BOOL)isRightSide;
- (void)setPendantStructureState:(unsigned long long)arg0 animation:(BOOL)arg1 complete:(id /* block */)arg2;
- (id /* block */)closeTapHandler;
- (void)playLoopAniamtion;
- (unsigned long long)pendantStructureState;
- (id /* block */)bubbleTapHandler;
- (unsigned long long)pendantShowState;
- (void)updateUIWithUIInfo:(id)arg0 complete:(id /* block */)arg1;
- (void)updateUIWithKey:(id)arg0 value:(id)arg1 complete:(id /* block */)arg2;
- (void)updateUIWithKey:(id)arg0 model:(id)arg1 complete:(id /* block */)arg2;
- (void)setCloseTapHandler:(id /* block */)arg0;
- (BOOL)isMovingPendant;
- (id /* block */)edgedBubbleTapHandler;
- (void)setEdgedBubbleTapHandler:(id /* block */)arg0;
- (void)setBubbleTapHandler:(id /* block */)arg0;
- (void)applyThemeType:(long long)arg0;
- (void)updateCoinLabelText:(id)arg0;
- (void)showCoinLabelAnimationWithComplete:(id /* block */)arg0;
- (void)hideCoinLabelAnimationWithComplete:(id /* block */)arg0;
- (void)setStayPopupTriggerHandler:(id /* block */)arg0;
- (void)setupProgressViewWithModel:(id)arg0;
- (id /* block */)stayPopupTriggerHandler;
- (void)p_updateProgressWithValue:(id)arg0 complete:(id /* block */)arg1;
- (id)coinLabel;
- (void)setCoinLabel:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void).cxx_destruct;
- (void)pauseAnimation;
- (void)show;
- (id)contentView;
- (long long)themeType;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)hide;
- (void)setContentView:(id)arg0;
- (void)setThemeType:(long long)arg0;

@end