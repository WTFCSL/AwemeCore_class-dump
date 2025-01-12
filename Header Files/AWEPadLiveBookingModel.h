//
//     Generated by private class-dump
//

@class NSNumber, NSString, AWEPadLiveBookingConfig;

@interface AWEPadLiveBookingModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasSubscribe;
    NSNumber *_status;
    AWEPadLiveBookingConfig *_configInfo;
    long long _bookingId;
    long long _anchorId;
    NSString *_room;
    unsigned long long _timeLineStyle;
}

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) AWEPadLiveBookingConfig *configInfo;
@property (nonatomic) long long bookingId;
@property (nonatomic) long long anchorId;
@property (nonatomic) BOOL hasSubscribe;
@property (copy, nonatomic) NSString *room;
@property (nonatomic) unsigned long long timeLineStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasSubscribe;
- (long long)anchorId;
- (void)setAnchorId:(long long)arg0;
- (void)setHasSubscribe:(BOOL)arg0;
- (unsigned long long)timeLineStyle;
- (void)setTimeLineStyle:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)status;
- (void)setStatus:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)configInfo;
- (long long)bookingId;
- (void)setBookingId:(long long)arg0;
- (void)setConfigInfo:(id)arg0;

@end
