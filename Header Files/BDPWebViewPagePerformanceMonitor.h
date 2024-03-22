//
//     Generated by private class-dump
//

@class BDPWebViewPage, BDPPagePerformanceMonitorEvent;

@interface BDPWebViewPagePerformanceMonitor : NSObject {
    BOOL _htmlLoadedWhileUsing;
    BDPWebViewPage *_page;
    BDPPagePerformanceMonitorEvent *_create;
    BDPPagePerformanceMonitorEvent *_loadPageFrameHTML;
    BDPPagePerformanceMonitorEvent *_readPageFrameJS;
    BDPPagePerformanceMonitorEvent *_evalPageFrameJS;
    BDPPagePerformanceMonitorEvent *_readPathFrameJS;
    BDPPagePerformanceMonitorEvent *_evalPathFrameJS;
}

@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *create;
@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *loadPageFrameHTML;
@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *readPageFrameJS;
@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *evalPageFrameJS;
@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *readPathFrameJS;
@property (retain, nonatomic) BDPPagePerformanceMonitorEvent *evalPathFrameJS;
@property (nonatomic) BOOL htmlLoadedWhileUsing;
@property (weak, nonatomic) BDPWebViewPage *page;

- (id)loadPageFrameHTML;
- (void)reportLongTaskWithLongTimes:(id)arg0 totalTime:(id)arg1;
- (id)readPageFrameJS;
- (id)evalPageFrameJS;
- (void)monitorWebviewTimelineEvent;
- (void)reportLoadTimePageFrameWithLocalPkg:(int)arg0;
- (id)readPathFrameJS;
- (id)evalPathFrameJS;
- (void)reportLoadTimePathFrameWithLocalPkg:(int)arg0;
- (void)monitorPageLoadDetailTimeLineData;
- (BOOL)htmlLoadedWhileUsing;
- (void)reportPagePreloadUsageWithIsStartPage:(BOOL)arg0;
- (void)setHtmlLoadedWhileUsing:(BOOL)arg0;
- (void)setLoadPageFrameHTML:(id)arg0;
- (void)setReadPageFrameJS:(id)arg0;
- (void)setEvalPageFrameJS:(id)arg0;
- (void)setReadPathFrameJS:(id)arg0;
- (void)setEvalPathFrameJS:(id)arg0;
- (id)init;
- (id)page;
- (void).cxx_destruct;
- (void)setPage:(id)arg0;
- (id)create;
- (id)initWithPage:(id)arg0;
- (void)setCreate:(id)arg0;

@end
