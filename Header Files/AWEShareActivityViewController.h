//
//     Generated by private class-dump
//

@class NSString, AWEShareActivityView, AWEShareActivityModel, NSTimer, AWEParallelDownloader;

@interface AWEShareActivityViewController : UIViewController <AWEShareActivityViewDelegate> {
    BOOL _isCanceled;
    BOOL _isFailed;
    BOOL _autoPause;
    BOOL _isDowload;
    id /* block */ _completionHandler;
    AWEShareActivityModel *_model;
    AWEParallelDownloader *_currentDownloader;
    AWEShareActivityView *_activityView;
    NSTimer *_fakeProgressTimer;
    double _fakeProgress;
}

@property (retain, nonatomic) AWEShareActivityModel *model;
@property (retain, nonatomic) AWEParallelDownloader *currentDownloader;
@property (retain, nonatomic) AWEShareActivityView *activityView;
@property (retain, nonatomic) NSTimer *fakeProgressTimer;
@property (nonatomic) double fakeProgress;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) BOOL isFailed;
@property (nonatomic) BOOL autoPause;
@property (nonatomic) BOOL isDowload;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickCloseButton;
- (BOOL)autoPause;
- (void)handleConnectionChanged:(id)arg0;
- (void)playIfNeed;
- (void)clickShareButton;
- (id)currentDownloader;
- (void)setCurrentDownloader:(id)arg0;
- (void)setAutoPause:(BOOL)arg0;
- (void)requestVideoInfo;
- (void)pauseIfNeed;
- (void)setFakeProgressTimer:(id)arg0;
- (void)fallbackOperation;
- (void)beginDownloadWithURLList:(id)arg0;
- (double)fakeProgress;
- (void)setFakeProgress:(double)arg0;
- (void)setIsDowload:(BOOL)arg0;
- (BOOL)isDowload;
- (id)fakeProgressTimer;
- (BOOL)isCanceled;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (BOOL)isFailed;
- (void)updateProgress;
- (void)invalidateTimer;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setIsFailed:(BOOL)arg0;
- (id)model;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)appDidBecomeActive:(id)arg0;
- (void)setIsCanceled:(BOOL)arg0;
- (id /* block */)completionHandler;
- (void)setActivityView:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)destinationURL;
- (void)dismissWithCompletion:(id /* block */)arg0;
- (void)appWillResignActive:(id)arg0;
- (id)activityView;
- (void)setupUI;

@end