//
//     Generated by private class-dump
//

@protocol HTSFormatPrivacyService <NSObject>

- (BOOL)hasAgreementPolicy;
- (BOOL)hasAudioPermission;
- (BOOL)privacyHasAgreed;
- (void)requestAudioPermission;
- (BOOL)previousRequestedAudioPermission;
- (void)showPrivacy;

@end
