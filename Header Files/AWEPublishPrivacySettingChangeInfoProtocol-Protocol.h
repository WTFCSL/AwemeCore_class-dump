//
//     Generated by private class-dump
//

@class NSDictionary;

@protocol AWEPublishPrivacySettingChangeInfoProtocol <NSObject>

@property (nonatomic) unsigned long long oldPrivacyOption;
@property (nonatomic) unsigned long long newPrivacyOption;
@property (nonatomic) BOOL isExclusionSelected;
@property (nonatomic) BOOL isHideSearch;
@property (copy, nonatomic) NSDictionary *param;
@property (nonatomic) BOOL isTrackable;
@property (nonatomic) BOOL isPartOfVisibleSelected;
@property (nonatomic) BOOL isCloseFriendsSelected;

- (BOOL)isHideSearch;
- (void)setIsHideSearch:(BOOL)arg0;
- (BOOL)isExclusionSelected;
- (void)setIsExclusionSelected:(BOOL)arg0;
- (BOOL)isPartOfVisibleSelected;
- (BOOL)isCloseFriendsSelected;
- (void)setIsPartOfVisibleSelected:(BOOL)arg0;
- (void)setIsCloseFriendsSelected:(BOOL)arg0;
- (void)setIsTrackable:(BOOL)arg0;
- (BOOL)isTrackable;
- (unsigned long long)newPrivacyOption;
- (unsigned long long)oldPrivacyOption;
- (void)setOldPrivacyOption:(unsigned long long)arg0;
- (void)setNewPrivacyOption:(unsigned long long)arg0;
- (void)setParam:(id)arg0;
- (id)param;

@end