//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveVSSendGiftCommandQueue, UIView, HTSLiveArtTextLabel, NSString, SpeedyGiftPopupInfo, IESLiveBottomShortcutButton, IESLiveSpeedGiftResourceSet, IESLiveCountTimer, IESLiveGiveGiftTransaction, UILabel, IESLiveSpeedSlotTranslationTask;
@protocol IESLiveURLSchemaHandlerAdapter, HTSLiveSpeedGiftActions, HTSLiveAutoHideAction, IESLiveRoomServiceAdapter, IESLiveMotionGuideCoordinator, IESLiveCustomConfigAdapter;

@interface IESLiveSpeedSlotSpeedGiftHolder : NSObject <IESLiveVSSendGiftCommandQueueDelegate, IESLiveSpeedSlotHolderProtocol> {
    BOOL _didTrackDisplay;
    BOOL _comboAnimationDidStart;
    BOOL _isSending;
    BOOL _resetSendingStateWhenSendFail;
    BOOL _blockAutoHideEnabled;
    IESLiveSpeedGiftResourceSet *_speedGift;
    IESLiveGiveGiftTransaction *_transaction;
    IESLiveVSSendGiftCommandQueue *_sendCommandQueue;
    IESLiveBottomShortcutButton *_speedGiftButton;
    id<IESLiveRoomServiceAdapter> _roomModel;
    HTSEventContext *_trackContext;
    id<IESLiveCustomConfigAdapter> _customConfig;
    SpeedyGiftPopupInfo *_speedyGiftPopupInfoModel;
    id<IESLiveURLSchemaHandlerAdapter> _schemaURLHandler;
    HTSLiveArtTextLabel *_xLabel;
    HTSLiveArtTextLabel *_comboCountLabel;
    long long _giftSource;
    id<HTSLiveSpeedGiftActions> _speedGiftActionCreator;
    unsigned long long _buttonComboCount;
    unsigned long long _waitingCount;
    IESLiveCountTimer *_sendTimer;
    IESLiveCountTimer *_comboTimer;
    IESLiveCountTimer *_comboCountDismissTimer;
    id<IESLiveMotionGuideCoordinator> _guideCoordinator;
    UIView *_buttonComboView;
    id<HTSLiveAutoHideAction> _autoHideActionDispatcher;
    UILabel *_coinNumberLabel;
    UIView *_coinImageView;
    IESLiveSpeedSlotTranslationTask *_translationTask;
    IESLiveSpeedSlotTranslationTask *_pendingTranslationTask;
}

