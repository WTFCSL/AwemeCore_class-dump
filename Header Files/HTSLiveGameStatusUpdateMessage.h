//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveGameStatusUpdateMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long anchorId;
@property (nonatomic) long long roomId;
@property (nonatomic) int gameKind;
@property (nonatomic) long long gameId;
@property (nonatomic) long long roundId;
@property (nonatomic) int eventTime;
@property (nonatomic) int presentMsgType;
@property (copy, nonatomic) NSString *configExtra;
@property (nonatomic) long long playKind;
@property (nonatomic) long long switchId;

+ (id)descriptor;

@end
