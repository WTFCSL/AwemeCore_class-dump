//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, AWECoCreatorModel, AWEUserModel, AWEURLModel, AWELiveUserRoomData, AWECoCreatorExternModel, NSNumber;

@interface AWECoCreatorDetailCellModel : NSObject <AWECoCreatorCellProtocol> {
    BOOL _showFllowerCount;
    unsigned long long _cellStyle;
    NSString *_nickName;
    NSString *_roleTitle;
    NSString *_userId;
    NSString *_secId;
    AWEURLModel *_avatar;
    NSNumber *_followerCount;
    AWEAwemeModel *_currentModel;
    AWECoCreatorModel *_coCreatorModel;
    NSString *_referString;
    AWECoCreatorExternModel *_externModel;
    NSString *_customVerify;
    NSString *_enterpriseVerify;
}

@property (retain, nonatomic) AWECoCreatorExternModel *externModel;
@property (copy, nonatomic) NSString *customVerify;
@property (copy, nonatomic) NSString *enterpriseVerify;
@property (nonatomic) unsigned long long cellStyle;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *roleTitle;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secId;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (nonatomic) BOOL showFllowerCount;
@property (retain, nonatomic) NSNumber *followerCount;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWECoCreatorModel *coCreatorModel;
@property (readonly, nonatomic) AWELiveUserRoomData *roomDataInfo;
@property (readonly, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setFollowerCount:(id)arg0;
- (id)followerCount;
- (id)coCreatorModel;
- (void)setCoCreatorModel:(id)arg0;
- (id)customVerify;
- (void)setCustomVerify:(id)arg0;
- (id)externModel;
- (void)setExternModel:(id)arg0;
- (BOOL)showFllowerCount;
- (BOOL)isAuthorCoCreator;
- (id)roomDataInfo;
- (void)setSecId:(id)arg0;
- (void)setShowFllowerCount:(BOOL)arg0;
- (void)setEnterpriseVerify:(id)arg0;
- (id)initWithNickName:(id)arg0 roleTitle:(id)arg1 avatar:(id)arg2 userId:(id)arg3 secId:(id)arg4 followerCount:(id)arg5 showFollowerCount:(BOOL)arg6 customVerify:(id)arg7 enterpriseVerify:(id)arg8 externModel:(id)arg9;
- (id)secId;
- (id)enterpriseVerify;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (id)userId;
- (id)userModel;
- (id)nickName;
- (unsigned long long)cellStyle;
- (void)setUserId:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (void)setCellStyle:(unsigned long long)arg0;
- (double)cellHeight;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;
- (id)roleTitle;
- (void)setRoleTitle:(id)arg0;

@end
