//
//     Generated by private class-dump
//

@class IESECMallInnerFeedPrefetch, NSString, NSDictionary, NSArray, IESECQualityInfoV2;

@interface IESECMallInnerFeedNode : NSObject {
    BOOL _mute;
    IESECQualityInfoV2 *_infoQ;
    NSString *_productID;
    NSString *_outflowOrder;
    NSString *_previousPage;
    NSDictionary *_recPassParams;
    NSDictionary *_trackParams;
    NSString *_pageName;
    NSString *_enterFromMerge;
    NSString *_enterFrom;
    NSString *_carrierSource;
    NSString *_sourcePage;
    NSString *_productSourcePage;
    NSString *_tabName;
    NSString *_tabID;
    NSString *_deduplicationFilter;
    NSString *_resourceID;
    NSString *_ecomSceneID;
    long long _innerType;
    NSArray *_lastScreenProducts;
    NSArray *_preloadCards;
    IESECMallInnerFeedPrefetch *_mallFeedPrefetch;
    NSString *_cartURL;
    long long _pageCursor;
    long long _outerCardType;
    NSString *_firstRequestID;
    NSDictionary *_rawParams;
    double _routeStart;
    double _requestStartPack;
    double _requestEndPack;
    double _requestStartFeed;
    double _requestEndFeed;
    double _pageShow;
    NSDictionary *_productDict;
}

@property (copy, nonatomic) NSString *themeBgURL;
@property (copy, nonatomic) NSString *themeLabel;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *activityBg;
@property (copy, nonatomic) NSString *activityTitle;
@property (copy, nonatomic) NSString *activitySubtitle;
@property (copy, nonatomic) NSString *activitySubtitleColor;
@property (nonatomic) BOOL needRequestActivity;
@property (copy, nonatomic) NSString *outflowEcomType;
@property (copy, nonatomic) NSString *innerActions;
@property (copy, nonatomic) NSString *queryFilters;
@property (weak, nonatomic) IESECQualityInfoV2 *infoQ;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *outflowOrder;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *recPassParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *carrierSource;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *productSourcePage;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) BOOL mute;
@property (copy, nonatomic) NSString *deduplicationFilter;
@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *ecomSceneID;
@property (nonatomic) long long innerType;
@property (copy, nonatomic) NSArray *lastScreenProducts;
@property (copy, nonatomic) NSArray *preloadCards;
@property (retain, nonatomic) IESECMallInnerFeedPrefetch *mallFeedPrefetch;
@property (copy, nonatomic) NSString *cartURL;
@property (nonatomic) long long pageCursor;
@property (nonatomic) long long outerCardType;
@property (copy, nonatomic) NSString *firstRequestID;
@property (copy, nonatomic) NSDictionary *rawParams;
@property (nonatomic) double routeStart;
@property (nonatomic) double requestStartPack;
@property (nonatomic) double requestEndPack;
@property (nonatomic) double requestStartFeed;
@property (nonatomic) double requestEndFeed;
@property (nonatomic) double pageShow;
@property (retain, nonatomic) NSDictionary *productDict;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)trackParams;
- (void)setSourcePage:(id)arg0;
- (void)setTrackParams:(id)arg0;
- (id)enterFromMerge;
- (void)setEnterFromMerge:(id)arg0;
- (id)rawParams;
- (void)setRawParams:(id)arg0;
- (void)setTabID:(id)arg0;
- (id)sourcePage;
- (id)themeLabel;
- (void)setThemeLabel:(id)arg0;
- (id)ecomSceneID;
- (long long)pageCursor;
- (void)setPageCursor:(long long)arg0;
- (void)setInnerType:(long long)arg0;
- (long long)innerType;
- (id)preloadCards;
- (void)setPreloadCards:(id)arg0;
- (id)activityBg;
- (void)setActivityBg:(id)arg0;
- (double)pageShow;
- (void)setPageShow:(double)arg0;
- (id)carrierSource;
- (id)activitySubtitleColor;
- (id)mallFeedPrefetch;
- (long long)outerCardType;
- (void)setEcomSceneID:(id)arg0;
- (void)setOutflowEcomType:(id)arg0;
- (id)outflowOrder;
- (id)outflowEcomType;
- (id)recPassParams;
- (id)productSourcePage;
- (void)setLastScreenProducts:(id)arg0;
- (id)infoQ;
- (double)requestStartFeed;
- (double)requestEndFeed;
- (id)innerActions;
- (id)queryFilters;
- (id)lastScreenProducts;
- (id)productDict;
- (double)requestStartPack;
- (double)requestEndPack;
- (void)setInnerActions:(id)arg0;
- (id)cartURL;
- (void)setCartURL:(id)arg0;
- (void)setInfoQ:(id)arg0;
- (void)setOutflowOrder:(id)arg0;
- (void)setRecPassParams:(id)arg0;
- (void)setCarrierSource:(id)arg0;
- (void)setProductSourcePage:(id)arg0;
- (id)deduplicationFilter;
- (void)setDeduplicationFilter:(id)arg0;
- (void)setMallFeedPrefetch:(id)arg0;
- (void)setOuterCardType:(long long)arg0;
- (id)firstRequestID;
- (void)setFirstRequestID:(id)arg0;
- (void)setRequestStartPack:(double)arg0;
- (void)setRequestEndPack:(double)arg0;
- (void)setRequestStartFeed:(double)arg0;
- (void)setRequestEndFeed:(double)arg0;
- (void)setProductDict:(id)arg0;
- (id)themeBgURL;
- (void)setThemeBgURL:(id)arg0;
- (BOOL)needRequestActivity;
- (void)setActivitySubtitleColor:(id)arg0;
- (void)setNeedRequestActivity:(BOOL)arg0;
- (void)setQueryFilters:(id)arg0;
- (id)productID;
- (BOOL)mute;
- (void)setResourceID:(id)arg0;
- (void).cxx_destruct;
- (id)resourceID;
- (void)setProductID:(id)arg0;
- (id)activitySubtitle;
- (void)setActivityTitle:(id)arg0;
- (id)activityTitle;
- (void)setActivitySubtitle:(id)arg0;
- (void)setMute:(BOOL)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)bgColor;
- (void)setBgColor:(id)arg0;
- (double)routeStart;
- (void)setRouteStart:(double)arg0;
- (id)tabID;
- (void)setTabName:(id)arg0;
- (id)tabName;
- (void)setPageName:(id)arg0;
- (id)pageName;

@end
