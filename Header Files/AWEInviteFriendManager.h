//
//     Generated by private class-dump
//

@class NSString;

@interface AWEInviteFriendManager : NSObject <AWEInviteFriendProtocol> {
    BOOL _isRequestOnAir;
}

@property (nonatomic) BOOL isRequestOnAir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (void)handleContactTappedWithEnterFrom:(id)arg0 request:(id)arg1 load:(id)arg2;
- (void)handleCommandTappedWithEnterFrom:(id)arg0 enterMethod:(id)arg1 channelType:(unsigned long long)arg2;
- (void)generateTextCodeAndTransferToWeChatWithParams:(id)arg0;
- (void)fetchInviteFriendsTokenWithUser:(id)arg0 customItemID:(id)arg1 customTargetType:(unsigned long long)arg2 customWebURL:(id)arg3 completion:(id /* block */)arg4;
- (void)handleContactTappedWithEnterFrom:(id)arg0 enterMethod:(id)arg1 request:(id)arg2 load:(id)arg3;
- (void)handleScanTapped:(id)arg0 enterMethod:(id)arg1;
- (void)handleQRCodeTappedWithEnterFrom:(id)arg0 enterMethod:(id)arg1;
- (void)handleQRCodeTappedWithEnterFrom:(id)arg0;
- (void)handleScanTapped:(id)arg0;
- (void)handleCommandTappedWithEnterFrom:(id)arg0;
- (void)handleRadarTappedWithEnterFrom:(id)arg0;
- (void)handleRadarTapped;
- (void)showInviteFriendForCellType:(unsigned long long)arg0 onViewController:(id)arg1 enterFrom:(id)arg2;
- (id)cellModelForType:(unsigned long long)arg0;
- (void)inviteFriendWithPlatform:(long long)arg0 model:(id)arg1 enterFrom:(id)arg2;
- (void)trackAddProfileFriendsWithParams:(id)arg0;
- (void)trackShareTokenWithParams:(id)arg0;
- (void)handleCommandTapped;

@end
