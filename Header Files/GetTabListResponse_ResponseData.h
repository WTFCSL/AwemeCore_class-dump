//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface GetTabListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *tabsArray;
@property (readonly, nonatomic) unsigned long long tabsArray_Count;
@property (copy, nonatomic) NSString *defaultTab;
@property (nonatomic) int defaultFirstLevelTab;

+ (id)descriptor;

@end
