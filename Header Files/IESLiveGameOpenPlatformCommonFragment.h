//
//     Generated by private class-dump
//

@class IESLiveGameOpenPlatformScoreServiceCommonImpl, IESLiveOpenPlatformCrashRemedyServiceImpl, IESLiveOpenPlatformDebugService, IESLiveOpenPlatformViolationServiceImpl, IESLiveOpenPlatformExplainCardServiceImpl, IESLiveGameOpenPlatformRevenueService, IESLiveXPlayAppManager, IESLiveGameOpenPlatformReportFeedbackService, IESLiveGameOpenPlatformInteractControlManager;

@interface IESLiveGameOpenPlatformCommonFragment : IESLiveRoomComponent {
    IESLiveGameOpenPlatformReportFeedbackService *_reportService;
    IESLiveGameOpenPlatformRevenueService *_revenueService;
    IESLiveOpenPlatformDebugService *_debugService;
    IESLiveOpenPlatformViolationServiceImpl *_violationService;
    IESLiveOpenPlatformCrashRemedyServiceImpl *_crashRemedyService;
    IESLiveGameOpenPlatformInteractControlManager *_interactControlService;
    IESLiveOpenPlatformExplainCardServiceImpl *_explainCardService;
    IESLiveGameOpenPlatformScoreServiceCommonImpl *_scoreService;
    IESLiveXPlayAppManager *_xplayService;
}

@property (retain, nonatomic) IESLiveGameOpenPlatformReportFeedbackService *reportService;
@property (retain, nonatomic) IESLiveGameOpenPlatformRevenueService *revenueService;
@property (retain, nonatomic) IESLiveOpenPlatformDebugService *debugService;
@property (retain, nonatomic) IESLiveOpenPlatformViolationServiceImpl *violationService;
@property (retain, nonatomic) IESLiveOpenPlatformCrashRemedyServiceImpl *crashRemedyService;
@property (retain, nonatomic) IESLiveGameOpenPlatformInteractControlManager *interactControlService;
@property (retain, nonatomic) IESLiveOpenPlatformExplainCardServiceImpl *explainCardService;
@property (retain, nonatomic) IESLiveGameOpenPlatformScoreServiceCommonImpl *scoreService;
@property (retain, nonatomic) IESLiveXPlayAppManager *xplayService;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (id)reportService;
- (void)setReportService:(id)arg0;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)_loadScoreService;
- (void)_unloadScoreService;
- (id)explainCardService;
- (void)setRevenueService:(id)arg0;
- (id)revenueService;
- (void)setDebugService:(id)arg0;
- (id)debugService;
- (void)setViolationService:(id)arg0;
- (id)violationService;
- (void)setCrashRemedyService:(id)arg0;
- (id)crashRemedyService;
- (void)setInteractControlService:(id)arg0;
- (id)interactControlService;
- (void)setExplainCardService:(id)arg0;
- (void)setScoreService:(id)arg0;
- (id)scoreService;
- (void)setXplayService:(id)arg0;
- (id)xplayService;
- (void).cxx_destruct;

@end