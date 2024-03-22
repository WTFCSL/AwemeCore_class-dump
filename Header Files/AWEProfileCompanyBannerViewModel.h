//
//     Generated by private class-dump
//

@class NSString, AWEUserCommercePermissionModel, NSArray, AWEProfileHeaderContext, AWEUserModel, AWEProfileCoverInfoModel, AWEFeature, AWECommerceModel;
@protocol AWEEnterpriseUserInfoProtocol;

@interface AWEProfileCompanyBannerViewModel : NSObject {
    BOOL _isNeedHiddenAtticTips;
    BOOL _isCurrentUser;
    NSString *_creativeID;
    AWEProfileCoverInfoModel *_coverAndHeadImageInfo;
    AWEUserModel *_user;
    AWEProfileHeaderContext *_data;
    AWEFeature<AWEEnterpriseUserInfoProtocol> *_userInfoFeature;
}

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEProfileHeaderContext *data;
@property (retain, nonatomic) AWEFeature<AWEEnterpriseUserInfoProtocol> *userInfoFeature;
@property (nonatomic) BOOL isNeedHiddenAtticTips;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) NSString *creativeID;
@property (retain, nonatomic) AWEProfileCoverInfoModel *coverAndHeadImageInfo;
@property (readonly, nonatomic) NSString *atticInfoImgUri;
@property (readonly, nonatomic) BOOL hasHeadImagePermission;
@property (readonly, nonatomic) BOOL enableEproject;
@property (readonly, nonatomic) NSArray *coverUrlList;
@property (readonly, nonatomic) NSArray *headerImageUrlModels;
@property (readonly, nonatomic) NSString *eProjectcoverTransferUrl;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) NSString *atticInfoIronManUrl;
@property (readonly, nonatomic) BOOL isCompanyProfile;
@property (readonly, nonatomic) AWEUserCommercePermissionModel *commercePermission;
@property (readonly, nonatomic) AWECommerceModel *commerceModel;
@property (readonly, nonatomic) AWEUserModel *userModel;
@property (readonly, nonatomic) BOOL fromHomepage;

+ (id)viewModelWithData:(id)arg0;

- (void)setCreativeID:(id)arg0;
- (id)commerceModel;
- (BOOL)isCompanyProfile;
- (id)coverUrlList;
- (id)coverAndHeadImageInfo;
- (id)atticInfoIronManUrl;
- (id)commercePermission;
- (BOOL)hasHeadImagePermission;
- (BOOL)fromHomepage;
- (id)eProjectcoverTransferUrl;
- (BOOL)enableEproject;
- (void)configAwemeModel:(id)arg0;
- (void)_processData;
- (BOOL)isNeedHiddenAtticTips;
- (id)atticInfoImgUri;
- (id)userInfoFeature;
- (void)setIsNeedHiddenAtticTips:(BOOL)arg0;
- (void)setCoverAndHeadImageInfo:(id)arg0;
- (id)headerImageUrlModels;
- (void)setUserInfoFeature:(id)arg0;
- (void)setUser:(id)arg0;
- (id)data;
- (id)user;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)userId;
- (id)userModel;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (id)initWithUserData:(id)arg0;
- (id)creativeID;

@end
