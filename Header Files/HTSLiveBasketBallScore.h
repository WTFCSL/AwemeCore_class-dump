//
//     Generated by private class-dump
//

@class HTSLiveBasketBallGoalStageDetail;

@interface HTSLiveBasketBallScore : IESLivePBBaseMessage

@property (nonatomic) int matchStage;
@property (retain, nonatomic) HTSLiveBasketBallGoalStageDetail *leftScoreDetail;
@property (nonatomic) BOOL hasLeftScoreDetail;
@property (retain, nonatomic) HTSLiveBasketBallGoalStageDetail *rightScoreDetail;
@property (nonatomic) BOOL hasRightScoreDetail;

+ (id)descriptor;

@end
