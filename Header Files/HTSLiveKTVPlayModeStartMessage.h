//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, GPBEnumArray;

@interface HTSLiveKTVPlayModeStartMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) int playModeType;
@property (retain, nonatomic) GPBEnumArray *linkmicPlayModesArray;
@property (readonly, nonatomic) unsigned long long linkmicPlayModesArray_Count;

+ (id)descriptor;

@end
