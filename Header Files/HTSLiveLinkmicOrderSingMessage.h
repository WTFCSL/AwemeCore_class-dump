//
//     Generated by private class-dump
//

@class HTSLiveLinkmicOrderSingActionToastContent, HTSLiveCommon, HTSLiveLinkmicOrderSingMVActionContent, HTSLiveLinkmicOrderSingCreateContent, HTSLiveLinkmicOrderSingFinishContent, HTSLiveLinkmicOrderSingActionContent;

@interface HTSLiveLinkmicOrderSingMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long messageType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveLinkmicOrderSingCreateContent *orderSingCreateContent;
@property (retain, nonatomic) HTSLiveLinkmicOrderSingFinishContent *orderSingFinishContent;
@property (retain, nonatomic) HTSLiveLinkmicOrderSingActionToastContent *orderSingActionToastContent;
@property (retain, nonatomic) HTSLiveLinkmicOrderSingActionContent *orderSingActionContent;
@property (retain, nonatomic) HTSLiveLinkmicOrderSingMVActionContent *orderSingMvActionContent;

+ (id)descriptor;

@end