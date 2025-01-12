//
//     Generated by private class-dump
//

@class AWEExportCombineBusinessEventConfigModel, NSMutableArray;

@interface AWEExportMonitor : NSObject {
    AWEExportCombineBusinessEventConfigModel *_ecbeConfigModel;
    NSMutableArray *_hookEvents;
}

@property (retain, nonatomic) AWEExportCombineBusinessEventConfigModel *ecbeConfigModel;
@property (retain, nonatomic) NSMutableArray *hookEvents;

+ (id)sharedInstance;

- (void)reportOutWithUrl:(id)arg0 success:(BOOL)arg1 resultMessage:(id)arg2;
- (id)generateRouteOutSession;
- (void)reportBackIfNeededIsCold:(BOOL)arg0;
- (BOOL)enableHookEvent;
- (id)hookEventList;
- (BOOL)reportOutHookEventV3:(id)arg0 params:(id)arg1;
- (id)ecbeConfigModel;
- (void)setExportCombineBusinessEventWithSession:(id)arg0 time:(double)arg1;
- (void)reportExportCombineBusinessEventWithSession:(id)arg0 time:(double)arg1;
- (void)reportExportCombineBusinessEventIfNeed;
- (id)hookEvents;
- (void)updateExportCombineBusinessEventIfNeed;
- (id)getExportCombineRouteBizEventWithTime:(double)arg0;
- (void)setEcbeConfigModel:(id)arg0;
- (void)setHookEvents:(id)arg0;
- (void).cxx_destruct;
- (void)setup;
- (void)appWillEnterForeground;

@end
