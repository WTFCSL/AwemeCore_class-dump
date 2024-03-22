//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEPlayInteractionSkipInfoRecordingController : AWEPlayInteractionBaseController {
    BOOL _shouldReportSkipInfo;
    BOOL _hasLoop;
    NSMutableDictionary *_skipInfoDic;
}

@property (nonatomic) BOOL shouldReportSkipInfo;
@property (nonatomic) BOOL hasLoop;
@property (retain, nonatomic) NSMutableDictionary *skipInfoDic;

- (void)setupEvent;
- (void)userInteractionWithType:(unsigned long long)arg0;
- (void)userInteractionNotification:(id)arg0;
- (id)skipInfoDic;
- (void)cacheSkipInfoIfNeeded;
- (void)setHasLoop:(BOOL)arg0;
- (BOOL)shouldReportSkipInfo;
- (void)didStartEnterProfile:(id)arg0;
- (BOOL)hasLoop;
- (id)sceneWhiteListForReport;
- (void)setShouldReportSkipInfo:(BOOL)arg0;
- (void)setSkipInfoDic:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (void)didEndDisplaying;

@end
