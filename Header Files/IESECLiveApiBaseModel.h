//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESECLiveApiBaseModel : MTLModel <MTLJSONSerializing> {
    NSString *_requestID;
    NSNumber *_statusCode;
    NSString *_statusMsg;
}

@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iesec_jsonArrayStringTransformer;
+ (id)mergeBaseApiPropertyKey:(id)arg0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;

@end
