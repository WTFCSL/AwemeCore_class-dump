//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, CustomizedCardInfo;

@interface HTSLiveCustomizedCardMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) CustomizedCardInfo *card;
@property (nonatomic) BOOL hasCard;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *startId;
@property (nonatomic) int sceneSource;

+ (id)descriptor;

@end