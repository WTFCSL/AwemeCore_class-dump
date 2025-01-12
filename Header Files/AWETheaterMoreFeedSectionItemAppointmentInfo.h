//
//     Generated by private class-dump
//

@class NSString, AWELVideoAppointmentInfoModel, AWEURLModel;

@interface AWETheaterMoreFeedSectionItemAppointmentInfo : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    AWEURLModel *_playerCover;
    AWEURLModel *_metaCover;
    AWELVideoAppointmentInfoModel *_appointmentInfoModel;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *playerCover;
@property (retain, nonatomic) AWEURLModel *metaCover;
@property (retain, nonatomic) AWELVideoAppointmentInfoModel *appointmentInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playerCoverJSONTransformer;
+ (id)metaCoverJSONTransformer;
+ (id)appointmentInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)playerCover;
- (void)setPlayerCover:(id)arg0;
- (id)metaCover;
- (void)setMetaCover:(id)arg0;
- (id)appointmentInfoModel;
- (void)setAppointmentInfoModel:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;

@end
