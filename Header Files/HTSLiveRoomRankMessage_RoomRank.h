//
//     Generated by private class-dump
//

@class NSString, HTSLiveUser;

@interface HTSLiveRoomRankMessage_RoomRank : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *scoreStr;
@property (nonatomic) BOOL profileHidden;

+ (id)descriptor;

@end