//
//     Generated by private class-dump
//

@class NSLock, NSString, NSMutableDictionary, AWEPOISearchLynxModel, NSMutableArray, UIViewController, CLLocation, NSMapTable;
@protocol AWELifeMultiCardServiceProtocol;

@interface AWEPOISearchLynxService : NSObject <AWEPOISearchLynxServiceProtocol> {
    BOOL _isEnabledPrefetch;
    BOOL _isPrefetchDataReady;
    BOOL _isLynxPoiListPageReady;
    BOOL _shouldShowCompanyCoupon;
    NSString *_prefetchJson;
    CLLocation *_currentLocationInfo;
    AWEPOISearchLynxModel *_model;
    id /* block */ _poiCallback;
    id /* block */ _lynxCompletion;
    id /* block */ _userTypeChangedCallback;
    id /* block */ _titleChangeCallBack;
    id /* block */ _updatePublishTrackParams;
    NSMapTable *_subscriberDict;
    NSLock *_subscriberLock;
    NSString *_traceSessionIdStr;
    UIViewController *_vc;
    NSMutableArray *_injectPrefetchSetting;
    NSMutableArray *_injectGlobalPropsSetting;
    NSMutableDictionary *_paramPool;
    UIViewController<AWELifeMultiCardServiceProtocol> *_multiCardVC;
    id /* block */ _companyCouponCallback;
    NSString *_spuTabSchema;
    NSMutableDictionary *_publishAnchorInfoMap;
}

