//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveRealTimePlayBackMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) BOOL realtimePlaybackEnabled;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *messageText;

+ (id)descriptor;

@end