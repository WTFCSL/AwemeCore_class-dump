//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveGameAncAudStatusMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long gameId;
@property (nonatomic) long long sendType;
@property (nonatomic) long long gameStatus;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
