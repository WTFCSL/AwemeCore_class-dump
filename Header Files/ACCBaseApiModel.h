//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface ACCBaseApiModel : MTLModel <MTLJSONSerializing> {
    NSString *_requestID;
    NSNumber *_statusCode;
    NSNumber *_timestamp;
    NSString *_statusMsg;
    NSDictionary *_logPassback;
}

@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (id)statusMsg;
- (void)mergeAllPropertyKeysWithRequestId;
- (void)mergeAllPropertyKeysWithLogPassback;
- (void)setStatusMsg:(id)arg0;
- (void)_mergeAllPropertyKeysWithLogPassback:(id)arg0;
- (void)_mergeAllPropertyKeysWithRequestId:(id)arg0;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (void)setRequestID:(id)arg0;
- (id)timestamp;
- (id)requestID;
- (void).cxx_destruct;
- (BOOL)validate:(id *)arg0;
- (void)setTimestamp:(id)arg0;
- (BOOL)validateValue:(inout id *)arg0 forKey:(id)arg1 error:(out id *)arg2;

@end
