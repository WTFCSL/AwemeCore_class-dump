//
//     Generated by private class-dump
//

@class NSString;

@interface AWECampaignTaskReportManager : HTSService <AWECampaignTaskReportService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackLogWithKey:(id)arg0 message:(id)arg1;
- (void)reportTask:(id)arg0 uniqueID:(id)arg1 extra:(id)arg2 completion:(id /* block */)arg3;
- (void)reportTask:(id)arg0 taskID:(id)arg1 uniqueID:(id)arg2 host:(id)arg3 path:(id)arg4 extra:(id)arg5 completion:(id /* block */)arg6;

@end
