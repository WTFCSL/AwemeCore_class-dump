//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedFavoriteCardController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol> {
    id<AWESpecialCardContextProtocol> cardContext;
    id<AWESpecialCardDelegate> cardDelegate;
    AWEAwemeModel *_waitInsertedModel;
    AWEAwemeModel *_favoritedModel;
    NSString *_tpsaStr;
}

@property (weak, nonatomic) AWEAwemeModel *waitInsertedModel;
@property (weak, nonatomic) AWEAwemeModel *favoritedModel;
@property (copy, nonatomic) NSString *tpsaStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

- (id)cardContext;
- (void)setCardContext:(id)arg0;
- (id)cardDelegate;
- (void)setCardDelegate:(id)arg0;
- (void)cardWillDisplay:(id)arg0 withAweme:(id)arg1;
- (void)cardDidEndDisplaying:(id)arg0 withAweme:(id)arg1;
- (void)cardDidAppear:(id)arg0 withAweme:(id)arg1;
- (void)cardDidDisappear:(id)arg0 withAweme:(id)arg1;
- (BOOL)shouldCancelInsertCard:(id)arg0 withAweme:(id)arg1 isFromFeed:(BOOL)arg2 willInsertForRowAtIndexPath:(id)arg3;
- (void)cardDidInsert:(id)arg0 withAweme:(id)arg1 isFromFeed:(BOOL)arg2 forRowAtIndexPath:(id)arg3;
- (void)cardDidDelete:(id)arg0 withAweme:(id)arg1;
- (void)cardFrequencyControl:(id)arg0 withAweme:(id)arg1 isFromFeed:(BOOL)arg2 type:(long long)arg3;
- (void)cardTemplateButtonClickWithParams:(id)arg0;
- (BOOL)canHandleLeftSlideGesture:(id)arg0 model:(id)arg1;
- (id)leftSlideViewController:(id)arg0;
- (void)handleCollectionButtonClicked:(id)arg0;
- (void)handleFollowStatusChangeNotification:(id)arg0;
- (void)alogWithContent:(id)arg0;
- (id)detailViewController:(id)arg0 enterMethod:(id)arg1;
- (id)favoritedModel;
- (id)getSubviewWithClassName:(id)arg0 inView:(id)arg1;
- (void)insertFavoriteCard;
- (void)setWaitInsertedModel:(id)arg0;
- (void)setTpsaStr:(id)arg0;
- (void)setFavoritedModel:(id)arg0;
- (id)tpsaStr;
- (id)waitInsertedModel;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
