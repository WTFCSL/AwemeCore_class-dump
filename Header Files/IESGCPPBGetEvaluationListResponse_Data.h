//
//     Generated by private class-dump
//

@class IESGCPPBCommentEntranceInfo, IESGCPPBCommentNpsEntrance, IESGCPPBGradeInfo, NSMutableArray;

@interface IESGCPPBGetEvaluationListResponse_Data : GPBMessage

@property (nonatomic) long long total;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *evaluationDetailArray;
@property (readonly, nonatomic) unsigned long long evaluationDetailArray_Count;
@property (retain, nonatomic) NSMutableArray *userEvaluationDetailArray;
@property (readonly, nonatomic) unsigned long long userEvaluationDetailArray_Count;
@property (retain, nonatomic) IESGCPPBCommentEntranceInfo *commentEntranceInfo;
@property (nonatomic) BOOL hasCommentEntranceInfo;
@property (retain, nonatomic) NSMutableArray *tagListArray;
@property (readonly, nonatomic) unsigned long long tagListArray_Count;
@property (retain, nonatomic) IESGCPPBGradeInfo *gradeInfo;
@property (nonatomic) BOOL hasGradeInfo;
@property (retain, nonatomic) IESGCPPBCommentNpsEntrance *commentNpsEntrance;
@property (nonatomic) BOOL hasCommentNpsEntrance;

+ (id)descriptor;

@end
