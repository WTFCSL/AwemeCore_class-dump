//
//     Generated by private class-dump
//

@class NSArray, NSString, AFDCloseFriendsMomentModel, AWEIMConsecutiveInfoModel;

@interface AFDMomentCellHeaderViewModel : AFDMomentCellBaseViewModel <AWEIMConsecutiveChatDaysListenerProtocol> {
    NSArray *_avatarURLList;
    NSString *_titleText;
    NSString *_detailText;
    AWEIMConsecutiveInfoModel *_consecutiveInfoModel;
    AFDCloseFriendsMomentModel *_model;
}

@property (retain, nonatomic) AFDCloseFriendsMomentModel *model;
@property (retain, nonatomic) NSArray *avatarURLList;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) AWEIMConsecutiveInfoModel *consecutiveInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)detailTextForMomentModel:(id)arg0;
- (id)p_appendCustomString:(id)arg0 ToDetailText:(id)arg1;
- (void)consecutiveChatDaysInfoDidUpdateWithModel:(id)arg0;
- (void)configWithModel:(id)arg0;
- (void)setAvatarURLList:(id)arg0;
- (id)avatarURLList;
- (void)trackShowConsecutiveState;
- (id)consecutiveInfoModel;
- (void)transferToProfileWithEnterMethod:(id)arg0;
- (void)tapMoreBtn:(id)arg0;
- (void)getSingleChatConsecutiveChatState;
- (void)setConsecutiveInfoModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setTitleText:(id)arg0;
- (id)detailText;
- (void).cxx_destruct;
- (id)model;
- (void)setDetailText:(id)arg0;
- (id)titleText;

@end
