//
//     Generated by private class-dump
//

@class AWELiveAppointmentCountModel;

@interface AWELiveAppointmentCountResponseModel : AWEBaseApiModel {
    AWELiveAppointmentCountModel *_appointmentCount;
}

@property (retain, nonatomic) AWELiveAppointmentCountModel *appointmentCount;

+ (id)appointmentCountJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;

- (id)appointmentCount;
- (void)setAppointmentCount:(id)arg0;
- (void).cxx_destruct;

@end
