//
//     Generated by private class-dump
//

@class HTSLiveCommon;

@interface HTSLiveRoomStreamAdaptationMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int adaptationType;
@property (nonatomic) float adaptationHeightRatio;
@property (nonatomic) float adaptationBodyCenterRatio;

+ (id)descriptor;

@end