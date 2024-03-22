//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, HTSLiveLinkmicQuickInteract, NSMutableArray;

@interface HTSLiveLinkerContributeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long userId;
@property (nonatomic) long long totalScore;
@property (retain, nonatomic) NSMutableArray *userContributeListArray;
@property (readonly, nonatomic) unsigned long long userContributeListArray_Count;
@property (nonatomic) long long microTimeStamp;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *totalScoreRealStr;
@property (copy, nonatomic) NSString *totalScoreStr;
@property (retain, nonatomic) HTSLiveLinkmicQuickInteract *quickInteract;
@property (nonatomic) BOOL hasQuickInteract;

+ (id)descriptor;

@end