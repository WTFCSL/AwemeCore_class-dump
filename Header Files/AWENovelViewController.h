//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSDate;

@interface AWENovelViewController : AWENovelWebContainerViewController <BDNovelWebContainerViewDelegate> {
    BOOL _hasLoadingError;
    BOOL _viewAppear;
    BOOL _should_append_common_param;
    double _stayTime;
    NSDate *_stayTimeDate;
    NSDictionary *_params;
    NSString *_url;
    long long _readChapterCount;
}

@property (nonatomic) double stayTime;
@property (retain, nonatomic) NSDate *stayTimeDate;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) long long readChapterCount;
@property (nonatomic) BOOL should_append_common_param;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEndedByAppWillEnterBackground;
- (void)trackStartedByAppWillEnterForground;
- (long long)readChapterCount;
- (void)setReadChapterCount:(long long)arg0;
- (void)setStayTime:(double)arg0;
- (double)stayTime;
- (void)resetStayTime;
- (id)genContanierParams:(id)arg0;
- (void)registerObserve;
- (void)postBatteryInfoNotification;
- (void)startTrackStayTime;
- (void)stopTrackStayTime;
- (void)didChangeBatteryState:(id)arg0;
- (void)didChangeBatteryLevel:(id)arg0;
- (void)didChangeNovelChapter:(id)arg0;
- (void)didChangeStatusBarFrame:(id)arg0;
- (void)innerFireEvent:(id)arg0 params:(id)arg1;
- (void)tt_endUpdataData;
- (void)tt_endUpdataData:(BOOL)arg0 error:(id)arg1;
- (void)setStayTimeDate:(id)arg0;
- (id)stayTimeDate;
- (BOOL)tt_hasValidateData;
- (BOOL)should_append_common_param;
- (void)setShould_append_common_param:(BOOL)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setUrl:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)params;
- (BOOL)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewDidLoad;
- (id)url;
- (void)webView:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg0;
- (void)setParams:(id)arg0;

@end