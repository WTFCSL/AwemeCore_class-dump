//
//     Generated by private class-dump
//

@class NSDate, AWEWebViewController;

@interface AWEOPEletronicStampManager : NSObject {
    BOOL _loadingDone;
    BOOL _resignActiveDuringLoading;
    AWEWebViewController *_webViewController;
    long long _loadReportDuration;
    NSDate *_startDate;
}

@property (weak, nonatomic) AWEWebViewController *webViewController;
@property (nonatomic) BOOL loadingDone;
@property (nonatomic) long long loadReportDuration;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) BOOL resignActiveDuringLoading;

+ (id)sharedInstance;

- (void)openEletronicStampPage:(id)arg0;
- (void)onApplicationWillResignActiveNotification;
- (void)setLoadingDone:(BOOL)arg0;
- (void)setResignActiveDuringLoading:(BOOL)arg0;
- (long long)loadReportDuration;
- (void)setLoadReportDuration:(long long)arg0;
- (void)reportLoadTimeout;
- (BOOL)loadingDone;
- (void)reportLoadFailed:(id)arg0;
- (void)reportLoadResult:(long long)arg0 errorMsg:(id)arg1;
- (BOOL)resignActiveDuringLoading;
- (void)onEStampLoadSuccess;
- (void)onEStampSingleTap;
- (void)onEStampRecognized:(BOOL)arg0 errorMsg:(id)arg1;
- (void)onEStampTransformSuccess;
- (id)init;
- (void).cxx_destruct;
- (id)startDate;
- (void)setStartDate:(id)arg0;
- (id)webViewController;
- (void)setWebViewController:(id)arg0;

@end