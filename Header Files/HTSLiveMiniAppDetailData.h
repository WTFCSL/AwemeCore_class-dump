//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, GPBInt64Array;

@interface HTSLiveMiniAppDetailData : IESLivePBBaseMessage

@property (nonatomic) long long interactId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *iconURLArray;
@property (readonly, nonatomic) unsigned long long iconURLArray_Count;
@property (nonatomic) long long rank;
@property (nonatomic) long long groupType;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) GPBInt64Array *supportLiveEntranceListArray;
@property (readonly, nonatomic) unsigned long long supportLiveEntranceListArray_Count;

+ (id)descriptor;

@end
