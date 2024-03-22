//
//     Generated by private class-dump
//

@class IESECListKitLynxCardModel, NSDictionary, IESECLynxCard, IESECLynxCardModel, IESECMallLynxRenderMonitor, NSString;
@protocol IESECMallPopupViewDelegate;

@interface IESECMallPopupView : UIView <IESECUserMessage, IESECLynxCardDelegate, IESECListCardsContextDelegate> {
    BOOL _isCoin;
    BOOL _hitTestFlag;
    BOOL _firstScreenDidShow;
    BOOL _didAppear;
    IESECLynxCard *_popupView;
    id<IESECMallPopupViewDelegate> _delegate;
    IESECListKitLynxCardModel *_popupData;
    NSDictionary *_globalPropsExtra;
    NSDictionary *_rootGlobalPropsExtra;
    long long _lynxCardThreadStrategy;
    IESECLynxCardModel *_cardModel;
    NSDictionary *_lynxDataString;
    IESECMallLynxRenderMonitor *_lynxRenderMonitor;
    unsigned long long _lastPageVisibleStatus;
}

@property (retain, nonatomic) IESECLynxCard *popupView;
@property (nonatomic) BOOL hitTestFlag;
@property (retain, nonatomic) IESECLynxCardModel *cardModel;
@property (nonatomic) BOOL firstScreenDidShow;
@property (copy, nonatomic) NSDictionary *lynxDataString;
@property (retain, nonatomic) IESECMallLynxRenderMonitor *lynxRenderMonitor;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) unsigned long long lastPageVisibleStatus;
@property (weak, nonatomic) id<IESECMallPopupViewDelegate> delegate;
@property (retain, nonatomic) IESECListKitLynxCardModel *popupData;
@property (nonatomic) BOOL isCoin;
@property (copy, nonatomic) NSDictionary *globalPropsExtra;
@property (copy, nonatomic) NSDictionary *rootGlobalPropsExtra;
@property (nonatomic) long long lynxCardThreadStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (void)viewDidFirstScreen:(id)arg0;
- (void)appWillEnterForground:(id)arg0;
- (void)setDidAppear:(BOOL)arg0;
- (void)updateLynxData:(id)arg0;
- (void)buildUI;
- (id)globalPropsExtra;
- (id)rootGlobalPropsExtra;
- (id)lynxRenderMonitor;
- (id)currentBridgeCallHanderForCards;
- (void)setLynxRenderMonitor:(id)arg0;
- (BOOL)hasVisiblePopup;
- (long long)lynxCardThreadStrategy;
- (void)didFinishHostLogin;
- (void)didFinishHostLogout;
- (void)setPopupView:(id)arg0;
- (id)popupView;
- (void)sendPageVisibilityChangeEvent:(unsigned long long)arg0;
- (unsigned long long)lastPageVisibleStatus;
- (void)setLastPageVisibleStatus:(unsigned long long)arg0;
- (BOOL)lynxCardEnableForest;
- (id)globalXBridges;
- (void)lynxCard:(id)arg0 sizeDidChanged:(struct CGSize { double x0; double x1; })arg1;
- (void)lynxCard:(id)arg0 didLoadFail:(id)arg1;
- (void)lynxCard:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)lynxCard:(id)arg0 didUpdateDataWithLynxViewFromType:(unsigned long long)arg1 perfDict:(id)arg2;
- (BOOL)pageDidAppeared;
- (void)currentCardsWriteAlogMethodName:(id)arg0 paramModel:(id)arg1 result:(id)arg2 context:(id)arg3;
- (id)currentListContextIdForCards;
- (id)currentListHomePageView;
- (void)setGlobalPropsExtra:(id)arg0;
- (void)setRootGlobalPropsExtra:(id)arg0;
- (id)instanceBridges;
- (id)createLynxCardModel:(id)arg0;
- (BOOL)firstScreenDidShow;
- (BOOL)hitTestFlag;
- (void)setHitTestFlag:(BOOL)arg0;
- (void)setFirstScreenDidShow:(BOOL)arg0;
- (void)setGreyStyleWithExtraData:(id)arg0;
- (void)setLynxCardThreadStrategy:(long long)arg0;
- (void)setPopupData:(id)arg0;
- (void)sendEventGlobalLoginPanelVisibility:(unsigned long long)arg0;
- (void)setIsCoin:(BOOL)arg0;
- (void)handleFirstScreenShowNotify:(id)arg0;
- (id)lynxDataString;
- (void)setLynxDataString:(id)arg0;
- (BOOL)isCoin;
- (id)popupData;
- (void)addPopup;
- (void)appDidEnterBackground:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)viewDidAppear;
- (BOOL)didAppear;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)viewDidDisappear;
- (void)addNotificationObserver;
- (void)buildConstraints;

@end