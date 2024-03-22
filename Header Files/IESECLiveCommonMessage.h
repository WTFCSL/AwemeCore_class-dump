//
//     Generated by private class-dump
//

@class IESECGMVData, IESECRoomTagOfflineInfo, IESECFilterSwitchChangeData;

@interface IESECLiveCommonMessage : GPBMessage

@property (nonatomic) int msgType;
@property (nonatomic) long long screenshotTimestamp;
@property (retain, nonatomic) IESECRoomTagOfflineInfo *roomTagOfflineInfo;
@property (nonatomic) BOOL hasRoomTagOfflineInfo;
@property (retain, nonatomic) IESECFilterSwitchChangeData *filterSwitchChangeData;
@property (nonatomic) BOOL hasFilterSwitchChangeData;
@property (retain, nonatomic) IESECGMVData *gmvData;
@property (nonatomic) BOOL hasGmvData;

+ (id)descriptor;

@end
