//
//     Generated by private class-dump
//

@class MySubscribeListResponse_ResponseExtra, NSMutableArray;

@interface MySubscribeListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;
@property (retain, nonatomic) MySubscribeListResponse_ResponseExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