@property (nonatomic) BOOL isEnabledPrefetch;
@property (nonatomic) BOOL isPrefetchDataReady;
@property (nonatomic) BOOL isLynxPoiListPageReady;
@property (copy, nonatomic) NSString *prefetchJson;
@property (retain, nonatomic) CLLocation *currentLocationInfo;
@property (copy, nonatomic) AWEPOISearchLynxModel *model;
@property (copy, nonatomic) id /* block */ poiCallback;
@property (copy, nonatomic) id /* block */ lynxCompletion;
@property (copy, nonatomic) id /* block */ userTypeChangedCallback;
@property (copy, nonatomic) id /* block */ titleChangeCallBack;
@property (copy, nonatomic) id /* block */ updatePublishTrackParams;
@property (retain, nonatomic) NSMapTable *subscriberDict;
@property (retain, nonatomic) NSLock *subscriberLock;
@property (copy, nonatomic) NSString *traceSessionIdStr;
@property (retain, nonatomic) UIViewController *vc;
@property (retain, nonatomic) NSMutableArray *injectPrefetchSetting;
@property (retain, nonatomic) NSMutableArray *injectGlobalPropsSetting;
@property (retain, nonatomic) NSMutableDictionary *paramPool;
@property (retain, nonatomic) UIViewController<AWELifeMultiCardServiceProtocol> *multiCardVC;
@property (copy, nonatomic) id /* block */ companyCouponCallback;
@property (nonatomic) BOOL shouldShowCompanyCoupon;
@property (copy, nonatomic) NSString *spuTabSchema;
@property (retain, nonatomic) NSMutableDictionary *publishAnchorInfoMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)setVc:(id)arg0;
- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:(id)arg0 callback:(id /* block */)arg1;
- (id)subscriberDict;
- (void)setSubscriberDict:(id)arg0;
- (void)subscriberBDXEvent;
- (BOOL)shouldShowCompanyCoupon;
- (void)setShouldShowCompanyCoupon:(BOOL)arg0;
- (id)base64StringWithString:(id)arg0;
- (id)traceSessionIdStr;
- (void)setMultiCardVC:(id)arg0;
- (id)publishAnchorInfoMap;
- (void)initiateLynxParameter;
- (void)p_initParamPool;
- (void)setUserTypeChangedCallback:(id /* block */)arg0;
- (void)setPoiCallback:(id /* block */)arg0;
- (void)setCompanyCouponCallback:(id /* block */)arg0;
- (void)setTitleChangeCallBack:(id /* block */)arg0;
- (void)setUpdatePublishTrackParams:(id /* block */)arg0;
- (void)setSpuTabSchema:(id)arg0;
- (void)setIsEnabledPrefetch:(BOOL)arg0;
- (void)setLynxCompletion:(id /* block */)arg0;
- (void)showSearchLocationViewControllerIfNeeded;
- (id)p_createSessionInfo;
- (id)locationLatiAndLodeInfoString;
- (void)p_injectParamPool;
- (BOOL)isEnabledPrefetch;
- (void)p_prefetchParamsWithLade:(id)arg0 lode:(id)arg1;
- (id)p_globalPropsValueWithSessionId:(id)arg0 lade:(id)arg1 lode:(id)arg2;
- (id /* block */)lynxCompletion;
- (id)multiCardVC;
- (id)spuTabSchema;
- (void)p_showMultiLynxCardPicker:(id /* block */)arg0;
- (void)p_showLynxLocationPicker;
- (void)buildLynxParameterToDict:(id)arg0 injectTarget:(long long)arg1;
- (void)prefetchLynxPOIDataWithParams:(id)arg0;
- (void)insertPublishParameterToDict:(id)arg0;
- (id)currentLocationInfo;
- (struct CLLocationCoordinate2D { double x0; double x1; })getLocationCoordinate2DInfoWithLocation:(id)arg0;
- (void)setTraceSessionIdStr:(id)arg0;
- (id /* block */)userTypeChangedCallback;
- (id)subscriberLock;
- (void)setIsLynxPoiListPageReady:(BOOL)arg0;
- (BOOL)isPrefetchDataReady;
- (id)prefetchJson;
- (void)resetPrefetchTags;
- (void)updateCurrentAnchorInfo:(id)arg0 isPOIorProduct:(BOOL)arg1 awemeCreateID:(id)arg2;
- (id)mergeAnchorContent:(id)arg0 withDefault:(id)arg1;
- (id /* block */)poiCallback;
- (id /* block */)companyCouponCallback;
- (id /* block */)titleChangeCallBack;
- (id /* block */)updatePublishTrackParams;
- (void)setIsPrefetchDataReady:(BOOL)arg0;
- (void)setPrefetchJson:(id)arg0;
- (BOOL)isLynxPoiListPageReady;
- (void)p_getCurrentLocationAndJumpToLocationPicker;
- (void)p_showPOILocationPicker;
- (void)setCurrentLocationInfo:(id)arg0;
- (void)requestCurrentLocationInfo:(id /* block */)arg0 callback:(id /* block */)arg1;
- (id)paramPool;
- (id)p_parseInjectParamsJsonArray;
- (void)setInjectPrefetchSetting:(id)arg0;
- (void)setInjectGlobalPropsSetting:(id)arg0;
- (id)injectGlobalPropsSetting;
- (id)injectPrefetchSetting;
- (void)p_constructLynxParameterToDict:(id)arg0 key:(id)arg1 localKey:(id)arg2 value:(id)arg3 isStatic:(BOOL)arg4 isForceRewrite:(BOOL)arg5;
- (void)setParamPool:(id)arg0;
- (void)mergeParams:(id)arg0 toDict:(id)arg1;
- (void)showLocationPickerWithModel:(id)arg0 lynxCompletion:(id /* block */)arg1;
- (void)initializeUserTypeChangedCallback:(id /* block */)arg0;
- (void)updatePageListInfoWithSearchSpuTabInfo:(BOOL)arg0 spuTabSchema:(id)arg1;
- (void)initializeSelectPOICallback:(id /* block */)arg0;
- (void)initializeSelectCompanyCouponCallback:(id /* block */)arg0;
- (void)initializeTitleInfoChangeCallback:(id /* block */)arg0;
- (void)initializePublishTrackParamsCallback:(id /* block */)arg0;
- (void)p_filterEmptyValue:(id)arg0;
- (void)setSubscriberLock:(id)arg0;
- (void)setPublishAnchorInfoMap:(id)arg0;
- (void)setModel:(id)arg0;
- (void)cleanUp;
- (void).cxx_destruct;
- (id)model;
- (void)setUp;
- (id)vc;

@end