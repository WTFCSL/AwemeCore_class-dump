//
//     Generated by private class-dump
//

@class NSString, AWERVLVAppointmentViewModel, AWERVLVAppointmentView, BDImageView;

@interface AWERVLVAppointmentElement : AWERVVideoInfoBaseElement <AWERVLVAppointmentViewDelegate, DUXAlertDialogDelegate> {
    AWERVLVAppointmentView *_appointmentView;
    AWERVLVAppointmentViewModel *_viewModel;
    BDImageView *_panelImageView;
}

@property (retain, nonatomic) AWERVLVAppointmentView *appointmentView;
@property (retain, nonatomic) AWERVLVAppointmentViewModel *viewModel;
@property (retain, nonatomic) BDImageView *panelImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidDisposed;
- (void)didTapAppointment;
- (void)trackAppointmentClick;
- (void)trackAppointmentClickResult:(long long)arg0 formerAppointmentStatus:(BOOL)arg1;
- (void)reportAppointment:(BOOL)arg0;
- (void)showPushAlertIfNeed;
- (void)showUserNotificationAlert;
- (void)trackAppointmentShow;
- (void)setPanelImageView:(id)arg0;
- (id)panelImageView;
- (void)superViewDidAppear;
- (id)appointmentView;
- (void)appointmentStatusDidChange;
- (BOOL)appointmentAddVideoHallEntrance:(BOOL)arg0;
- (void)setAppointmentView:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewDidLoad;

@end
