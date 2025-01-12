//
//     Generated by private class-dump
//

@class BDATMRulesResponseData, NSString;

@interface BDATMRulesResponse : MTLModel <MTLJSONSerializing> {
    BDATMRulesResponseData *_data;
    long long _code;
    NSString *_message;
}

@property (retain, nonatomic) BDATMRulesResponseData *data;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)dataJSONTransformer;

- (void)setMessage:(id)arg0;
- (void)setCode:(long long)arg0;
- (id)data;
- (long long)code;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)message;

@end
