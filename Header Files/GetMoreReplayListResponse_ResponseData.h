//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, ReplayListExtra;

@interface GetMoreReplayListResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *typeName;
@property (retain, nonatomic) NSMutableArray *infoListArray;
@property (readonly, nonatomic) unsigned long long infoListArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) ReplayListExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
