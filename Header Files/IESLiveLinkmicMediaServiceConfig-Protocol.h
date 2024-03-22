//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveRoomServiceAdapter;

@protocol IESLiveLinkmicMediaServiceConfig <IESLivePushStreamEntryConfig>

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) unsigned long long vendor;
@property (nonatomic) long long seiVersion;
@property (copy, nonatomic) NSString *linkmicID;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (nonatomic) BOOL isAutoMute;

- (id)roomModel;
- (long long)seiVersion;
- (void)setSeiVersion:(long long)arg0;
- (void)setRoomModel:(id)arg0;
- (id)rtcExtInfo;
- (void)setRtcExtInfo:(id)arg0;
- (id)linkmicID;
- (BOOL)isAutoMute;
- (void)setLinkmicID:(id)arg0;
- (void)setIsAutoMute:(BOOL)arg0;
- (void)setScene:(unsigned long long)arg0;
- (id)channelID;
- (unsigned long long)vendor;
- (void)setVendor:(unsigned long long)arg0;
- (void)setChannelID:(id)arg0;
- (unsigned long long)scene;

@end