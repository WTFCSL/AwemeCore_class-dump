//
//     Generated by private class-dump
//

@class NSString, Rank_SimpleRoom, HTSLiveUser;

@interface Rank : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long score;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *gapDescription;
@property (copy, nonatomic) NSString *rawAdData;
@property (retain, nonatomic) Rank_SimpleRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (copy, nonatomic) NSString *label;

+ (id)descriptor;

@end