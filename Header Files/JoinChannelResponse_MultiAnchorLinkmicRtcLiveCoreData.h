//
//     Generated by private class-dump
//

@class IESLiveMultiRtcInfo, NSMutableArray, IESLiveMultiLiveCoreInfo;

@interface JoinChannelResponse_MultiAnchorLinkmicRtcLiveCoreData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (retain, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (nonatomic) unsigned long long version;

+ (id)descriptor;

@end