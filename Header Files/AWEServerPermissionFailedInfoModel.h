//
//     Generated by private class-dump
//

@class NSString;

@interface AWEServerPermissionFailedInfoModel : MTLModel <MTLJSONSerializing> {
    long long _code;
    NSString *_reason;
    NSString *_message;
}

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setMessage:(id)arg0;
- (void)setCode:(long long)arg0;
- (long long)code;
- (void).cxx_destruct;
- (id)reason;
- (id)message;
- (void)setReason:(id)arg0;

@end
