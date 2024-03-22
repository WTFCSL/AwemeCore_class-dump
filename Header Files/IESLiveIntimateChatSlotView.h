//
//     Generated by private class-dump
//

@class HTSGuestInfoView, HTSLiveUser;

@interface IESLiveIntimateChatSlotView : UIView {
    BOOL _isStrongRemindView;
    BOOL _isConnecting;
    BOOL _isPreView;
    HTSGuestInfoView *_infoView;
    HTSLiveUser *_user;
}

@property (retain, nonatomic) HTSGuestInfoView *infoView;
@property (nonatomic) BOOL isStrongRemindView;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL isConnecting;
@property (nonatomic) BOOL isPreView;

- (BOOL)isPreView;
- (void)setIsPreView:(BOOL)arg0;
- (BOOL)isStrongRemindView;
- (void)fitOutGuestInfoView:(id)arg0;
- (void)addStrongRemindView:(id)arg0;
- (void)removeStrongRemindView;
- (BOOL)isSameStrongRemindWithUser:(id)arg0;
- (void)setIsStrongRemindView:(BOOL)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (BOOL)isConnecting;
- (void).cxx_destruct;
- (id)infoView;
- (void)setInfoView:(id)arg0;
- (void)setIsConnecting:(BOOL)arg0;

@end