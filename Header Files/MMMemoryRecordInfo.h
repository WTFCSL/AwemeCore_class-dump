//
//     Generated by private class-dump
//

@class NSString;

@interface MMMemoryRecordInfo : MMMatrixBaseModel {
    unsigned long long _protocolVersion;
    unsigned long long _launchTime;
    NSString *_systemVersion;
    NSString *_appVersion;
    NSString *_buildVersion;
}

@property (nonatomic) unsigned long long protocolVersion;
@property (nonatomic) unsigned long long launchTime;
@property (retain, nonatomic) NSString *systemVersion;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSString *buildVersion;

+ (unsigned long long)supportedProtocolVersion;

- (void)setLaunchTime:(unsigned long long)arg0;
- (unsigned long long)launchTime;
- (id)recordDataPath;
- (id)generateReportDataWithCustomInfo:(id)arg0 keyClassSuffixes:(id)arg1;
- (void)setProtocolVersion:(unsigned long long)arg0;
- (unsigned long long)protocolVersion;
- (void)setBuildVersion:(id)arg0;
- (id)init;
- (id)buildVersion;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (id)appVersion;
- (id)recordID;
- (id)systemVersion;
- (void)setSystemVersion:(id)arg0;

@end
