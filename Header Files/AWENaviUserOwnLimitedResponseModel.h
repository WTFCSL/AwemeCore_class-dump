//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSArray;

@interface AWENaviUserOwnLimitedResponseModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_statusCode;
    NSString *_statusMessage;
    NSArray *_data;
}

@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (copy, nonatomic) NSArray *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)statusMessage;
- (void)setStatusMessage:(id)arg0;

@end
