//
//     Generated by private class-dump
//

@class NSString, AWELiveAppointmentModel;

@interface AWELiveAppointmentStatusModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasSubscribe;
    AWELiveAppointmentModel *_appointmentDetail;
}

@property (retain, nonatomic) AWELiveAppointmentModel *appointmentDetail;
@property (nonatomic) BOOL hasSubscribe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appointmentDetailJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasSubscribe;
- (id)appointmentDetail;
- (void)setAppointmentDetail:(id)arg0;
- (void)setHasSubscribe:(BOOL)arg0;
- (void).cxx_destruct;

@end
