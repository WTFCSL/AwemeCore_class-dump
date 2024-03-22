//
//     Generated by private class-dump
//

@class AWESharkContainerLoadContext, NSString, UIView;
@protocol AWESharkLynxContainerProtocol;

@interface AWEDiamondLynxElement : AWEDiamondSingleElement <AWESharkLynxContainerViewDelegate, AWESharkCardProtocol> {
    BOOL _needHandleShowEventWhenLoaded;
    BOOL _isSuccessedLoad;
    NSString *_url;
    NSString *_initialDataJSON;
    NSString *_cardID;
    UIView<AWESharkLynxContainerProtocol> *_lynxView;
    AWESharkContainerLoadContext *_loadCtx;
}

@property (retain, nonatomic) UIView<AWESharkLynxContainerProtocol> *lynxView;
@property (nonatomic) BOOL needHandleShowEventWhenLoaded;
@property (nonatomic) BOOL isSuccessedLoad;
@property (retain, nonatomic) AWESharkContainerLoadContext *loadCtx;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *initialDataJSON;
@property (copy, nonatomic) NSString *cardID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long cardType;
@property (readonly, nonatomic) BOOL isReuse;
@property (readonly, nonatomic) long long renderType;

+ (id)elementType;

- (long long)renderType;
- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (double)originHeight;
- (void)elementDidAppear;
- (void)lynxContainerDidFirstScreen:(id)arg0;
- (void)lynxContainer:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)lynxContainer:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)reportShowEvent;
- (void)loadViewWithCache:(id)arg0 delegate:(id)arg1;
- (void)renderElement;
- (void)elementWillDisappear;
- (void)updateWithNewElement:(id)arg0;
- (BOOL)isReuse;
- (long long)pageTypeForFMPTrack;
- (void)__updateLynxElement;
- (id)initialDataJSON;
- (void)setInitialDataJSON:(id)arg0;
- (void)setLoadCtx:(id)arg0;
- (id)loadCtx;
- (BOOL)isSuccessedLoad;
- (void)setNeedHandleShowEventWhenLoaded:(BOOL)arg0;
- (void)setIsSuccessedLoad:(BOOL)arg0;
- (BOOL)needHandleShowEventWhenLoaded;
- (void)reloadCardWithData:(id)arg0;
- (void)lynxWillShow;
- (void)lynxWillHide;
- (void)sendLynxEvent:(id)arg0 params:(id)arg1;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (void)loadView;
- (id)url;
- (id)cardID;
- (void)setCardID:(id)arg0;

@end