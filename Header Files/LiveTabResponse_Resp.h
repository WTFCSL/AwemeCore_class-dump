//
//     Generated by private class-dump
//

@class NSMutableArray, HTSLiveRoom;

@interface LiveTabResponse_Resp : IESLivePBBaseMessage

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (retain, nonatomic) NSMutableArray *replaysArray;
@property (readonly, nonatomic) unsigned long long replaysArray_Count;

+ (id)descriptor;

@end