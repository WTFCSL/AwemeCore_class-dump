//
//     Generated by private class-dump
//

@class IESECInteractionData, IESECBarrageBuyInfo;

@interface IESECLiveInteractionMessage : GPBMessage

@property (nonatomic) int msgType;
@property (retain, nonatomic) IESECBarrageBuyInfo *barrageBuyInfo;
@property (nonatomic) BOOL hasBarrageBuyInfo;
@property (retain, nonatomic) IESECInteractionData *interactionData;
@property (nonatomic) BOOL hasInteractionData;

+ (id)descriptor;

@end
