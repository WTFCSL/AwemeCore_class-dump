//
//     Generated by private class-dump
//

@class NSString, HTSLiveUser;

@interface IESLiveMsgBoardItemInfo : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *idStr;
@property (retain, nonatomic) HTSLiveUser *sender;
@property (nonatomic) BOOL hasSender;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) int processStatus;
@property (nonatomic) long long giftId;
@property (nonatomic) long long msgDisappearTime;

+ (id)descriptor;

@end