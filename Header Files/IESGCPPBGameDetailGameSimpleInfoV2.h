//
//     Generated by private class-dump
//

@class IESGCPPBGameDetailSimpleEvaluationInfo, IESGCPPBGameDetailNotice;

@interface IESGCPPBGameDetailGameSimpleInfoV2 : GPBMessage

@property (nonatomic) long long userPlayingCount;
@property (retain, nonatomic) IESGCPPBGameDetailSimpleEvaluationInfo *evaluationInfo;
@property (nonatomic) BOOL hasEvaluationInfo;
@property (nonatomic) BOOL showPlayingCount;
@property (retain, nonatomic) IESGCPPBGameDetailNotice *notice;
@property (nonatomic) BOOL hasNotice;

+ (id)descriptor;

@end
