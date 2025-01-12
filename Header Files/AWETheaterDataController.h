//
//     Generated by private class-dump
//

@class AWETheaterRequestModel;

@interface AWETheaterDataController : AWEBaseDataController {
    AWETheaterRequestModel *_requestModel;
}

@property (retain, nonatomic) AWETheaterRequestModel *requestModel;

+ (void)addTheaterEntranceWithIsNewVersion:(BOOL)arg0 completion:(id /* block */)arg1;
+ (void)updateLongVideoAppointmentStatus:(BOOL)arg0 appointmentID:(id)arg1 appointmentType:(long long)arg2 completion:(id /* block */)arg3;

- (void)setRequestModel:(id)arg0;
- (void).cxx_destruct;
- (id)requestModel;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
