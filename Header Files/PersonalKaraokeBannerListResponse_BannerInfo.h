//
//     Generated by private class-dump
//

@class NSString, PersonalKaraokeBannerListResponse_ActivityContent;

@interface PersonalKaraokeBannerListResponse_BannerInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *imgURL;
@property (retain, nonatomic) PersonalKaraokeBannerListResponse_ActivityContent *activityContent;
@property (nonatomic) BOOL hasActivityContent;

+ (id)descriptor;

@end
