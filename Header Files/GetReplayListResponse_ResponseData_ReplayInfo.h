//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, ReplayListExtra;

@interface GetReplayListResponse_ResponseData_ReplayInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *typeName;
@property (retain, nonatomic) NSMutableArray *infoListArray;
@property (readonly, nonatomic) unsigned long long infoListArray_Count;
@property (retain, nonatomic) ReplayListExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
