//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface HTSLiveRegionMatch : IESLivePBBaseMessage

@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *allowListArray;
@property (readonly, nonatomic) unsigned long long allowListArray_Count;
@property (retain, nonatomic) NSMutableArray *denyListArray;
@property (readonly, nonatomic) unsigned long long denyListArray_Count;

+ (id)descriptor;

@end