//
//     Generated by private class-dump
//

@class HTSLiveCommon;

@interface HTSLivePullStreamUpdateMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int pushStreamLevel;
@property (nonatomic) int randomSeconds;

+ (id)descriptor;

@end
