//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESECInteractionContentCheck, NSMutableArray;

@interface IESECInteractionContent : GPBMessage

@property (retain, nonatomic) IESECInteractionContentCheck *check;
@property (nonatomic) BOOL hasCheck;
@property (nonatomic) int priority;
@property (nonatomic) int loopCount;
@property (retain, nonatomic) NSMutableArray *contentArray;
@property (readonly, nonatomic) unsigned long long contentArray_Count;
@property (retain, nonatomic) NSMutableDictionary *eventParam;
@property (readonly, nonatomic) unsigned long long eventParam_Count;

+ (id)descriptor;

@end
