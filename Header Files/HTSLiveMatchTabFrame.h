//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface HTSLiveMatchTabFrame : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *tabsArray;
@property (readonly, nonatomic) unsigned long long tabsArray_Count;
@property (retain, nonatomic) NSMutableArray *replayTabsArray;
@property (readonly, nonatomic) unsigned long long replayTabsArray_Count;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *backgroundColor;

+ (id)descriptor;

@end