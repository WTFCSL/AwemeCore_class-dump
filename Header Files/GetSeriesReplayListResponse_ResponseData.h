//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, ReplayListExtra;

@interface GetSeriesReplayListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *allReplayArray;
@property (readonly, nonatomic) unsigned long long allReplayArray_Count;
@property (copy, nonatomic) NSString *typeName;
@property (retain, nonatomic) ReplayListExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end