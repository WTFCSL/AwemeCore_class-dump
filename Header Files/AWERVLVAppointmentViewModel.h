//
//     Generated by private class-dump
//

@class AWERVDetailPageContext, AWELVideoAppointmentInfoModel, AWEAwemeModel;

@interface AWERVLVAppointmentViewModel : NSObject {
    BOOL _isRequesting;
    AWEAwemeModel *_currentModel;
    AWERVDetailPageContext *_currentContext;
    AWELVideoAppointmentInfoModel *_appointmentInfo;
}

@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (weak, nonatomic) AWERVDetailPageContext *currentContext;
@property (retain, nonatomic) AWELVideoAppointmentInfoModel *appointmentInfo;

+ (void)reportAppointmentStatusChange:(id)arg0 completion:(id /* block */)arg1;
+ (id)appointmentTime:(id)arg0;
+ (BOOL)shouldShowAppointmentWithModel:(id)arg0;
+ (BOOL)isHitAppointmentTime:(id)arg0;
+ (void)updateModel:(id)arg0 isAppointed:(BOOL)arg1;
+ (void)reportAppointmentStatus:(BOOL)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (id)numberWithFloat:(double)arg0 minimuFractionDigits:(unsigned long long)arg1 maximumFractionDigits:(unsigned long long)arg2 minimumIntegerDigits:(unsigned long long)arg3 maximumeIntegerDigits:(unsigned long long)arg4;

- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (id)appointmentInfo;
- (void)setAppointmentInfo:(id)arg0;
- (id)appointmentTime;
- (id)countToString;
- (BOOL)isAppointmentInfo;
- (void)reportAppointmentStatusChange:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)currentContext;
- (void)setCurrentContext:(id)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end
