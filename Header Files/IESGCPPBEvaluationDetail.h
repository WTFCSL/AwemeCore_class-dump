//
//     Generated by private class-dump
//

@class IESGCPPBGameCPUserExtra, IESGCPPBEvaluationInfo, IESGCPPBGameUser, NSMutableArray;

@interface IESGCPPBEvaluationDetail : GPBMessage

@property (retain, nonatomic) IESGCPPBEvaluationInfo *evaluationInfo;
@property (nonatomic) BOOL hasEvaluationInfo;
@property (retain, nonatomic) IESGCPPBGameCPUserExtra *userExtra;
@property (nonatomic) BOOL hasUserExtra;
@property (retain, nonatomic) NSMutableArray *outsideCommentInfoArray;
@property (readonly, nonatomic) unsigned long long outsideCommentInfoArray_Count;
@property (retain, nonatomic) NSMutableArray *highlightIndexListArray;
@property (readonly, nonatomic) unsigned long long highlightIndexListArray_Count;
@property (retain, nonatomic) IESGCPPBGameUser *gameUser;
@property (nonatomic) BOOL hasGameUser;

+ (id)descriptor;

@end