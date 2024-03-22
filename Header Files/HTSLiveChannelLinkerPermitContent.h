//
//     Generated by private class-dump
//

@class NSString;

@interface HTSLiveChannelLinkerPermitContent : IESLivePBBaseMessage

@property (readonly, copy, nonatomic) NSString *mixApplicantUserId;
@property (readonly, copy, nonatomic) NSString *mixApproverUserId;
@property (nonatomic) long long applicantUserId;
@property (nonatomic) long long approverUserId;
@property (nonatomic) int permitResult;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *applicantSecUserId;
@property (copy, nonatomic) NSString *approverSecUserId;

+ (id)descriptor;

- (id)mixApplicantUserId;
- (id)mixApproverUserId;

@end