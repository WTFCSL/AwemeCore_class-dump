//
//     Generated by private class-dump
//

@class NSString;

@interface LBLogFileManage : NSObject {
    BOOL _isEnableLog;
    BOOL _isEnableCloudLog;
    NSString *_cloudPath;
}

@property (nonatomic) BOOL isEnableLog;
@property (nonatomic) BOOL isEnableCloudLog;
@property (retain, nonatomic) NSString *cloudPath;

+ (id)shareLogFileManage;
+ (void)logOutput:(id)arg0 level:(id)arg1;
+ (void)logReportAskNeedNowReport;
+ (void)logUploadWithEid:(id)arg0 problemType:(long long)arg1 phoneNum:(id)arg2 callBlock:(id /* block */)arg3;
+ (void)logUploadWithEid:(id)arg0 problemType:(long long)arg1 phoneNum:(id)arg2 meetingInfo:(id)arg3 callback:(id /* block */)arg4;
+ (id)integralMeetingCloudLogsFilePath;
+ (BOOL)logUploadAuthorityWithEt:(id)arg0;
+ (void)logUploadWithEid:(id)arg0 et:(id)arg1 ls:(id)arg2 callBlock:(id /* block */)arg3;
+ (id)getCurrentCreateLelinkKitLogFile;
+ (id)getNextCreateLelinkKitLogFile;
+ (void)updateLelinkKitLogFileLastIndex;
+ (id)getAbnormalLelinkKitLogFileIsCreate:(BOOL)arg0;
+ (BOOL)allowUploadLogChannel;
+ (void)logUploadWithEid:(id)arg0 et:(id)arg1 phoneNum:(id)arg2 extraInfo:(id)arg3 callBlock:(id /* block */)arg4;
+ (id)getMergeLelinkKitLogFile;
+ (BOOL)allowUploadLogTimer:(id)arg0;
+ (id)getLelinkKitLogCachesDirectoryWithIsCreate:(BOOL)arg0;
+ (id)getLelinkKitLogFileWithIndex:(long long)arg0 isCreate:(BOOL)arg1;
+ (void)abnormalLogOutput:(id)arg0 level:(id)arg1;
+ (void)logUploadWithEid:(id)arg0 et:(id)arg1 phoneNum:(id)arg2 callBlock:(id /* block */)arg3;
+ (id)appGroupURLForComponent:(id)arg0 appGroupId:(id)arg1;
+ (void)logFileCreatedAppExtToDoucumentFileWithAppGroupId:(id)arg0 appendingPathComponent:(id)arg1;
+ (void)logFileCopyAppExtToDeviceFileWithAppGroupId:(id)arg0 appendingPathComponent:(id)arg1;
+ (BOOL)copyMissFile:(id)arg0 toPath:(id)arg1;
+ (id)appGroupURL:(id)arg0;
+ (id)uploadCloudLogsPath;
+ (id)uploadLogsPath;
+ (id)uploadLogsPathMirror;
+ (void)logFileCopyMirrorExtToDeviceFileWithAppGroupId:(id)arg0;
+ (void)logFileExtensionWithLogString:(id)arg0 fileLogPath:(id)arg1 groupId:(id)arg2;
+ (id)getLelinkKitMirrorLogCachesDirectoryWithIsCreate:(BOOL)arg0;
+ (id)getLelinkKitMirrorLogFileIsCreate:(BOOL)arg0;

- (void)setIsEnableLog:(BOOL)arg0;
- (void)setIsEnableCloudLog:(BOOL)arg0;
- (void)setCloudPath:(id)arg0;
- (BOOL)isEnableCloudLog;
- (void)deleteDucomentLogFileWithPath:(id)arg0;
- (BOOL)isEnableLog;
- (void).cxx_destruct;
- (id)cloudPath;

@end
