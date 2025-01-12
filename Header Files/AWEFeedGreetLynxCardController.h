//
//     Generated by private class-dump
//

@class NSString;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedGreetLynxCardController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol, AWEFeedGreetLynxCardControllerProtocol> {
    id<AWESpecialCardDelegate> cardDelegate;
    id<AWESpecialCardContextProtocol> cardContext;
    id /* block */ needFetchBlock;
    id /* block */ fetchCompletionBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;
@property (copy, nonatomic) id /* block */ needFetchBlock;
@property (copy, nonatomic) id /* block */ fetchCompletionBlock;

- (void)willRefresh;
- (id)cardContext;
- (void)setCardContext:(id)arg0;
- (void)loadMoreCompletion:(id)arg0 error:(id)arg1 isFooterRefreshing:(BOOL)arg2;
- (id)cardDelegate;
- (void)setCardDelegate:(id)arg0;
- (void)cardDidAppear:(id)arg0 withAweme:(id)arg1;
- (id)resolvedConfigJsonString;
- (id /* block */)needFetchBlock;
- (void)fetchLynxGreetCardWithCompletion:(id /* block */)arg0;
- (void)insertLynxGreetCardWithModel:(id)arg0 atIndex:(long long)arg1 completion:(id /* block */)arg2;
- (void)setNeedFetchBlock:(id /* block */)arg0;
- (id /* block */)fetchCompletionBlock;
- (void).cxx_destruct;
- (void)setFetchCompletionBlock:(id /* block */)arg0;
- (void)viewDidLoad;

@end
