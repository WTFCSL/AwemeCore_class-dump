//
//     Generated by private class-dump
//

@class NSString, HTSLiveLinkmicGameInfo, GPBInt64Array;

@interface HTSLiveLinkmicGameBarrageStartContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkmicGameInfo *gameInfo;
@property (nonatomic) BOOL hasGameInfo;
@property (copy, nonatomic) NSString *audienceToast;
@property (retain, nonatomic) GPBInt64Array *kickOutUserIdsArray;
@property (readonly, nonatomic) unsigned long long kickOutUserIdsArray_Count;

+ (id)descriptor;

@end
