//
//     Generated by private class-dump
//

@class NSString, IESLiveInteractiveEditSeatPanelViewModel, HTSLiveUser;

@interface IESLiveInteractionEmojiPanelConfig : NSObject {
    BOOL _isSelf;
    BOOL _isAnonymous;
    BOOL _isFromCrossRoom;
    BOOL _isOnlyAvatarEmojiForAnchor;
    HTSLiveUser *_currentUser;
    NSString *_title;
    long long _titlePosition;
    unsigned long long _optionItems;
    unsigned long long _connectModeItems;
    IESLiveInteractiveEditSeatPanelViewModel *_editSeatNameViewModel;
}

@property (nonatomic) BOOL isSelf;
@property (retain, nonatomic) HTSLiveUser *currentUser;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) BOOL isFromCrossRoom;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long titlePosition;
@property (nonatomic) unsigned long long optionItems;
@property (nonatomic) unsigned long long connectModeItems;
@property (nonatomic) BOOL isOnlyAvatarEmojiForAnchor;
@property (retain, nonatomic) IESLiveInteractiveEditSeatPanelViewModel *editSeatNameViewModel;

- (unsigned long long)connectModeItems;
- (void)setConnectModeItems:(unsigned long long)arg0;
- (BOOL)isFromCrossRoom;
- (void)setIsFromCrossRoom:(BOOL)arg0;
- (BOOL)isOnlyAvatarEmojiForAnchor;
- (void)setIsOnlyAvatarEmojiForAnchor:(BOOL)arg0;
- (id)editSeatNameViewModel;
- (void)setEditSeatNameViewModel:(id)arg0;
- (BOOL)isAnonymous;
- (id)init;
- (void).cxx_destruct;
- (id)title;
- (id)currentUser;
- (void)setCurrentUser:(id)arg0;
- (void)setIsAnonymous:(BOOL)arg0;
- (void)setTitle:(id)arg0;
- (void)setIsSelf:(BOOL)arg0;
- (BOOL)isSelf;
- (long long)titlePosition;
- (void)setTitlePosition:(long long)arg0;
- (unsigned long long)optionItems;
- (void)setOptionItems:(unsigned long long)arg0;

@end
