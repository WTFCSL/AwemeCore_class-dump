//
//     Generated by private class-dump
//

@interface LBLelinkKit : NSObject

+ (void)setAppGroupId:(id)arg0;
+ (BOOL)authWithAppid:(id)arg0 secretKey:(id)arg1 error:(id *)arg2;
+ (void)setUserID:(id)arg0 token:(id)arg1;
+ (void)setUserID:(id)arg0 token:(id)arg1 nickName:(id)arg2;
+ (void)setUserID:(id)arg0 token:(id)arg1 nickName:(id)arg2 uid:(id)arg3;
+ (void)setUserID:(id)arg0 token:(id)arg1 nickName:(id)arg2 uid:(id)arg3 ehid:(id)arg4;
+ (void)setUserID:(id)arg0 token:(id)arg1 nickName:(id)arg2 uid:(id)arg3 ehid:(id)arg4 otherParam:(id)arg5;
+ (void)enableCloudLogFileSave:(BOOL)arg0 cloudLogPath:(id)arg1;
+ (void)enableLog:(BOOL)arg0;
+ (void)searchAndReportDevices;
+ (void)registerAsInteractiveAdObserver;
+ (void)clearUserID;
+ (id)getinterestsArray:(id *)arg0;
+ (void)enableLocalNotification:(BOOL)arg0 alertTitle:(id)arg1 alertBody:(id)arg2;
+ (void)enableLogFileSave:(BOOL)arg0;
+ (void)logFileUploadToLeBoServerWithProblemType:(long long)arg0 userContactInfo:(id)arg1 callBlock:(id /* block */)arg2;
+ (void)meetingLogFileUploadToLeboServerWithType:(long long)arg0 userContactInfo:(id)arg1 meetingInfo:(id)arg2 callback:(id /* block */)arg3;
+ (void)enablePhoneReport:(id)arg0 desensitization:(id)arg1 enable:(BOOL)arg2;
+ (id)desensitizationString:(id)arg0;
+ (id)cloudLogPath;
+ (BOOL)cloudLogEnable;
+ (void)connectIM;
+ (id)p_funcSimplifyIsOpen;
+ (void)initialize;
+ (void)setUserID:(id)arg0;

@end
