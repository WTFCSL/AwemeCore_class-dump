//
//     Generated by private class-dump
//

@class AWEUserProfileWeightModel, NSString, NSArray, UIImage, NSDate, AWEUserHometownModel, NSDictionary, AWEUserAvatarDecotationModel;

@interface AWEProfileEditViewModel : NSObject <AWEProfileEditViewModelProtocol> {
    BOOL _ifDefaultID;
    BOOL _hideLocation;
    BOOL _useDefaultAvatar;
    BOOL _useDefaultNickname;
    BOOL _hometownInvisible;
    float _completionPercent;
    NSString *_userID;
    UIImage *_avatarImage;
    NSArray *_avatarURL;
    UIImage *_videoIconImage;
    NSArray *_videoIconURL;
    NSArray *_videoMp4IconURL;
    NSString *_nickname;
    NSString *_alias;
    NSString *_uniqueID;
    NSDate *_uniqueIdModifyTime;
    NSString *_gender;
    unsigned long long _showGenderStrategy;
    NSString *_birthDate;
    NSString *_signature;
    NSString *_profileSignature;
    NSString *_liveTimeNoticeText;
    NSString *_avatarURI;
    NSString *_videoIconURI;
    long long _genderType;
    NSString *_countryCode;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    NSString *_locationDisplayText;
    NSString *_schoolName;
    NSString *_schoolPoiId;
    NSString *_jobName;
    NSString *_collegeName;
    NSString *_enrollYear;
    unsigned long long _educationType;
    unsigned long long _schoolVisibleType;
    NSString *_twitterNameToShow;
    NSString *_insId;
    NSString *_youtubeChannelTitle;
    NSString *_youtubeChannelId;
    NSString *_googleAccount;
    NSString *_youtubeRefreshToken;
    AWEUserAvatarDecotationModel *_decorationModel;
    long long _birthdayHideLevel;
    NSString *_enterpriseVerifyInfo;
    NSString *_enterpriseBrand;
    NSString *_companyIosDownladLink;
    NSString *_companyAndroidDownladLink;
    AWEUserHometownModel *_hometown;
    NSString *_hometownDisplayText;
    AWEUserProfileWeightModel *_userProfileWeight;
    NSArray *_coverList;
    NSDictionary *_tipLabelDict;
    NSString *_avatarButtonChangeLabelText;
}

