//
//     Generated by private class-dump
//

@class NSMutableDictionary, BDPPromise, BDPBootRouteInfoRecord, NSMutableArray, BDPAppPageManager;

@interface BDPNativeAppTask : BDPBasicAppTask {
    BOOL _isFirstFrameShowed;
    BOOL _isLCPArrived;
    BOOL _readyToStartDynamicContainer;
    BDPAppPageManager *_pageManager;
    double _coldBootLcpDuration;
    unsigned long long _webviewRequestCountBeforeLCP;
    BDPPromise *_lineUpPromise;
    BDPBootRouteInfoRecord *_bootRouteInfo;
    NSMutableArray *_routeIDList;
    NSMutableArray *_pagePathList;
    NSMutableDictionary *_routeToIDListDic;
    struct CGSize { double width; double height; } _currentWindowSize;
}

@property (retain, nonatomic) BDPAppPageManager *pageManager;
@property (retain, nonatomic) NSMutableArray *routeIDList;
@property (retain, nonatomic) NSMutableArray *pagePathList;
@property (retain, nonatomic) NSMutableDictionary *routeToIDListDic;
@property (retain, nonatomic) BDPBootRouteInfoRecord *bootRouteInfo;
@property (nonatomic) BOOL isFirstFrameShowed;
@property (nonatomic) BOOL isLCPArrived;
@property (nonatomic) double coldBootLcpDuration;
@property (nonatomic) BOOL readyToStartDynamicContainer;
@property (nonatomic) unsigned long long webviewRequestCountBeforeLCP;
@property (retain, nonatomic) BDPPromise *lineUpPromise;
@property (nonatomic) struct CGSize { double width; double height; } currentWindowSize;

- (id)pageManager;
- (void)setPageManager:(id)arg0;
- (id)lineUpPromise;
- (void)setCurrentWindowSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)isFirstFrameShowed;
- (id)routeIDList;
- (id)pagePathList;
- (id)addRouteWithCurrnet:(id)arg0 to:(id)arg1 pagePath:(id)arg2;
- (id)bootRouteInfo;
- (void)setReadyToStartDynamicContainer:(BOOL)arg0;
- (BOOL)readyToStartDynamicContainer;
- (void)resetBootRouteInfoRecord:(id)arg0;
- (void)setLineUpPromise:(id)arg0;
- (BOOL)isLCPArrived;
- (double)coldBootLcpDuration;
- (void)addRouteID:(id)arg0 pagePath:(id)arg1;
- (id)routeToPageInfoWithID:(id)arg0;
- (void)setBootRouteInfo:(id)arg0;
- (void)setIsFirstFrameShowed:(BOOL)arg0;
- (void)setIsLCPArrived:(BOOL)arg0;
- (void)setColdBootLcpDuration:(double)arg0;
- (unsigned long long)webviewRequestCountBeforeLCP;
- (void)setWebviewRequestCountBeforeLCP:(unsigned long long)arg0;
- (void)setRouteIDList:(id)arg0;
- (void)setPagePathList:(id)arg0;
- (id)routeToIDListDic;
- (void)setRouteToIDListDic:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)currentContext;
- (id)initWithUniqueID:(id)arg0;
- (struct CGSize { double x0; double x1; })currentWindowSize;

@end
