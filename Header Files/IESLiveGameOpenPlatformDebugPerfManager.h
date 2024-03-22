//
//     Generated by private class-dump
//

@class IESLiveGameOpenPlatformDebugPerfMonitorViewModel, NSString, IESLiveGameOpenPlatformDebugPerfViewController, IESLiveGCDTimer, IESLiveGameOpenPlatformDebugPerfAPI, IESLiveGameOpenPlatformDebugPerfMonitor, NSMutableArray;

@interface IESLiveGameOpenPlatformDebugPerfManager : NSObject {
    BOOL _isShowingPanel;
    BOOL _isMonitoring;
    BOOL _isTesting;
    NSString *_reportId;
    IESLiveGameOpenPlatformDebugPerfViewController *_perfFloatViewController;
    IESLiveGameOpenPlatformDebugPerfMonitor *_perfMonitor;
    IESLiveGameOpenPlatformDebugPerfAPI *_api;
    IESLiveGCDTimer *_timer;
    NSMutableArray *_pendingUploadModels;
    IESLiveGameOpenPlatformDebugPerfMonitorViewModel *_viewModel;
}

@property (nonatomic) BOOL isShowingPanel;
@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) BOOL isTesting;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfViewController *perfFloatViewController;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfMonitor *perfMonitor;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfAPI *api;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSMutableArray *pendingUploadModels;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfMonitorViewModel *viewModel;
@property (copy, nonatomic) NSString *reportId;

- (BOOL)isShowingPanel;
- (void)setPerfMonitor:(id)arg0;
- (id)perfMonitor;
- (void)setIsShowingPanel:(BOOL)arg0;
- (void)tryStopPerformanceTest;
- (void)setPerfFloatViewController:(id)arg0;
- (id)perfFloatViewController;
- (void)_setupPerformanceTestEnv;
- (void)stopPerformanceTest;
- (void)_clearPerformanceTestEnv;
- (void)setPendingUploadModels:(id)arg0;
- (void)_loopAction;
- (id)pendingUploadModels;
- (void)_uploadPerformanceDataArray:(id)arg0 completion:(id /* block */)arg1;
- (void)showPerformancePanel;
- (void)hidePerformancePanel;
- (void)startPerformanceMonitor;
- (void)stopPerformanceMonitor;
- (void)startPerformanceTestWithAppVersion:(id)arg0 reportId:(id)arg1;
- (id)timer;
- (void).cxx_destruct;
- (BOOL)isMonitoring;
- (void)setViewModel:(id)arg0;
- (void)setIsTesting:(BOOL)arg0;
- (void)setTimer:(id)arg0;
- (BOOL)isTesting;
- (id)viewModel;
- (id)reportId;
- (void)setReportId:(id)arg0;
- (id)api;
- (void)setIsMonitoring:(BOOL)arg0;
- (void)setApi:(id)arg0;

@end