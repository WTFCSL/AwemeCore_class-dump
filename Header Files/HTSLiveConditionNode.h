//
//     Generated by private class-dump
//

@class HTSLiveASTNode;

@interface HTSLiveConditionNode : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveASTNode *condition;
@property (nonatomic) BOOL hasCondition;
@property (retain, nonatomic) HTSLiveASTNode *then;
@property (nonatomic) BOOL hasThen;
@property (retain, nonatomic) HTSLiveASTNode *otherwise;
@property (nonatomic) BOOL hasOtherwise;

+ (id)descriptor;

@end
