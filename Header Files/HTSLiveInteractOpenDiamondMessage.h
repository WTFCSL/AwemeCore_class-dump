//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveInteractOpenDiamondMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) long long startId;
@property (nonatomic) int diamonds;

+ (id)descriptor;

@end