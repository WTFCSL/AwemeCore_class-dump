//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveSportsQuizMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *matchId;
@property (nonatomic) int quizMsgType;
@property (retain, nonatomic) NSMutableArray *quizArray;
@property (readonly, nonatomic) unsigned long long quizArray_Count;

+ (id)descriptor;

@end
