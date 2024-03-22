//
//     Generated by private class-dump
//

@class NSNumber, YataProtocolModel, NSString;

@interface YataNetResponseModel : MTLModel <MTLJSONSerializing> {
    YataProtocolModel *_protocolModel;
    NSNumber *_statusCode;
    NSString *_statusMsg;
    NSString *_successToast;
    NSString *_logID;
}

@property (retain, nonatomic) YataProtocolModel *protocolModel;
@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *successToast;
@property (copy, nonatomic) NSString *logID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (id)protocolModel;
- (void)setProtocolModel:(id)arg0;
- (id)successToast;
- (void)setSuccessToast:(id)arg0;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (void).cxx_destruct;
- (id)logID;
- (void)setLogID:(id)arg0;

@end
