//
//     Generated by private class-dump
//

@class IESECMallNativeRreloadMonitor, NSString, NSDictionary, IESECListKitCellFeedbackData, IESECLynxCardBridgeEventSubscriber, IESECMallListKitCellData, IESECMallFeedbackMaskView;
@protocol IESECMallNativeCardDelegate;

@interface IESECMallNativeCardCell : UICollectionViewCell <IESECMallCollectionCellPlayerContainer> {
    BOOL _canSendNoti;
    BOOL _isMute;
    BOOL _bigFontEnabled;
    id /* block */ _videoClick;
    id /* block */ _productClick;
    id /* block */ _moreClick;
    id /* block */ _maskViewCloseClick;
    id /* block */ _feedbackClick;
    id /* block */ _feedbackShow;
    id /* block */ _playerPlayResult;
    id /* block */ _nativeCardPreload;
    id /* block */ _muteClick;
    IESECMallListKitCellData *_model;
    IESECListKitCellFeedbackData *_data;
    NSString *_nativeCellEnvIdentifier;
    double _fontSizeScale;
    NSString *_pageName;
    id<IESECMallNativeCardDelegate> _delegate;
    IESECMallNativeRreloadMonitor *_nativePreloadMonitor;
    NSDictionary *_globalPropsExtra;
    NSDictionary *_rootGlobalPropsExtra;
    IESECMallFeedbackMaskView *_feedbackCoverView;
    IESECListKitCellFeedbackData *_feedback;
    IESECLynxCardBridgeEventSubscriber *_subscriber;
    NSString *_successMsg;
}

@property (retain, nonatomic) IESECMallFeedbackMaskView *feedbackCoverView;
@property (retain, nonatomic) IESECListKitCellFeedbackData *feedback;
@property (retain, nonatomic) IESECLynxCardBridgeEventSubscriber *subscriber;
@property (copy, nonatomic) NSString *successMsg;
@property (copy, nonatomic) id /* block */ videoClick;
@property (copy, nonatomic) id /* block */ productClick;
@property (copy, nonatomic) id /* block */ moreClick;
@property (copy, nonatomic) id /* block */ maskViewCloseClick;
@property (copy, nonatomic) id /* block */ feedbackClick;
@property (copy, nonatomic) id /* block */ feedbackShow;
@property (copy, nonatomic) id /* block */ playerPlayResult;
@property (copy, nonatomic) id /* block */ nativeCardPreload;
@property (copy, nonatomic) id /* block */ muteClick;
@property (retain, nonatomic) IESECMallListKitCellData *model;
@property (retain, nonatomic) IESECListKitCellFeedbackData *data;
@property (copy, nonatomic) NSString *nativeCellEnvIdentifier;
@property (nonatomic) BOOL canSendNoti;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL bigFontEnabled;
@property (nonatomic) double fontSizeScale;
@property (copy, nonatomic) NSString *pageName;
@property (weak, nonatomic) id<IESECMallNativeCardDelegate> delegate;
@property (retain, nonatomic) IESECMallNativeRreloadMonitor *nativePreloadMonitor;
@property (copy, nonatomic) NSDictionary *globalPropsExtra;
@property (copy, nonatomic) NSDictionary *rootGlobalPropsExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsMute:(BOOL)arg0;
- (id)getFormatTimeStringWithDuration:(long long)arg0;
- (id)minuteFormatStringWithDuration:(long long)arg0;
- (id)secondsFormatStringWithDuration:(long long)arg0;
- (id)globalPropsExtra;
- (id)rootGlobalPropsExtra;
- (id /* block */)moreClick;
- (void)hideFeedback:(id)arg0;
- (id)successMsg;
- (void)setSuccessMsg:(id)arg0;
- (double)fontSizeScale;
- (BOOL)bigFontEnabled;
- (void)setBigFontEnabled:(BOOL)arg0;
- (void)setFontSizeScale:(double)arg0;
- (void)setGlobalPropsExtra:(id)arg0;
- (void)setRootGlobalPropsExtra:(id)arg0;
- (void)setMoreClick:(id /* block */)arg0;
- (id)nativeCellEnvIdentifier;
- (void)setNativeCellEnvIdentifier:(id)arg0;
- (id /* block */)muteClick;
- (void)updateVoiceMute:(BOOL)arg0;
- (void)setMuteClick:(id /* block */)arg0;
- (void)addLongPressGesture:(id)arg0;
- (id)nativePreloadMonitor;
- (void)liveLinkViewClicked;
- (void)setVideoClick:(id /* block */)arg0;
- (void)productLinkViewClicked;
- (void)setProductClick:(id /* block */)arg0;
- (id)handlePriceString:(id)arg0 newUI:(BOOL)arg1;
- (void)updateWithWindVaneData:(id)arg0;
- (id)feedbackCoverView;
- (void)handleNoti:(id)arg0;
- (id)currentEnvIdentifierForCard;
- (id /* block */)maskViewCloseClick;
- (void)resetFeedbackList;
- (void)maskViewMoreBtnClicked;
- (void)reportPlayerPlayResult:(id)arg0;
- (void)setupFeedbackView;
- (void)setFeedbackCoverView:(id)arg0;
- (void)setGreyStyleWithExtraData:(id)arg0 globalGrey:(BOOL)arg1 needRevertColorful:(BOOL)arg2;
- (void)setFeedbackClick:(id /* block */)arg0;
- (void)setFeedbackShow:(id /* block */)arg0;
- (void)setMaskViewCloseClick:(id /* block */)arg0;
- (void)setPlayerPlayResult:(id /* block */)arg0;
- (void)setNativePreloadMonitor:(id)arg0;
- (id /* block */)videoClick;
- (id /* block */)productClick;
- (void)longPressGestureAction:(id)arg0;
- (void)setCanSendNoti:(BOOL)arg0;
- (BOOL)canSendNoti;
- (void)sendNoti;
- (void)reportFeedbackShow;
- (id)dataIdentity;
- (id /* block */)feedbackClick;
- (id /* block */)feedbackShow;
- (id /* block */)playerPlayResult;
- (id /* block */)nativeCardPreload;
- (void)setNativeCardPreload:(id /* block */)arg0;
- (void)setModel:(id)arg0;
- (void)setFeedback:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (id)model;
- (id)feedback;
- (void)setData:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)subscriber;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)updateWithFeedback:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (void)setSubscriber:(id)arg0;
- (BOOL)isMute;
- (void)setPageName:(id)arg0;
- (id)pageName;

@end
