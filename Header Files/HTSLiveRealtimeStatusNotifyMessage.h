//
//     Generated by private class-dump
//

@class HTSLiveBizMessage, HTSLiveCommon, HTSLiveRealtimeSuggest;

@interface HTSLiveRealtimeStatusNotifyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveRealtimeSuggest *suggest;
@property (nonatomic) BOOL hasSuggest;
@property (retain, nonatomic) HTSLiveBizMessage *bizMessage;
@property (nonatomic) BOOL hasBizMessage;

+ (id)descriptor;

@end
