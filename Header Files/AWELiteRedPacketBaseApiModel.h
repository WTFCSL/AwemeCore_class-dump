//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiteRedPacketBaseApiModel : MTLModel <MTLJSONSerializing> {
    NSString *_requestId;
    long long _errorCode;
    NSString *_errorTips;
}

@property (copy, nonatomic) NSString *requestId;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)errorTips;
- (void)setErrorTips:(id)arg0;
- (void).cxx_destruct;
- (void)setErrorCode:(long long)arg0;
- (long long)errorCode;
- (id)requestId;
- (void)setRequestId:(id)arg0;

@end
