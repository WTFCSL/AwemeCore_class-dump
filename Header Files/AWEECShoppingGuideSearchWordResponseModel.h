//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECShoppingGuideSearchWordResponseModel : MTLModel <MTLJSONSerializing> {
    long long _statusCode;
    NSString *_statusMessage;
    NSString *_content;
    NSString *_baseUrl;
}

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *baseUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)statusCode;
- (void)setStatusCode:(long long)arg0;
- (void).cxx_destruct;
- (id)content;
- (void)setBaseUrl:(id)arg0;
- (void)setContent:(id)arg0;
- (id)baseUrl;
- (id)statusMessage;
- (void)setStatusMessage:(id)arg0;

@end
