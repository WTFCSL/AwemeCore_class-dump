//
//     Generated by private class-dump
//

@class NSString;

@interface DYUserVerifyPasswordModel : MTLModel <MTLJSONSerializing> {
    NSString *_verifyTicket;
    NSString *_profileKey;
}

@property (copy, nonatomic) NSString *verifyTicket;
@property (copy, nonatomic) NSString *profileKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)verifyTicket;
- (void)setVerifyTicket:(id)arg0;
- (id)profileKey;
- (void)setProfileKey:(id)arg0;
- (void).cxx_destruct;

@end