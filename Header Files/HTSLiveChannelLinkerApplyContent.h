//
//     Generated by private class-dump
//

@class NSString, HTSLiveUser;

@interface HTSLiveChannelLinkerApplyContent : IESLivePBBaseMessage

@property (readonly, copy, nonatomic) NSString *mixApplicantUserId;
@property (nonatomic) long long applicantUserId;
@property (copy, nonatomic) NSString *applicantSecUserId;
@property (retain, nonatomic) HTSLiveUser *applicantUser;
@property (nonatomic) BOOL hasApplicantUser;

+ (id)descriptor;

- (id)mixApplicantUserId;

@end
