//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface CGPBusinessPodStatus : GPBMessage

@property (nonatomic) int navigationBaStatus;
@property (nonatomic) int statusBarStatus;
@property (copy, nonatomic) NSString *packageName;
@property (retain, nonatomic) NSMutableArray *audioZoneArray;
@property (readonly, nonatomic) unsigned long long audioZoneArray_Count;
@property (retain, nonatomic) NSMutableArray *audioArray;
@property (readonly, nonatomic) unsigned long long audioArray_Count;

+ (id)descriptor;

@end
