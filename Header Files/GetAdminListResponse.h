//
//     Generated by private class-dump
//

@class NSMutableArray, GetAdminListExtra;

@interface GetAdminListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;
@property (retain, nonatomic) GetAdminListExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
