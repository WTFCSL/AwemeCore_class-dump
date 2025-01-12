//
//     Generated by private class-dump
//

@class NSString, NSDictionary, HMDUITrackableContext;

@interface HMDUITrackRecord : NSObject <HMDRecordStoreObject> {
    unsigned long long _localID;
    unsigned long long _sequenceCode;
    double _inAppTime;
    NSString *_sessionID;
    double _timestamp;
    NSString *_name;
    NSString *_event;
    NSDictionary *_extraInfo;
    HMDUITrackableContext *_context;
    unsigned long long _enableUpload;
}

@property (nonatomic) unsigned long long localID;
@property (nonatomic) unsigned long long sequenceCode;
@property (nonatomic) double inAppTime;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *event;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (weak, nonatomic) HMDUITrackableContext *context;
@property (nonatomic) unsigned long long enableUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)cleanupWeight;
+ (id)bg_ignoreKeys;
+ (id)tableName;
+ (id)newRecord;

- (void)setExtraInfo:(id)arg0;
- (void)setSequenceCode:(unsigned long long)arg0;
- (void)setInAppTime:(double)arg0;
- (double)inAppTime;
- (unsigned long long)sequenceCode;
- (unsigned long long)enableUpload;
- (void)setEnableUpload:(unsigned long long)arg0;
- (void)setEvent:(id)arg0;
- (id)event;
- (id)init;
- (double)timestamp;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)sessionID;
- (void)setContext:(id)arg0;
- (unsigned long long)localID;
- (id)context;
- (void)setTimestamp:(double)arg0;
- (void)setName:(id)arg0;
- (id)name;
- (id)extraInfo;
- (id)reportDictionary;
- (void)setLocalID:(unsigned long long)arg0;

@end
