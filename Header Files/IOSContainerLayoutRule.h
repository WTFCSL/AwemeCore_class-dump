//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface IOSContainerLayoutRule : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *itemsArray;
@property (readonly, nonatomic) unsigned long long itemsArray_Count;
@property (nonatomic) BOOL ruleReplace;
@property (copy, nonatomic) NSString *target;
@property (copy, nonatomic) NSString *ruleType;

+ (id)descriptor;

@end
