//
//     Generated by private class-dump
//

@class NSString;

@interface HMDTrackerRecord : NSObject <HMDRecordStoreObject> {
    unsigned long long _localID;
    unsigned long long _sequenceCode;
    NSString *_sessionID;
    double _timestamp;
    double _inAppTime;
    unsigned long long _enableUpload;
    NSString *_osVersion;
    NSString *_appVersion;
    NSString *_buildVersion;
    NSString *_sdkVersion;
    long long _netQualityType;
}

@property (nonatomic) unsigned long long localID;
@property (nonatomic) unsigned long long sequenceCode;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) double timestamp;
@property (nonatomic) double inAppTime;
@property (nonatomic) unsigned long long enableUpload;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) long long netQualityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)cleanupWeight;
+ (id)tableName;
+ (id)newRecord;

- (void)setSequenceCode:(unsigned long long)arg0;
- (void)setInAppTime:(double)arg0;
- (double)inAppTime;
- (unsigned long long)sequenceCode;
- (void)setNetQualityType:(long long)arg0;
- (long long)netQualityType;
- (unsigned long long)enableUpload;
- (id)environmentInfo;
- (void)recoverWithSessionRecord:(id)arg0;
- (void)setEnableUpload:(unsigned long long)arg0;
- (void)setBuildVersion:(id)arg0;
- (id)init;
- (id)buildVersion;
- (double)timestamp;
- (id)osVersion;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)sessionID;
- (unsigned long long)localID;
- (id)appVersion;
- (void)setTimestamp:(double)arg0;
- (void)setOsVersion:(id)arg0;
- (id)sdkVersion;
- (void)setSdkVersion:(id)arg0;
- (id)reportDictionary;
- (void)setLocalID:(unsigned long long)arg0;

@end
