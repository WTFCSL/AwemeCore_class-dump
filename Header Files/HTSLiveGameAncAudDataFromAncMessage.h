//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveGameAncAudDataFromAncMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long gameId;
@property (nonatomic) long long sendType;
@property (copy, nonatomic) NSString *data_p;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
