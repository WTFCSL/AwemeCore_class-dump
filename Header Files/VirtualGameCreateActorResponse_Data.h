//
//     Generated by private class-dump
//

@class NSString, HTSLiveText;

@interface VirtualGameCreateActorResponse_Data : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (nonatomic) long long actorId;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) BOOL failToCreate;
@property (copy, nonatomic) NSString *failReason;

+ (id)descriptor;

@end
