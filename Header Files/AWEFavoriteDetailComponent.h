//
//     Generated by private class-dump
//

@class NSString, UIViewController;
@protocol AWEUserProfileFavoriteV2ViewControllerProtocol, AWEUserProfileCollectionViewControllerProtocol;

@interface AWEFavoriteDetailComponent : AWEUserDetailBaseComponent <AWEProfileTabListProviderProtocol, AWEFavoriteDetailComponentProtocol> {
    BOOL _needAttachHeader;
    UIViewController<AWEUserProfileCollectionViewControllerProtocol> *_collectionVC;
    UIViewController<AWEUserProfileFavoriteV2ViewControllerProtocol> *_favoriteV2VC;
    unsigned long long _favoriteLandingType;
    NSString *_favoriteAwemeLastViewedItemID;
}

@property (retain, nonatomic) UIViewController<AWEUserProfileCollectionViewControllerProtocol> *collectionVC;
@property (retain, nonatomic) UIViewController<AWEUserProfileFavoriteV2ViewControllerProtocol> *favoriteV2VC;
@property (nonatomic) unsigned long long favoriteLandingType;
@property (copy, nonatomic) NSString *favoriteAwemeLastViewedItemID;
@property (nonatomic) BOOL needAttachHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabStatusCalibrationSet;

- (id)collectionVC;
- (void)setCollectionVC:(id)arg0;
- (BOOL)onConfigWithRouterParamDict:(id)arg0;
- (void)onWillRefreshWithUser:(id)arg0;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)arg0;
- (id)noNeedParsedParamsToServer;
- (void)didSelectFavoriteV2VC;
- (id)favoriteV2VC;
- (void)setFavoriteLandingType:(unsigned long long)arg0;
- (void)setFavoriteAwemeLastViewedItemID:(id)arg0;
- (void)setNeedAttachHeader:(BOOL)arg0;
- (unsigned long long)favoriteLandingType;
- (id)favoriteAwemeLastViewedItemID;
- (BOOL)needAttachHeader;
- (id)tabLandingParams;
- (void)setFavoriteV2VC:(id)arg0;
- (void).cxx_destruct;
- (id)collectionViewController;
- (void)resetUI;
- (void)onInit;

@end