//
//     Generated by private class-dump
//

@class NSString, HTSLiveUser;

@interface PaidLiveGrabTicketResponse_PaidLiveGrabTicketData : IESLivePBBaseMessage

@property (nonatomic) long long retType;
@property (nonatomic) long long ticketType;
@property (nonatomic) long long ticketId;
@property (retain, nonatomic) HTSLiveUser *fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (copy, nonatomic) NSString *failReason;

+ (id)descriptor;

@end