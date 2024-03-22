//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AFDProfileAvatarButtonsConfig : MTLModel <MTLJSONSerializing> {
    BOOL _showNickname;
    BOOL _enableShareButton;
    NSArray *_unfollowButtons;
    NSString *_unfollowHighlightButton;
    NSArray *_followedButtons;
    NSString *_followedHighlightButton;
}

@property (nonatomic) BOOL showNickname;
@property (nonatomic) BOOL enableShareButton;
@property (copy, nonatomic) NSArray *unfollowButtons;
@property (copy, nonatomic) NSString *unfollowHighlightButton;
@property (copy, nonatomic) NSArray *followedButtons;
@property (copy, nonatomic) NSString *followedHighlightButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configuration;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)showNickname;
- (void)setShowNickname:(BOOL)arg0;
- (BOOL)enableShareButton;
- (void)setEnableShareButton:(BOOL)arg0;
- (id)unfollowButtons;
- (void)setUnfollowButtons:(id)arg0;
- (id)unfollowHighlightButton;
- (void)setUnfollowHighlightButton:(id)arg0;
- (id)followedButtons;
- (void)setFollowedButtons:(id)arg0;
- (id)followedHighlightButton;
- (void)setFollowedHighlightButton:(id)arg0;
- (void).cxx_destruct;

@end
