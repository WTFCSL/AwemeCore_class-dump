//
//     Generated by private class-dump
//

@class NSString, IESGCPPBTrackInfo;

@interface IESGCPPBGamesMonitorInfo : GPBMessage

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *showMonitorURL;
@property (copy, nonatomic) NSString *clickDownMonitorURL;
@property (copy, nonatomic) NSString *clickIconMonitorURL;
@property (retain, nonatomic) IESGCPPBTrackInfo *trackInfo;
@property (nonatomic) BOOL hasTrackInfo;
@property (nonatomic) BOOL allowPersonalDeviceInfo;
@property (copy, nonatomic) NSString *groupLeaderId;
@property (copy, nonatomic) NSString *groupTaskId;
@property (copy, nonatomic) NSString *reserveMonitorURL;

+ (id)descriptor;

@end
