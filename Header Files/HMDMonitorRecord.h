//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface HMDMonitorRecord : NSObject <HMDRecordStoreObject> {
    BOOL _baseSample;
    BOOL _isSpecialSceneOpenRecord;
    unsigned long long _localID;
    unsigned long long _sequenceCode;
    double _timestamp;
    double _inAppTime;
    unsigned long long _isReported;
    unsigned long long _enableUpload;
    long long _netQualityType;
    NSString *_scene;
    NSString *_customScene;
    NSString *_business;
    NSDictionary *_filters;
    NSDictionary *_extraInfos;
    NSString *_sessionID;
    NSString *_updateVersionCode;
    NSString *_osVersion;
    NSString *_appVersion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long localID;
@property (nonatomic) unsigned long long sequenceCode;
@property (nonatomic) double timestamp;
@property (nonatomic) double inAppTime;
@property (nonatomic) unsigned long long isReported;
@property (nonatomic) unsigned long long enableUpload;
@property (nonatomic) long long netQualityType;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *customScene;
@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSDictionary *filters;
@property (retain, nonatomic) NSDictionary *extraInfos;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) BOOL baseSample;
@property (nonatomic) BOOL isSpecialSceneOpenRecord;

+ (id)aggregateDataWithRecords:(id)arg0;
+ (unsigned long long)cleanupWeight;
+ (id)reportDataForRecords:(id)arg0;
+ (id)aggregateDataForRecords:(id)arg0;
+ (id)getInjectedPatchFilters;
+ (id)tableName;
+ (id)newRecord;

- (void)setUpdateVersionCode:(id)arg0;
- (id)updateVersionCode;
- (void)setSequenceCode:(unsigned long long)arg0;
- (id)customScene;
- (void)setCustomScene:(id)arg0;
- (void)setInAppTime:(double)arg0;
- (void)setIsReported:(unsigned long long)arg0;
- (double)inAppTime;
- (unsigned long long)sequenceCode;
- (BOOL)needAggregate;
- (void)setNetQualityType:(long long)arg0;
- (long long)netQualityType;
- (unsigned long long)enableUpload;
- (void)setEnableUpload:(unsigned long long)arg0;
- (BOOL)baseSample;
- (BOOL)isSpecialSceneOpenRecord;
- (long long)compare:(id)arg0 forKeyPath:(id)arg1;
- (void)addInfo;
- (id)extraInfos;
- (void)setExtraInfos:(id)arg0;
- (void)setBaseSample:(BOOL)arg0;
- (void)setIsSpecialSceneOpenRecord:(BOOL)arg0;
- (id)init;
- (void)setFilters:(id)arg0;
- (void)setScene:(id)arg0;
- (double)timestamp;
- (id)osVersion;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)filters;
- (double)value;
- (id)sessionID;
- (unsigned long long)localID;
- (id)appVersion;
- (unsigned long long)isReported;
- (void)setTimestamp:(double)arg0;
- (void)setOsVersion:(id)arg0;
- (id)scene;
- (id)business;
- (void)setBusiness:(id)arg0;
- (id)reportDictionary;
- (void)setLocalID:(unsigned long long)arg0;

@end
