//
//     Generated by private class-dump
//

@class AppointmentGroupStatusData, AppointmentGroupStatusExtra;

@interface AppointmentGroupStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AppointmentGroupStatusData *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) AppointmentGroupStatusExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
