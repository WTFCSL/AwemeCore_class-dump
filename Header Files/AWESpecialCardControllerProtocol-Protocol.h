//
//     Generated by private class-dump
//

@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@protocol AWESpecialCardControllerProtocol <NSObject>

@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

- (id)cardContext;
- (void)setCardContext:(id)arg0;
- (id)cardDelegate;
- (void)setCardDelegate:(id)arg0;

@optional

- (id)customGlobalProps:(id)arg0;
- (void)cardWillDisplay:(id)arg0 withAweme:(id)arg1;
- (void)cardDidEndDisplaying:(id)arg0 withAweme:(id)arg1;
- (void)cardDidAppear:(id)arg0 withAweme:(id)arg1;
- (void)cardDidDisappear:(id)arg0 withAweme:(id)arg1;
- (BOOL)shouldCancelInsertCard:(id)arg0 withAweme:(id)arg1 isFromFeed:(BOOL)arg2 willInsertForRowAtIndexPath:(id)arg3;
- (void)cardDidInsert:(id)arg0 withAweme:(id)arg1 isFromFeed:(BOOL)arg2 forRowAtIndexPath:(id)arg3;
- (void)cardDidDelete:(id)arg0 withAweme:(id)arg1;
- (void)cardFrequencyControl:(id)arg0 withAweme:(id)arg1 isFromFeed:(BOOL)arg2 type:(long long)arg3;
- (id)cardClientData:(id)arg0;
- (void)cardDidAppearWithContainer:(id)arg0 aweme:(id)arg1 onFirstScreen:(BOOL)arg2;
- (void)cardDidDisappearWithContainer:(id)arg0 aweme:(id)arg1;
- (void)bridgeRegisterWithContainer:(id)arg0 aweme:(id)arg1;
- (void)lynxCardLoadResult:(long long)arg0 error:(id)arg1 aweme:(id)arg2;
- (void)containerDidStartLoading:(id)arg0 aweme:(id)arg1;
- (void)container:(id)arg0 containerViewDidLoadFailedWithURL:(id)arg1 error:(id)arg2 aweme:(id)arg3;
- (void)container:(id)arg0 containerViewDidFinishLoadWithURL:(id)arg1 aweme:(id)arg2;
- (void)container:(id)arg0 didRecieveError:(id)arg1 aweme:(id)arg2;
- (void)cardTemplateButtonClickWithParams:(id)arg0;
- (id)trackParamsWithBusinessInfo:(id)arg0;
- (BOOL)canHandleLeftSlideGesture:(id)arg0 model:(id)arg1;
- (id)leftSlideViewController:(id)arg0;
- (void)leftSlideViewControllerWillEnter:(id)arg0;
- (void)leftSlideViewControllerDidEnter:(id)arg0;
- (id)panelViewControllerForModel:(id)arg0;

@end