//
//     Generated by private class-dump
//

@class HTSLiveIdentifierNode, NSMutableArray;

@interface HTSLiveCallNode : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveIdentifierNode *caller;
@property (nonatomic) BOOL hasCaller;
@property (retain, nonatomic) NSMutableArray *argumentsArray;
@property (readonly, nonatomic) unsigned long long argumentsArray_Count;

+ (id)descriptor;

@end
