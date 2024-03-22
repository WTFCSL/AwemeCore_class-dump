//
//     Generated by private class-dump
//

@class AWEPoiEmphraseCollectViewBarContext, NSString, NSDictionary, UIViewController;
@protocol AWEPOIEmphraseCollectAnchorViewControllerProtocol;

@interface AWEPoiEmphraseCollectViewBarController : NSObject <AWEAwemeDetailBottomBarController> {
    UIViewController<AWEPOIEmphraseCollectAnchorViewControllerProtocol> *_poiEmphraseCollectAnchorViewController;
    AWEPoiEmphraseCollectViewBarContext *_context;
}

@property (retain, nonatomic) UIViewController<AWEPOIEmphraseCollectAnchorViewControllerProtocol> *poiEmphraseCollectAnchorViewController;
@property (retain, nonatomic) AWEPoiEmphraseCollectViewBarContext *context;
@property (readonly, copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logExtraDict;
- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (BOOL)canShowBottomBarForAweme:(id)arg0;
- (void)bottomBarAddedToContainer:(id)arg0;
- (id)poiEmphraseCollectAnchorViewController;
- (void)handleOuterFavoriteActionNotification:(id)arg0;
- (void)setPoiEmphraseCollectAnchorViewController:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)dealloc;
- (Class)contextClass;
- (id)bottomBarView;

@end