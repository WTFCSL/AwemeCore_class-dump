//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMapTable, UIView;
@protocol BDXViewContainerProtocol;

@interface AWEPOIPublishMultiCardViewController : UIViewController <BDLynxViewDelegate, BDLynxViewUIDelegate, BDXContainerLifecycleProtocol, AWELifeMultiCardServiceProtocol> {
    BOOL _fromJSB;
    BOOL _shouldShowCompanyCoupon;
    UIView<BDXViewContainerProtocol> *_naviBdxView;
    NSMutableDictionary *_viewDict;
    UIView<BDXViewContainerProtocol> *_floatBoxView;
    UIView *_containerView;
    double _floatBoxRightGap;
    double _floatBoxBottomGap;
    NSString *_naviBarSchema;
    NSString *_poiListContentLynxSchema;
    NSString *_companyCouponH5Schema;
    NSString *_floatBoxSchema;
    NSMapTable *_subscriberDict;
    NSMutableDictionary *_pageGlobalProps;
    NSMutableDictionary *_lynxPageModels;
    long long _currentPageIndex;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _pageFrame;
}

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *naviBdxView;
@property (retain, nonatomic) NSMutableDictionary *viewDict;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *floatBoxView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pageFrame;
@property (nonatomic) double floatBoxRightGap;
@property (nonatomic) double floatBoxBottomGap;
@property (copy, nonatomic) NSString *naviBarSchema;
@property (copy, nonatomic) NSString *poiListContentLynxSchema;
@property (copy, nonatomic) NSString *companyCouponH5Schema;
@property (copy, nonatomic) NSString *floatBoxSchema;
@property (retain, nonatomic) NSMapTable *subscriberDict;
@property (retain, nonatomic) NSMutableDictionary *pageGlobalProps;
@property (retain, nonatomic) NSMutableDictionary *lynxPageModels;
@property (nonatomic) BOOL shouldShowCompanyCoupon;
@property (nonatomic) long long currentPageIndex;
@property (nonatomic) BOOL fromJSB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (id)viewDict;
- (void)setViewDict:(id)arg0;
- (void)p_setupUI;
- (id)initWithGlobalProps:(id)arg0;
- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:(id)arg0 callback:(id /* block */)arg1;
- (id)subscriberDict;
- (void)setSubscriberDict:(id)arg0;
- (void)setPageGlobalProps:(id)arg0;
- (id)pageGlobalProps;
- (void)p_parsePagesJsonArray;
- (void)setNaviBarSchema:(id)arg0;
- (void)p_updatePageListWithCompanyCouponSchema:(id)arg0 shouldShowCompanyCoupon:(BOOL)arg1;
- (void)p_updateGlobalProps;
- (void)subscriberBDXEvent;
- (BOOL)fromJSB;
- (void)p_exchangePageWithIndex:(long long)arg0;
- (id)lynxPageModels;
- (void)p_showFloatBoxWithSchema:(id)arg0 rightGap:(double)arg1 bottomGap:(double)arg2 extra:(id)arg3;
- (void)p_closeFloatBox;
- (void)setNaviBdxView:(id)arg0;
- (id)naviBdxView;
- (void)configLynxView:(id)arg0 schema:(id)arg1 careSizeChange:(BOOL)arg2 extra:(id)arg3;
- (void)setFloatBoxView:(id)arg0;
- (id)floatBoxView;
- (void)p_bringFloatBoxToTop;
- (id)createPageLynxViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 schema:(id)arg1;
- (id)naviBarSchema;
- (void)createNavBarLynxViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 schema:(id)arg1;
- (void)setLynxPageModels:(id)arg0;
- (id)updateSchema:(id)arg0 paramDict:(id)arg1;
- (void)setFloatBoxSchema:(id)arg0;
- (void)setFloatBoxRightGap:(double)arg0;
- (void)setFloatBoxBottomGap:(double)arg0;
- (void)createFloatBoxLynxViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 schema:(id)arg1 extra:(id)arg2;
- (void)p_dealNavigationBarHeight:(double)arg0;
- (void)p_dealFloatBoxSize:(struct CGSize { double x0; double x1; })arg0;
- (double)floatBoxRightGap;
- (double)floatBoxBottomGap;
- (id /* block */)initializeUpdatePageListCallback;
- (id)createWebViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 url:(id)arg1;
- (void)setFromJSB:(BOOL)arg0;
- (id)poiListContentLynxSchema;
- (void)setPoiListContentLynxSchema:(id)arg0;
- (id)companyCouponH5Schema;
- (void)setCompanyCouponH5Schema:(id)arg0;
- (id)floatBoxSchema;
- (BOOL)shouldShowCompanyCoupon;
- (void)setShouldShowCompanyCoupon:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (void)setCurrentPageIndex:(long long)arg0;
- (long long)currentPageIndex;
- (id)containerView;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (double)safeAreaTop;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageFrame;
- (void)setPageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
