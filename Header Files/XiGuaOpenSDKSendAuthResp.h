//
//     Generated by private class-dump
//

@class NSString, NSOrderedSet;

@interface XiGuaOpenSDKSendAuthResp : XiGuaOpenSDKBaseResp {
    NSString *_code;
    NSString *_state;
    NSOrderedSet *_grantedPermissions;
}

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *state;
@property (retain, nonatomic) NSOrderedSet *grantedPermissions;

- (void)setCode:(id)arg0;
- (id)code;
- (void).cxx_destruct;
- (id)state;
- (void)setState:(id)arg0;
- (id)grantedPermissions;
- (void)setGrantedPermissions:(id)arg0;

@end
