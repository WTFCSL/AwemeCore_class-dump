//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIronManLandingPageSolidEntranceItemModel : AWEIronManLandingPageBaseRouterModel {
    BOOL _trackFlag;
    NSString *_title;
    NSString *_imageUrl;
    NSString *_linkUrl;
    NSString *_showText;
    long long _unreadCount;
    NSString *_extra;
    NSString *_moduleType;
    long long _entranceType;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *linkUrl;
@property (copy, nonatomic) NSString *showText;
@property (nonatomic) long long unreadCount;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *moduleType;
@property (nonatomic) long long entranceType;
@property (nonatomic) BOOL trackFlag;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (void)processData;
- (void)setShowText:(id)arg0;
- (long long)entranceType;
- (void)setEntranceType:(long long)arg0;
- (BOOL)trackFlag;
- (void)setTrackFlag:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setUnreadCount:(long long)arg0;
- (id)location;
- (id)extra;
- (id)title;
- (long long)unreadCount;
- (id)moduleType;
- (void)setTitle:(id)arg0;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;
- (void)setModuleType:(id)arg0;
- (id)showText;
- (id)linkUrl;
- (void)setLinkUrl:(id)arg0;

@end
