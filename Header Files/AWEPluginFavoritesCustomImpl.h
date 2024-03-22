//
//     Generated by private class-dump
//

@class UIImageView, UIViewController, NSString;

@interface AWEPluginFavoritesCustomImpl : NSObject <BDPFavoritesPluginDelegate> {
    UIViewController *_guideVC;
    UIImageView *_staticView;
}

@property (weak, nonatomic) UIViewController *guideVC;
@property (retain, nonatomic) UIImageView *staticView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)getSettings;
- (id)descString;
- (void)showCancelToastWithUniqueId:(id)arg0;
- (void)cancelFavoriteWithUniqueId:(id)arg0;
- (void)event:(id)arg0 uniqueID:(id)arg1 param:(id)arg2;
- (id)guideVC;
- (void)setGuideVC:(id)arg0;
- (void)setStaticView:(id)arg0;
- (id)bdp_hostGameGuideViewWithUniqueId:(id)arg0 extraInfo:(id)arg1;
- (id)getCurrentUserIDWithAppID:(id)arg0;
- (BOOL)bdp_showFavoritesButtonForType:(long long)arg0;
- (BOOL)bdp_removeFromFavoritesForType:(long long)arg0 uniqueId:(id)arg1 extraInfo:(id)arg2;
- (BOOL)bdp_addToFavoritesForType:(long long)arg0 uniqueId:(id)arg1 extraInfo:(id)arg2;
- (void).cxx_destruct;
- (id)imageURL;
- (id)titleString;
- (id)staticView;

@end