//
//     Generated by private class-dump
//

@protocol AWEU18VerificationProtocol <NSObject>

@property (readonly, nonatomic) BOOL isShowing;
@property (readonly, nonatomic) unsigned long long inProgressVerifyType;

- (void)updateLayoutWithContext:(id)arg0;
- (unsigned long long)inProgressVerifyType;
- (void)presentMaskWithCompletion:(id /* block */)arg0;
- (void)dismissMaskWithCompletion:(id /* block */)arg0;
- (BOOL)isShowing;

@end
