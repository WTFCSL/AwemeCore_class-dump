//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, GPBInt32ObjectDictionary;

@interface HTSLiveUser_FansClub_FansClubData_UserBadge : IESLivePBBaseMessage

@property (readonly, nonatomic) HTSLiveImage *preferIcon;
@property (readonly, nonatomic) HTSLiveImage *subscribeIcon;
@property (retain, nonatomic) GPBInt32ObjectDictionary *icons;
@property (readonly, nonatomic) unsigned long long icons_Count;
@property (copy, nonatomic) NSString *title;

+ (id)descriptor;

- (id)preferIcon;
- (id)subscribeIcon;

@end