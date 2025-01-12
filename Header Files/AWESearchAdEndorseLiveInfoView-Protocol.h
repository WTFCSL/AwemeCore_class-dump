//
//     Generated by private class-dump
//

@class AWEUserModel, AWEAwemeModel;

@protocol AWESearchAdEndorseLiveInfoView <AWECrotocol>

+ (id)liveInfoView;

@property (copy, nonatomic) id /* block */ appointmentBtnTappedBlock;
@property (copy, nonatomic) id /* block */ infoViewTappedBlock;
@property (copy, nonatomic) id /* block */ enterLiveRoomBlock;
@property (retain, nonatomic) AWEUserModel *userInfo;
@property (retain, nonatomic) AWEAwemeModel *aweme;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (id /* block */)enterLiveRoomBlock;
- (void)setEnterLiveRoomBlock:(id /* block */)arg0;
- (id /* block */)infoViewTappedBlock;
- (void)configWithAdInfo:(id)arg0 isLiveRoom:(BOOL)arg1 andAweme:(id)arg2;
- (id /* block */)appointmentBtnTappedBlock;
- (void)setAppointmentBtnTappedBlock:(id /* block */)arg0;
- (void)setInfoViewTappedBlock:(id /* block */)arg0;
- (void)setUserInfo:(id)arg0;
- (id)userInfo;

@end