@property (retain, nonatomic) IESLiveSpeedGiftResourceSet *speedGift;
@property (retain, nonatomic) IESLiveGiveGiftTransaction *transaction;
@property (retain, nonatomic) IESLiveVSSendGiftCommandQueue *sendCommandQueue;
@property (retain, nonatomic) IESLiveBottomShortcutButton *speedGiftButton;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveCustomConfigAdapter> customConfig;
@property (retain, nonatomic) SpeedyGiftPopupInfo *speedyGiftPopupInfoModel;
@property (retain, nonatomic) id<IESLiveURLSchemaHandlerAdapter> schemaURLHandler;
@property (nonatomic) BOOL didTrackDisplay;
@property (nonatomic) BOOL comboAnimationDidStart;
@property (retain, nonatomic) HTSLiveArtTextLabel *xLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboCountLabel;
@property (nonatomic) long long giftSource;
@property (retain, nonatomic) id<HTSLiveSpeedGiftActions> speedGiftActionCreator;
@property (nonatomic) unsigned long long buttonComboCount;
@property (nonatomic) unsigned long long waitingCount;
@property (retain, nonatomic) IESLiveCountTimer *sendTimer;
@property (retain, nonatomic) IESLiveCountTimer *comboTimer;
@property (retain, nonatomic) IESLiveCountTimer *comboCountDismissTimer;
@property (retain, nonatomic) id<IESLiveMotionGuideCoordinator> guideCoordinator;
@property (retain, nonatomic) UIView *buttonComboView;
@property (nonatomic) BOOL isSending;
@property (nonatomic) BOOL resetSendingStateWhenSendFail;
@property (retain, nonatomic) id<HTSLiveAutoHideAction> autoHideActionDispatcher;
@property (nonatomic) BOOL blockAutoHideEnabled;
@property (retain, nonatomic) UILabel *coinNumberLabel;
@property (retain, nonatomic) UIView *coinImageView;
@property (retain, nonatomic) IESLiveSpeedSlotTranslationTask *translationTask;
@property (retain, nonatomic) IESLiveSpeedSlotTranslationTask *pendingTranslationTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)customConfig;
- (void)setCustomConfig:(id)arg0;
- (id)roomModel;
- (id)sendTimer;
- (void)setRoomModel:(id)arg0;
- (void)p_showAlert;
- (void)toolbarComponentUpdate:(id)arg0;
- (void)prepareSendSpeedGift;
- (void)sendSpeedGift;
- (void)sendSpeedGiftFromNewAlert;
- (id)schemaURLHandler;
- (void)setSchemaURLHandler:(id)arg0;
- (id)xLabel;
- (void)setXLabel:(id)arg0;
- (void)setWaitingCount:(unsigned long long)arg0;
- (unsigned long long)waitingCount;
- (void)goLogin;
- (BOOL)isBanlanceEnough;
- (id)guideCoordinator;
- (void)setGuideCoordinator:(id)arg0;
- (long long)giftSource;
- (void)setSpeedyGiftPopupInfoModel:(id)arg0;
- (id)speedGift;
- (id)speedyGiftPopupInfoModel;
- (id)executeCoinMoveAnimationFromStart:(struct CGPoint { double x0; double x1; })arg0 toTarget:(struct CGPoint { double x0; double x1; })arg1;
- (id)autoHideActionDispatcher;
- (void)setAutoHideActionDispatcher:(id)arg0;
- (void)willLoadSpeedSlotItem:(id)arg0 interactionResponder:(id)arg1;
- (void)didSpeedSlotItemClicked:(id)arg0 interactionResponder:(id)arg1;
- (void)didUpdateSpeedSlotItem:(id)arg0 interactionResponder:(id)arg1;
- (void)didLoadSpeedSlotItem:(id)arg0 interactionResponder:(id)arg1;
- (id)initWith:(id)arg0 componentContext:(id)arg1 trackContext:(id)arg2;
- (void)setPendingTranslationTask:(id)arg0;
- (id)speedGiftButton;
- (void)setSpeedGiftButton:(id)arg0;
- (id)getSpeedGiftResourceSet;
- (void)setSpeedGift:(id)arg0;
- (void)updateSpeedGiftButtonAppearance;
- (void)pr_trackSpeedGiftToolBarIconShowWithGiftIdWithForceUpdate:(BOOL)arg0;
- (void)startCoinAnimationPlay;
- (id)speedGiftActionCreator;
- (id)pendingTranslationTask;
- (BOOL)didTrackDisplay;
- (void)setDidTrackDisplay:(BOOL)arg0;
- (void)setGiftSource:(long long)arg0;
- (void)_trackSpeedGiftToolBarIconClickWithGiftId:(id)arg0;
- (BOOL)checkShouldAlertPersonalityPopView;
- (BOOL)shouldShowTipAlert;
- (void)tryToExchangeIncomeToCoinAndSendGift;
- (void)lackOfDiamond;
- (void)p_sendSpeedGiftFromNewAlert:(BOOL)arg0;
- (unsigned long long)buttonComboCount;
- (void)setButtonComboCount:(unsigned long long)arg0;
- (id)comboTimer;
- (void)setComboTimer:(id)arg0;
- (void)blockAutoHideIfNeeded;
- (void)setSendTimer:(id)arg0;
- (void)stopSpeedGiftButtonComboAnimation;
- (void)cancelBlockAutoHideIfNeeded;
- (void)startSpeedGiftButtonComboAnimation;
- (void)sendSpeedGiftInNormalRoom;
- (void)p_sendInVSRoom;
- (void)p_sequenceSendInNormalRoom;
- (void)startButtonComboCountAnimation;
- (long long)newAddedClickNumberOfGiftsInSequence;
- (void)createSpeedSlotGiftTransactionWithSequence:(BOOL)arg0;
- (BOOL)resetSendingStateWhenSendFail;
- (id)sendCommandQueue;
- (void)setSendCommandQueue:(id)arg0;
- (id)buttonComboView;
- (void)createButtonComboView;
- (void)setComboAnimationDidStart:(BOOL)arg0;
- (id)comboCountLabel;
- (id)comboCountDismissTimer;
- (void)setComboCountDismissTimer:(id)arg0;
- (BOOL)comboAnimationDidStart;
- (void)setButtonComboView:(id)arg0;
- (void)setComboCountLabel:(id)arg0;
- (void)showTipAlertIfNeeded;
- (void)trackForTipViewClickWithResourceSet:(id)arg0 isConfirmed:(BOOL)arg1;
- (void)actionFromAlertWithParams:(id)arg0 fromNewAlert:(BOOL)arg1;
- (void)trackForTipViewDisplayWithResourceSet:(id)arg0;
- (void)clickTipViewConfirmWithResourceSet:(id)arg0;
- (void)showLackOfBanlance;
- (BOOL)shouldBlockAutoHide;
- (BOOL)blockAutoHideEnabled;
- (void)setCoinNumberLabel:(id)arg0;
- (void)setCoinImageView:(id)arg0;
- (void)tryToChangeToMiddleAnimationSpeedSlotType;
- (void)playCoinAnimationFromCGPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)executeBreathAnimation;
- (id)coinNumberLabel;
- (id)coinImageView;
- (void)showPersonalityPopView;
- (void)commandDidExecute:(id)arg0 command:(id)arg1 error:(id)arg2;
- (void)setSpeedGiftActionCreator:(id)arg0;
- (void)setResetSendingStateWhenSendFail:(BOOL)arg0;
- (void)setBlockAutoHideEnabled:(BOOL)arg0;
- (void).cxx_destruct;
- (void)endTransaction;
- (void)setTransaction:(id)arg0;
- (id)transaction;
- (BOOL)isSending;
- (id)translationTask;
- (void)setTranslationTask:(id)arg0;
- (void)setIsSending:(BOOL)arg0;

@end