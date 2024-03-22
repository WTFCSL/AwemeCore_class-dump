//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESECLynxCard, NSMutableDictionary, NSMutableArray;
@protocol IESECMallPageCardDelegate;

@interface IESECMallPageCard : UIView <IESECLynxCardDelegate, IESECListCardsContextDelegate, IESECUserMessage> {
    BOOL _loadSuccess;
    BOOL _pageCardLoadSuccess;
    BOOL _hasRetried;
    BOOL _didAppear;
    BOOL _didFirstScreen;
    NSDictionary *_dynamicParams;
    id<IESECMallPageCardDelegate> _delegate;
    id /* block */ _paramsChanged;
    NSDictionary *_globalPropsExtra;
    NSDictionary *_rootGlobalPropsExtra;
    IESECLynxCard *_pageCardView;
    NSMutableArray *_unsentEventList;
    NSString *_lynxSchema;
    NSString *_envIdentifier;
    NSString *_pageName;
    id /* block */ _getParamsFromPageCard;
    id /* block */ _pageCardTracker;
    unsigned long long _lastPageVisibleStatus;
    NSMutableDictionary *_pageCardDetailParams;
    NSDictionary *_lynxData;
}

@property (retain, nonatomic) IESECLynxCard *pageCardView;
@property (copy, nonatomic) NSDictionary *dynamicParams;
@property (retain, nonatomic) NSMutableArray *unsentEventList;
@property (nonatomic) BOOL pageCardLoadSuccess;
@property (nonatomic) BOOL hasRetried;
@property (copy, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) NSString *envIdentifier;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) id /* block */ getParamsFromPageCard;
@property (copy, nonatomic) id /* block */ pageCardTracker;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) BOOL didFirstScreen;
@property (nonatomic) unsigned long long lastPageVisibleStatus;
@property (retain, nonatomic) NSMutableDictionary *pageCardDetailParams;
@property (copy, nonatomic) NSDictionary *lynxData;
@property (nonatomic) BOOL loadSuccess;
@property (weak, nonatomic) id<IESECMallPageCardDelegate> delegate;
@property (copy, nonatomic) id /* block */ paramsChanged;
@property (copy, nonatomic) NSDictionary *globalPropsExtra;
@property (copy, nonatomic) NSDictionary *rootGlobalPropsExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxData;
- (id)lynxSchema;
- (void)setLoadSuccess:(BOOL)arg0;
- (BOOL)didFirstScreen;
- (void)viewDidFirstScreen:(id)arg0;
- (void)setLynxSchema:(id)arg0;
- (void)setLynxData:(id)arg0;
- (void)setDidAppear:(BOOL)arg0;
- (void)updateLynxData:(id)arg0;
- (id)globalPropsExtra;
- (id)rootGlobalPropsExtra;
- (id)currentBridgeCallHanderForCards;
- (void)didFinishHostLogin;
- (void)didFinishHostLogout;
- (void)setDidFirstScreen:(BOOL)arg0;
- (void)sendPageVisibilityChangeEvent:(unsigned long long)arg0;
- (unsigned long long)lastPageVisibleStatus;
- (void)setLastPageVisibleStatus:(unsigned long long)arg0;
- (BOOL)lynxCardEnableForest;
- (void)lynxCard:(id)arg0 sizeDidChanged:(struct CGSize { double x0; double x1; })arg1;
- (void)lynxCard:(id)arg0 didLoadFail:(id)arg1;
- (void)lynxCard:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (BOOL)pageDidAppeared;
- (void)currentCardsWriteAlogMethodName:(id)arg0 paramModel:(id)arg1 result:(id)arg2 context:(id)arg3;
- (id)currentListContextIdForCards;
- (id)currentListHomePageView;
- (void)setGlobalPropsExtra:(id)arg0;
- (void)setRootGlobalPropsExtra:(id)arg0;
- (id)xBridgeList;
- (void)mallDidFirstScreen;
- (id)pageNameForPageCard;
- (void)sendMallLifeEvent:(id)arg0 params:(id)arg1;
- (void)sendDynamicParamsEvent:(unsigned long long)arg0 apiKey:(id)arg1 params:(id)arg2;
- (void)sendUserActionEvent:(id)arg0 params:(id)arg1;
- (void)sendGetDynamicParamsEvent:(unsigned long long)arg0 apiKeys:(id)arg1 paramsContext:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithLynxSchema:(id)arg0 delegate:(id)arg1 envIdentifier:(id)arg2 pageName:(id)arg3 completion:(id /* block */)arg4;
- (void)setParamsChanged:(id /* block */)arg0;
- (void)loadPageCard;
- (void)setPageCardTracker:(id /* block */)arg0;
- (void)setDynamicParams:(id)arg0;
- (void)setUnsentEventList:(id)arg0;
- (void)setPageCardView:(id)arg0;
- (id)pageCardView;
- (void)setPageCardDetailParams:(id)arg0;
- (void)handleNegfeedbackClickNotification:(id)arg0;
- (void)pageCardListenerReady;
- (id)pageCardDetailParams;
- (BOOL)hasRetried;
- (id /* block */)pageCardTracker;
- (id /* block */)paramsChanged;
- (id /* block */)getParamsFromPageCard;
- (void)tryPublishEvent:(id)arg0 needStore:(BOOL)arg1;
- (void)setGetParamsFromPageCard:(id /* block */)arg0;
- (BOOL)pageCardLoadSuccess;
- (id)unsentEventList;
- (void)setPageCardLoadSuccess:(BOOL)arg0;
- (void)sendPageCardTracker;
- (void)setHasRetried:(BOOL)arg0;
- (id)dynamicParamsForApiKey:(id)arg0;
- (void)resetDynamicParams;
- (void)appDidEnterBackground:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)viewDidAppear;
- (void)appWillEnterForeground:(id)arg0;
- (BOOL)didAppear;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setEnvIdentifier:(id)arg0;
- (void)viewDidDisappear;
- (BOOL)loadSuccess;
- (id)envIdentifier;
- (void)setPageName:(id)arg0;
- (id)pageName;
- (id)dynamicParams;

@end