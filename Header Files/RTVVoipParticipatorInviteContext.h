//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber;

@interface RTVVoipParticipatorInviteContext : NSObject {
    BOOL _autoSelect;
    BOOL _disableSearch;
    BOOL _supportGroup;
    BOOL _disableEmptyImageView;
    NSString *_conversationID;
    NSString *_roomID;
    long long _voipType;
    NSArray *_defaultSelectedUserIDs;
    NSString *_customTitle;
    NSArray *_preferSelectedUserIDs;
    NSNumber *_maxSelectableCount;
    NSArray *_plugins;
    NSNumber *_topInset;
}

@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) long long voipType;
@property (readonly, copy, nonatomic) NSArray *defaultSelectedUserIDs;
@property (readonly, copy, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) BOOL autoSelect;
@property (readonly, copy, nonatomic) NSArray *preferSelectedUserIDs;
@property (readonly, nonatomic) NSNumber *maxSelectableCount;
@property (readonly, copy, nonatomic) NSArray *plugins;
@property (readonly, nonatomic) BOOL disableSearch;
@property (readonly, nonatomic) BOOL supportGroup;
@property (readonly, nonatomic) NSNumber *topInset;
@property (readonly, nonatomic) BOOL disableEmptyImageView;

- (BOOL)disableSearch;
- (id)initWithRoomID:(id)arg0 defaultSelectedUserIDs:(id)arg1 voipType:(long long)arg2;
- (void)updateTopInset:(id)arg0;
- (void)updateDisableEmptyImageView:(BOOL)arg0;
- (void)updateAutoSelect:(BOOL)arg0;
- (void)updateMaxSelectableCount:(id)arg0;
- (long long)voipType;
- (id)initWithConversationID:(id)arg0 defaultSelectedUserIDs:(id)arg1 voipType:(long long)arg2;
- (BOOL)supportGroup;
- (id)defaultSelectedUserIDs;
- (id)preferSelectedUserIDs;
- (BOOL)autoSelect;
- (id)maxSelectableCount;
- (BOOL)disableEmptyImageView;
- (void)updateCustomTitle:(id)arg0;
- (void)updatePreferSelectedUserIDs:(id)arg0;
- (void)updatePlugins:(id)arg0;
- (void)updateDisableSearch:(BOOL)arg0;
- (void)updateSupportGroup:(BOOL)arg0;
- (id)topInset;
- (void).cxx_destruct;
- (id)conversationID;
- (id)plugins;
- (id)roomID;
- (id)customTitle;

@end
