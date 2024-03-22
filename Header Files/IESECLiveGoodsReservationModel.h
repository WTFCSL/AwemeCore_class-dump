//
//     Generated by private class-dump
//

@class NSNumber, NSDictionary, NSString;

@interface IESECLiveGoodsReservationModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasReservation;
    NSNumber *_reservationStartTime;
    NSNumber *_reservationEndTime;
    NSNumber *_serverTime;
    NSDictionary *_buttonLabel;
}

@property (retain, nonatomic) NSNumber *reservationStartTime;
@property (retain, nonatomic) NSNumber *reservationEndTime;
@property (retain, nonatomic) NSNumber *serverTime;
@property (nonatomic) BOOL hasReservation;
@property (retain, nonatomic) NSDictionary *buttonLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setServerTime:(id)arg0;
- (void)setHasReservation:(BOOL)arg0;
- (id)reservationStartTime;
- (id)reservationEndTime;
- (BOOL)inReservation;
- (id)getCompaignSubType;
- (void)setReservationStartTime:(id)arg0;
- (void)setReservationEndTime:(id)arg0;
- (id)serverTime;
- (void).cxx_destruct;
- (id)buttonLabel;
- (void)setButtonLabel:(id)arg0;
- (BOOL)hasReservation;

@end
