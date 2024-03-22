//
//     Generated by private class-dump
//

@class NSString;

@interface IESECWinLivingOrderModel : MTLModel <MTLJSONSerializing> {
    NSString *_appointmentText;
    NSString *_appointmentId;
    NSString *_appointmentSchema;
    unsigned long long _appointmentStatus;
}

@property (copy, nonatomic) NSString *appointmentText;
@property (copy, nonatomic) NSString *appointmentId;
@property (copy, nonatomic) NSString *appointmentSchema;
@property (nonatomic) unsigned long long appointmentStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)appointmentStatus;
- (void)setAppointmentStatus:(unsigned long long)arg0;
- (id)appointmentId;
- (void)setAppointmentId:(id)arg0;
- (id)appointmentText;
- (void)setAppointmentText:(id)arg0;
- (id)appointmentSchema;
- (void)setAppointmentSchema:(id)arg0;
- (void).cxx_destruct;

@end