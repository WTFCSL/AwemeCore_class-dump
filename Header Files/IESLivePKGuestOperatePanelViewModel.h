//
//     Generated by private class-dump
//

@class IESLivePKGuestEmojiAPI, NSArray, NSString, IESLivePKGuestOperatePanelConfig, IESLivePopupItem;
@protocol IESLiveInteractUserModel, IESLivePKGuestOperatePanelViewModelDelegate;

@interface IESLivePKGuestOperatePanelViewModel : NSObject {
    BOOL _showEmoji;
    BOOL _isMute;
    BOOL _isFollow;
    NSString *_requestPage;
    long long _loadingStatus;
    IESLivePopupItem *_popupItem;
    id<IESLiveInteractUserModel> _interactGuestUser;
    id<IESLivePKGuestOperatePanelViewModelDelegate> _delegate;
    NSArray *_emojiPages;
    NSArray *_panelItems;
    NSArray *_modeItems;
    IESLivePKGuestEmojiAPI *_api;
    IESLivePKGuestOperatePanelConfig *_config;
    unsigned long long _emojiLines;
}

@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isFollow;
@property (copy, nonatomic) NSArray *panelItems;
@property (copy, nonatomic) NSArray *modeItems;
@property (retain, nonatomic) IESLivePKGuestEmojiAPI *api;
@property (retain, nonatomic) IESLivePKGuestOperatePanelConfig *config;
@property (nonatomic) unsigned long long emojiLines;
@property (copy, nonatomic) NSString *requestPage;
@property (nonatomic) long long loadingStatus;
@property (weak, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) id<IESLiveInteractUserModel> interactGuestUser;
@property (weak, nonatomic) id<IESLivePKGuestOperatePanelViewModelDelegate> delegate;
@property (copy, nonatomic) NSArray *emojiPages;
@property (nonatomic) BOOL showEmoji;

- (void)didClickFollowButton;
- (void)setIsMute:(BOOL)arg0;
- (id)panelTitle;
- (id)requestPage;
- (void)setRequestPage:(id)arg0;
- (void)hidePanel;
- (BOOL)isFollow;
- (void)setIsFollow:(BOOL)arg0;
- (void)setPanelItems:(id)arg0;
- (id)panelItems;
- (void)setPopupItem:(id)arg0;
- (id)popupItem;
- (void)didClickMuteButton:(BOOL)arg0;
- (void)setShowEmoji:(BOOL)arg0;
- (void)setInteractGuestUser:(id)arg0;
- (unsigned long long)initialEmojiLines;
- (BOOL)isOthersPanel;
- (id)emojiPages;
- (void)setEmojiPages:(id)arg0;
- (void)didShowEmoji:(id)arg0;
- (void)didSelectEmoji:(id)arg0;
- (BOOL)showEmoji;
- (id)renderItems;
- (id)renderConnectModeItems;
- (BOOL)showCenterTitle;
- (id)interactGuestUser;
- (BOOL)isTopRightDisconnect;
- (BOOL)showConnectionIcon;
- (void)didClickConnectionButton;
- (void)updatePanelItemWithType:(long long)arg0;
- (unsigned long long)requestEmojiCategory;
- (id)reformEmojiPageFromList:(id)arg0;
- (unsigned long long)emojiLinesWithPages:(id)arg0;
- (void)setEmojiLines:(unsigned long long)arg0;
- (void)fetchEmojiList:(BOOL)arg0 emojiCategory:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)othersPanelItemTypes;
- (id)makePanelItemWithType:(long long)arg0;
- (id)selfPanelItemTypes;
- (id)modeItems;
- (id)selfConnectModeTypes;
- (void)setModeItems:(id)arg0;
- (BOOL)isSingleLineEmojiList;
- (id)itemInfoForType:(long long)arg0;
- (BOOL)showMuteIcon;
- (BOOL)showCameraOption;
- (BOOL)showVideoModeIcon;
- (int)currentConnectMode;
- (BOOL)showBeautyIcon;
- (BOOL)showAudioModeIcon;
- (void)didClickUserInfoButton;
- (BOOL)precheckOthersConnection;
- (id)pr_reformEmojiPageFromList:(id)arg0 withMaxLines:(unsigned long long)arg1;
- (void)unFollowAction:(id)arg0 trackParams:(id)arg1 extra:(id)arg2;
- (void)followAction:(id)arg0 trackParams:(id)arg1 extra:(id)arg2;
- (unsigned long long)emojiLines;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setLoadingStatus:(long long)arg0;
- (void)fetchData;
- (long long)loadingStatus;
- (id)initWithConfig:(id)arg0;
- (id)delegate;
- (id)currentUser;
- (void)setDelegate:(id)arg0;
- (id)api;
- (BOOL)isMute;
- (void)setApi:(id)arg0;

@end