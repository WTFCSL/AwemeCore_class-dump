//
//     Generated by private class-dump
//

@class NSString;

@interface RTVVoipWebSocketApiConfig : JSONModel {
    NSString *_apiName;
    long long _service;
    long long _method;
}

@property (copy, nonatomic) NSString *apiName;
@property (nonatomic) long long service;
@property (nonatomic) long long method;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)init;
- (void).cxx_destruct;
- (void)setService:(long long)arg0;
- (long long)method;
- (void)setMethod:(long long)arg0;
- (long long)service;
- (void)setApiName:(id)arg0;
- (id)apiName;

@end
