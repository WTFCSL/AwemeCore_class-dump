//
//     Generated by private class-dump
//

@class NSString;

@interface AWEConmpanyUserCertReviewInfo : MTLModel <MTLJSONSerializing> {
    BOOL _canUpdateNow;
    NSString *_forbidUpdateReason;
    unsigned long long _status;
}

@property (copy, nonatomic) NSString *forbidUpdateReason;
@property (nonatomic) BOOL canUpdateNow;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)forbidUpdateReason;
- (void)setForbidUpdateReason:(id)arg0;
- (BOOL)canUpdateNow;
- (void)setCanUpdateNow:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg0;

@end
