//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveRoomAuthInterventionVerifyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long status;
@property (nonatomic) int unableStyle;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *switchStatusTipMsg;
@property (copy, nonatomic) NSString *switchStatusAnchorTipMsg;

+ (id)descriptor;

@end