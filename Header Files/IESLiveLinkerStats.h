//
//     Generated by private class-dump
//

@class NSString, IESLiveMultiPKModeInfo, IESLiveLinkmicUIConfig;

@interface IESLiveLinkerStats : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveMultiPKModeInfo *multiPkModeInfo;
@property (nonatomic) BOOL hasMultiPkModeInfo;
@property (nonatomic) BOOL battleDisplayEntrance;
@property (nonatomic) BOOL forbidInviteByGeneral;
@property (nonatomic) BOOL forbidApplyFromOther;
@property (copy, nonatomic) NSString *lynxData;
@property (retain, nonatomic) IESLiveLinkmicUIConfig *uiConfig;
@property (nonatomic) BOOL hasUiConfig;

+ (id)descriptor;

@end