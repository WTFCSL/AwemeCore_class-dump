//
//     Generated by private class-dump
//

@class HTSLiveMemberMessage, ConnectPage, NSString;

@interface EnterRoomResponse_EnterRoomExtra : IESLivePBBaseMessage

@property (nonatomic) long long diggColor;
@property (nonatomic) long long payScores;
@property (retain, nonatomic) HTSLiveMemberMessage *enterMsg;
@property (nonatomic) BOOL hasEnterMsg;
@property (nonatomic) BOOL isOfficialChannel;
@property (nonatomic) long long serverTime;
@property (retain, nonatomic) ConnectPage *connectPage;
@property (nonatomic) BOOL hasConnectPage;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *cityName;

+ (id)descriptor;

@end
