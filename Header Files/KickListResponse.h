//
//     Generated by private class-dump
//

@class KickListResponse_ResponseExtra, NSMutableArray;

@interface KickListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;
@property (retain, nonatomic) KickListResponse_ResponseExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
