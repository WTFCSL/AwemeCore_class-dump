//
//     Generated by private class-dump
//

@class NSString;

@interface BDPPrivacyAccessInfo : NSObject {
    BOOL _delayToolBarAnimation;
    long long _privacyID;
    NSString *_toolBarIconName;
    NSString *_morePanelTitle;
    NSString *_morePanelIconName;
    NSString *_permissionName;
}

@property (nonatomic) long long privacyID;
@property (copy, nonatomic) NSString *toolBarIconName;
@property (nonatomic) BOOL delayToolBarAnimation;
@property (copy, nonatomic) NSString *morePanelTitle;
@property (copy, nonatomic) NSString *morePanelIconName;
@property (copy, nonatomic) NSString *permissionName;

+ (id)microphonePrivacyInfo;
+ (id)microphonePrivacyInfo;
+ (id)locationPrivacyInfo;
+ (id)locationPrivacyInfo;

- (void)setPrivacyID:(long long)arg0;
- (void)setToolBarIconName:(id)arg0;
- (BOOL)delayToolBarAnimation;
- (void)setDelayToolBarAnimation:(BOOL)arg0;
- (void)setMorePanelTitle:(id)arg0;
- (void)setMorePanelIconName:(id)arg0;
- (void)setPermissionName:(id)arg0;
- (id)toolBarIconName;
- (id)morePanelIconName;
- (id)morePanelTitle;
- (id)permissionName;
- (void).cxx_destruct;
- (long long)privacyID;

@end