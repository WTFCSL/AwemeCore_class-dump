//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveUpdateFanTicketMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *roomFanTicketCountText;
@property (nonatomic) long long roomFanTicketCount;
@property (nonatomic) BOOL forceUpdate;

+ (id)descriptor;

@end