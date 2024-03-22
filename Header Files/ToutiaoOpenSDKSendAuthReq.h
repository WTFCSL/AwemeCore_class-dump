//
//     Generated by private class-dump
//

@class NSOrderedSet, NSString;

@interface ToutiaoOpenSDKSendAuthReq : ToutiaoOpenSDKBaseReq {
    BOOL _mustPortrait;
    NSOrderedSet *_permissions;
    NSOrderedSet *_additionalPermissions;
    NSString *_state;
}

@property (retain, nonatomic) NSOrderedSet *permissions;
@property (retain, nonatomic) NSOrderedSet *additionalPermissions;
@property (copy, nonatomic) NSString *state;
@property (nonatomic) BOOL mustPortrait;

- (id)additionalPermissions;
- (void)setAdditionalPermissions:(id)arg0;
- (BOOL)mustPortrait;
- (void)setMustPortrait:(BOOL)arg0;
- (void).cxx_destruct;
- (id)state;
- (void)setState:(id)arg0;
- (void)setPermissions:(id)arg0;
- (id)permissions;

@end