//
//     Generated by private class-dump
//

@class IESECUserTrackerPageContext, IESECMarketingApi, NSString;

@interface IESECMarketingManager : NSObject <IESECUserTrackerMessage> {
    BOOL _openWithSaaS;
    IESECMarketingApi *_api;
    IESECUserTrackerPageContext *_currentPageContext;
    IESECUserTrackerPageContext *_livePageContext;
}

@property (retain, nonatomic) IESECMarketingApi *api;
@property (nonatomic) BOOL openWithSaaS;
@property (retain, nonatomic) IESECUserTrackerPageContext *currentPageContext;
@property (retain, nonatomic) IESECUserTrackerPageContext *livePageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)currentPageContext;
- (void)setCurrentPageContext:(id)arg0;
- (double)getCurrentTimeStamp;
- (void)postAction:(id)arg0 type:(long long)arg1 atPage:(id)arg2;
- (BOOL)openWithSaaS;
- (void)setOpenWithSaaS:(BOOL)arg0;
- (void)enterToPage:(id)arg0;
- (void)leaveFromPage:(id)arg0;
- (id)fetchActionConfigMap;
- (void)initParamsWithApi:(id)arg0;
- (id)actionHistoryWithInfo:(id)arg0 config:(id)arg1;
- (void)postActionToServerWithHistory:(id)arg0;
- (void)refreshStateWithActionHistory:(id)arg0;
- (id)getNeedReportRulesWithHistory:(id)arg0;
- (id)getRequestParamsWithHistory:(id)arg0 rules:(id)arg1;
- (BOOL)serverSwitchOnWithHistory:(id)arg0 ruleInfo:(id)arg1;
- (void)postAction:(id)arg0 type:(long long)arg1 scene:(id)arg2 sceneId:(id)arg3 anchorId:(id)arg4 api:(id)arg5;
- (void)setLivePageContext:(id)arg0;
- (id)livePageContext;
- (BOOL)isLoginAweme;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)api;
- (void)setApi:(id)arg0;

@end
