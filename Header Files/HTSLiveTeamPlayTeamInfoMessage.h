//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveTeamPlayTeamInfoMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *membersArray;
@property (readonly, nonatomic) unsigned long long membersArray_Count;
@property (nonatomic) int teamSize;
@property (copy, nonatomic) NSString *playId;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end