@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) NSArray *avatarURL;
@property (retain, nonatomic) UIImage *videoIconImage;
@property (retain, nonatomic) NSArray *videoIconURL;
@property (retain, nonatomic) NSArray *videoMp4IconURL;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSDate *uniqueIdModifyTime;
@property (retain, nonatomic) NSString *gender;
@property (nonatomic) unsigned long long showGenderStrategy;
@property (retain, nonatomic) NSString *birthDate;
@property (retain, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *profileSignature;
@property (copy, nonatomic) NSString *liveTimeNoticeText;
@property (retain, nonatomic) NSString *avatarURI;
@property (retain, nonatomic) NSString *videoIconURI;
@property (nonatomic) long long genderType;
@property (nonatomic) BOOL ifDefaultID;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *locationDisplayText;
@property (copy, nonatomic) NSString *schoolName;
@property (copy, nonatomic) NSString *schoolPoiId;
@property (copy, nonatomic) NSString *jobName;
@property (copy, nonatomic) NSString *collegeName;
@property (copy, nonatomic) NSString *enrollYear;
@property (nonatomic) unsigned long long educationType;
@property (nonatomic) unsigned long long schoolVisibleType;
@property (copy, nonatomic) NSString *twitterNameToShow;
@property (copy, nonatomic) NSString *insId;
@property (copy, nonatomic) NSString *youtubeChannelTitle;
@property (copy, nonatomic) NSString *youtubeChannelId;
@property (copy, nonatomic) NSString *googleAccount;
@property (copy, nonatomic) NSString *youtubeRefreshToken;
@property (retain, nonatomic) AWEUserAvatarDecotationModel *decorationModel;
@property (nonatomic) BOOL hideLocation;
@property (nonatomic) long long birthdayHideLevel;
@property (nonatomic) BOOL useDefaultAvatar;
@property (nonatomic) BOOL useDefaultNickname;
@property (nonatomic) float completionPercent;
@property (copy, nonatomic) NSString *enterpriseVerifyInfo;
@property (copy, nonatomic) NSString *enterpriseBrand;
@property (copy, nonatomic) NSString *companyIosDownladLink;
@property (copy, nonatomic) NSString *companyAndroidDownladLink;
@property (retain, nonatomic) AWEUserHometownModel *hometown;
@property (nonatomic) BOOL hometownInvisible;
@property (copy, nonatomic) NSString *hometownDisplayText;
@property (retain, nonatomic) AWEUserProfileWeightModel *userProfileWeight;
@property (retain, nonatomic) NSArray *coverList;
@property (retain, nonatomic) NSDictionary *tipLabelDict;
@property (retain, nonatomic) NSString *avatarButtonChangeLabelText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (void)setSchoolName:(id)arg0;
- (void)setProvince:(id)arg0;
- (id)province;
- (id)coverList;
- (void)setCoverList:(id)arg0;
- (void)setBirthdayHideLevel:(long long)arg0;
- (long long)birthdayHideLevel;
- (id)enterpriseVerifyInfo;
- (void)setEnterpriseVerifyInfo:(id)arg0;
- (BOOL)hideLocation;
- (id)schoolPoiId;
- (id)uniqueIdModifyTime;
- (id)insId;
- (id)googleAccount;
- (id)youtubeChannelId;
- (id)youtubeChannelTitle;
- (id)collegeName;
- (id)enrollYear;
- (unsigned long long)showGenderStrategy;
- (id)decorationModel;
- (void)setDecorationModel:(id)arg0;
- (void)setCollegeName:(id)arg0;
- (void)setEnrollYear:(id)arg0;
- (unsigned long long)schoolVisibleType;
- (void)setHideLocation:(BOOL)arg0;
- (void)setSchoolVisibleType:(unsigned long long)arg0;
- (void)setShowGenderStrategy:(unsigned long long)arg0;
- (id)hometown;
- (id)avatarURI;
- (void)setAvatarURI:(id)arg0;
- (void)refreshWithUser:(id)arg0;
- (float)completionPercent;
- (void)setCompletionPercent:(float)arg0;
- (void)setProfileSignature:(id)arg0;
- (void)setUseDefaultAvatar:(BOOL)arg0;
- (void)setUseDefaultNickname:(BOOL)arg0;
- (id)profileSignature;
- (BOOL)useDefaultAvatar;
- (BOOL)useDefaultNickname;
- (void)setYoutubeChannelId:(id)arg0;
- (void)setInsId:(id)arg0;
- (id)twitterNameToShow;
- (void)setUniqueIdModifyTime:(id)arg0;
- (void)setSchoolPoiId:(id)arg0;
- (unsigned long long)educationType;
- (void)setEducationType:(unsigned long long)arg0;
- (void)setYoutubeChannelTitle:(id)arg0;
- (id)youtubeRefreshToken;
- (void)setYoutubeRefreshToken:(id)arg0;
- (void)setGoogleAccount:(id)arg0;
- (void)setHometown:(id)arg0;
- (BOOL)hometownInvisible;
- (void)setHometownInvisible:(BOOL)arg0;
- (id)avatarButtonChangeLabelText;
- (id)tipLabelDict;
- (id)userProfileWeight;
- (void)getEnterpriseBrand:(id /* block */)arg0;
- (id)videoIconURL;
- (id)locationDisplayText;
- (id)liveTimeNoticeText;
- (void)setLiveTimeNoticeText:(id)arg0;
- (void)setVideoIconURL:(id)arg0;
- (void)setTwitterNameToShow:(id)arg0;
- (void)setIfDefaultID:(BOOL)arg0;
- (void)refreshLocationDisplayText;
- (void)refreshHometownDisplayText;
- (void)setCompanyIosDownladLink:(id)arg0;
- (void)setCompanyAndroidDownladLink:(id)arg0;
- (void)setUserProfileWeight:(id)arg0;
- (id)getCoverListFromUser:(id)arg0;
- (void)setTipLabelDict:(id)arg0;
- (void)setEnterpriseBrand:(id)arg0;
- (void)setLocationDisplayText:(id)arg0;
- (void)setHometownDisplayText:(id)arg0;
- (id)videoIconImage;
- (void)setVideoIconImage:(id)arg0;
- (id)videoMp4IconURL;
- (void)setVideoMp4IconURL:(id)arg0;
- (id)videoIconURI;
- (void)setVideoIconURI:(id)arg0;
- (BOOL)ifDefaultID;
- (id)enterpriseBrand;
- (id)companyIosDownladLink;
- (id)companyAndroidDownladLink;
- (id)hometownDisplayText;
- (void)setAvatarButtonChangeLabelText:(id)arg0;
- (void)setSignature:(id)arg0;
- (id)alias;
- (id)userID;
- (id)countryCode;
- (id)signature;
- (id)city;
- (id)country;
- (void)setCountryCode:(id)arg0;
- (id)nickname;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setCity:(id)arg0;
- (void)setUniqueID:(id)arg0;
- (void)setUserID:(id)arg0;
- (void)setNickname:(id)arg0;
- (id)gender;
- (id)jobName;
- (void)setCountry:(id)arg0;
- (void)setAlias:(id)arg0;
- (void)setGender:(id)arg0;
- (void)setAvatarImage:(id)arg0;
- (id)avatarImage;
- (void)setJobName:(id)arg0;
- (long long)genderType;
- (void)setGenderType:(long long)arg0;
- (id)birthDate;
- (void)setDistrict:(id)arg0;
- (id)district;
- (void)setBirthDate:(id)arg0;
- (id)schoolName;

@end
