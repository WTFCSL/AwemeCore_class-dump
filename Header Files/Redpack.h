//
//     Generated by private class-dump
//

@class NSString;

@interface Redpack : IESLivePBBaseMessage

@property (nonatomic) long long redpackType;
@property (nonatomic) long long redpackActivityId;
@property (copy, nonatomic) NSString *redpackActivityDisplayText;
@property (nonatomic) long long startApplyTime;
@property (nonatomic) long long endApplyTime;
@property (nonatomic) long long preheatTime;
@property (nonatomic) long long serverTime;
@property (nonatomic) long long hasApplied;
@property (copy, nonatomic) NSString *iconURL;

+ (id)descriptor;

@end
