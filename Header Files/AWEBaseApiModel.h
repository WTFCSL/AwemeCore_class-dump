//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface AWEBaseApiModel : MTLModel <AWEStudioAWEBaseApiModelProtocol, MTLJSONSerializing> {
    NSString *_requestID;
    NSNumber *_statusCode;
    NSNumber *_timestamp;
    NSString *_statusMsg;
    NSDictionary *_logPassback;
}

@property (class, nonatomic) BOOL fixMergePropertyInfiniteLoop;

@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fixMergePropertyInfiniteLoop;
+ (void)_aweLazyRegisterLoad;
+ (void)setFixMergePropertyInfiniteLoop:(BOOL)arg0;
+ (void)initialize;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)validate:(id *)arg0;
- (BOOL)validateValue:(inout id *)arg0 forKey:(id)arg1 error:(out id *)arg2;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)mergeAllPropertyKeysWithRequestIdAndLogPassback;
- (id)statusMsg;
- (void)mergeAllPropertyKeysWithRequestId;
- (void)mergeAllPropertyKeysWithLogPassback;
- (void)setStatusMsg:(id)arg0;
- (BOOL)awe_validateValue:(inout id *)arg0 forKey:(id)arg1 error:(out id *)arg2;
- (BOOL)awe_validate:(id *)arg0;
- (void)_mergeAllPropertyKeysWithRequestId:(id)arg0 logPassback:(id)arg1 checkRequestClassFirst:(BOOL)arg2;
- (void)_mergeAllPropertyKeysWithRequestId:(id)arg0 checkRequestClassFirst:(BOOL)arg1;
- (void)_mergeAllPropertyKeysWithLogPassback:(id)arg0;
- (void)mergeAllPropertyKeysWithRequestIdAndLogPassbackOpt;
- (void)mergeAllPropertyKeysWithRequestIdOpt;
- (id)imprId;
- (void)awe_mergeAllPropertyKeysWithRequestId:(id)arg0 logPassback:(id)arg1 andSetBack:(id)arg2 andDefaultRecusiveCount:(long long)arg3;
- (void)awe_mergeAllPropertyKeysWithRequestId:(id)arg0 logPassback:(id)arg1;
- (void)sendErrorBackActionWithSet:(id)arg0 currentObj:(id)arg1 errorType:(id)arg2;
- (void)awe_mergeAllPropertyKeysWithRequestIdAndLogPassback;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (void)setRequestID:(id)arg0;
- (id)timestamp;
- (id)requestID;
- (void).cxx_destruct;
- (void)setTimestamp:(id)arg0;

@end