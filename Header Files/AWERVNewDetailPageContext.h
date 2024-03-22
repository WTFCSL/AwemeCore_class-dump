//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, AWERVNewDetailPlayVideoViewController, AWERVNewDetailPerformanceMonitor, NSDictionary, AWERelatedVideoQualityMonitor, UIViewController, AWERVNewDetailDataController;

@interface AWERVNewDetailPageContext : AWEPageContext {
    BOOL _isEnteringAwemeDetail;
    BOOL _isExitingAwemeDetail;
    BOOL _shouldUpdateInteractiveInfo;
    BOOL _preventPauseWhenDisappear;
    BOOL _noImmediatelyPlay;
    BOOL _isExpandInfo;
    NSString *_referString;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_scene;
    NSString *_previousPage;
    NSString *_fromPage;
    NSDictionary *_logExtraDict;
    double _playSpeed;
    UIViewController *_container;
    AWEAwemeModel *_entranceAwemeModel;
    NSString *_entranceAwemeId;
    AWERVNewDetailPerformanceMonitor *_loadRecorder;
    AWERelatedVideoQualityMonitor *_qualityMonitor;
    long long _currentClickIndex;
    AWEAwemeModel *_clickCellModel;
    AWERVNewDetailPlayVideoViewController *_currentClickVideoController;
    AWERVNewDetailDataController *_dataController;
}

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) double playSpeed;
@property (weak, nonatomic) UIViewController *container;
@property (retain, nonatomic) AWEAwemeModel *entranceAwemeModel;
@property (copy, nonatomic) NSString *entranceAwemeId;
@property (retain, nonatomic) AWERVNewDetailPerformanceMonitor *loadRecorder;
@property (retain, nonatomic) AWERelatedVideoQualityMonitor *qualityMonitor;
@property (nonatomic) BOOL isEnteringAwemeDetail;
@property (nonatomic) BOOL isExitingAwemeDetail;
@property (nonatomic) long long currentClickIndex;
@property (retain, nonatomic) AWEAwemeModel *clickCellModel;
@property (weak, nonatomic) AWERVNewDetailPlayVideoViewController *currentClickVideoController;
@property (retain, nonatomic) AWERVNewDetailDataController *dataController;
@property (nonatomic) BOOL shouldUpdateInteractiveInfo;
@property (nonatomic) BOOL preventPauseWhenDisappear;
@property (nonatomic) BOOL noImmediatelyPlay;
@property (nonatomic) BOOL isExpandInfo;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (void)setDataController:(id)arg0;
- (void)setFromPage:(id)arg0;
- (void)setPlaySpeed:(double)arg0;
- (double)playSpeed;
- (void)setEntranceAwemeModel:(id)arg0;
- (id)entranceAwemeModel;
- (BOOL)isPortraitVideo:(id)arg0;
- (void)setCurrentClickIndex:(long long)arg0;
- (id)entranceAwemeId;
- (long long)currentClickIndex;
- (void)setClickCellModel:(id)arg0;
- (BOOL)isEnteringAwemeDetail;
- (void)setEntranceAwemeId:(id)arg0;
- (id)loadRecorder;
- (void)setNoImmediatelyPlay:(BOOL)arg0;
- (void)setIsEnteringAwemeDetail:(BOOL)arg0;
- (BOOL)noImmediatelyPlay;
- (void)setLoadRecorder:(id)arg0;
- (BOOL)isExitingAwemeDetail;
- (BOOL)isExpandInfo;
- (void)setIsExpandInfo:(BOOL)arg0;
- (void)setShouldUpdateInteractiveInfo:(BOOL)arg0;
- (void)setCurrentClickVideoController:(id)arg0;
- (id)clickCellModel;
- (void)setIsExitingAwemeDetail:(BOOL)arg0;
- (id)currentClickVideoController;
- (BOOL)shouldUpdateInteractiveInfo;
- (BOOL)preventPauseWhenDisappear;
- (void)setPreventPauseWhenDisappear:(BOOL)arg0;
- (id)container;
- (id)init;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)scene;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)dataController;
- (id)fromPage;
- (id)qualityMonitor;
- (void)setQualityMonitor:(id)arg0;

@end
