//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveKtvGrabSongResultMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long songId;
@property (nonatomic) long long termId;
@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *prompt;

+ (id)descriptor;

@end
