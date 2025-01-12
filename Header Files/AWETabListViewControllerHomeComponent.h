//
//     Generated by private class-dump
//

@class AWEEffectArtistViewController, AWEProfileLynxViewController, NSMutableDictionary, NSString, NSMutableArray, UIViewController;
@protocol AWEPrivatePostsViewControllerProtocol, AWETemplateArtistViewControllerProtocol, AWEOriginalSoundTrackViewControllerProtocol, AWEShopSeekWorkViewControllerProtocol, AFDCloseFriendMomentTabViewControllerProtocol, AWEDiscoverDPlayletUserProfileTabProtocol;

@interface AWETabListViewControllerHomeComponent : AWEUserHomeBaseComponent <AWEProfileTabListProviderProtocol, AWETabListViewControllerHomeProtocol> {
    BOOL _isViewDidAppear;
    BOOL _isTabScrolled;
    UIViewController<AWEShopSeekWorkViewControllerProtocol> *_shopSeekVC;
    UIViewController<AWEPrivatePostsViewControllerProtocol> *_privateVC;
    AWEEffectArtistViewController *_effectVC;
    UIViewController<AWEDiscoverDPlayletUserProfileTabProtocol> *_playletTabVC;
    UIViewController<AWETemplateArtistViewControllerProtocol> *_templateVC;
    UIViewController<AFDCloseFriendMomentTabViewControllerProtocol> *_momentVC;
    UIViewController<AWEOriginalSoundTrackViewControllerProtocol> *_ostVC;
    UIViewController<AWEOriginalSoundTrackViewControllerProtocol> *_vsOriginalSoundVC;
    AWEProfileLynxViewController *_lynxVC;
    AWEProfileLynxViewController *_serviceLynxVC;
    NSMutableArray *_subscriberArray;
    NSMutableDictionary *_commonLynxViewControllerMap;
}

@property (nonatomic) BOOL isViewDidAppear;
@property (retain, nonatomic) UIViewController<AWEShopSeekWorkViewControllerProtocol> *shopSeekVC;
@property (retain, nonatomic) UIViewController<AWEPrivatePostsViewControllerProtocol> *privateVC;
@property (retain, nonatomic) AWEEffectArtistViewController *effectVC;
@property (retain, nonatomic) UIViewController<AWEDiscoverDPlayletUserProfileTabProtocol> *playletTabVC;
@property (retain, nonatomic) UIViewController<AWETemplateArtistViewControllerProtocol> *templateVC;
@property (retain, nonatomic) UIViewController<AFDCloseFriendMomentTabViewControllerProtocol> *momentVC;
@property (retain, nonatomic) UIViewController<AWEOriginalSoundTrackViewControllerProtocol> *ostVC;
@property (retain, nonatomic) UIViewController<AWEOriginalSoundTrackViewControllerProtocol> *vsOriginalSoundVC;
@property (retain, nonatomic) AWEProfileLynxViewController *lynxVC;
@property (retain, nonatomic) AWEProfileLynxViewController *serviceLynxVC;
@property (nonatomic) BOOL isTabScrolled;
@property (retain, nonatomic) NSMutableArray *subscriberArray;
@property (retain, nonatomic) NSMutableDictionary *commonLynxViewControllerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isViewDidAppear;
- (void)setLynxVC:(id)arg0;
- (id)lynxVC;
- (void)unbindEvent;
- (void)setIsViewDidAppear:(BOOL)arg0;
- (BOOL)p_isVsOfficialAccount;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)arg0;
- (BOOL)canHandleUnsupportedTabType:(long long)arg0;
- (void)onResetUI;
- (void)setIsTabScrolled:(BOOL)arg0;
- (BOOL)isTabScrolled;
- (void)onDidSelectTabListIndex:(long long)arg0 actionType:(unsigned long long)arg1;
- (id)playletTabVC;
- (void)setPlayletTabVC:(id)arg0;
- (void)refreshPrivateNeedDelay:(BOOL)arg0;
- (id)subscriberArray;
- (void)setSubscriberArray:(id)arg0;
- (id)serviceLynxVC;
- (id)__getCommonLynxViewControllerForType:(long long)arg0;
- (double)__topPaddingHeight;
- (id)commonLynxViewControllerMap;
- (id)__createLynxViewControllerForTabType:(long long)arg0;
- (void)setServiceLynxVC:(id)arg0;
- (void)setCommonLynxViewControllerMap:(id)arg0;
- (void)changeLynxVCTabName:(id)arg0;
- (void)p_autoLandingToPrivateTabIfNeeded;
- (id)shopSeekVC;
- (id)privateVC;
- (id)effectVC;
- (id)templateVC;
- (id)momentVC;
- (id)ostVC;
- (id)vsOriginalSoundVC;
- (void)setShopSeekVC:(id)arg0;
- (void)setPrivateVC:(id)arg0;
- (void)setEffectVC:(id)arg0;
- (void)setTemplateVC:(id)arg0;
- (void)setMomentVC:(id)arg0;
- (void)setOstVC:(id)arg0;
- (void)setVsOriginalSoundVC:(id)arg0;
- (void).cxx_destruct;
- (id)registerEvent:(id)arg0 callback:(id /* block */)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)onInit;

@end
