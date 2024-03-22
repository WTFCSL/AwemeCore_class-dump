//
//     Generated by private class-dump
//

@interface IESLiveMemberMessageStrategy : IESLiveMessageNodeStrategyV2 {
    double _lastMessageTime;
}

@property (nonatomic) double lastMessageTime;

- (double)lastMessageTime;
- (void)setLastMessageTime:(double)arg0;
- (BOOL)needFoldForMessage:(id)arg0;
- (BOOL)doFilterForMessageList:(id)arg0;
- (id)localNameColor;
- (id)localContentColor;
- (void)jointAttributedString:(id)arg0 withMessage:(id)arg1;
- (void)updateNodeOnCreatedV2:(id)arg0;
- (id)needLoadOtherImageURLsV2;
- (BOOL)isOwnersMessage:(id)arg0;
- (BOOL)enableAdminMessageShowInList:(id)arg0;
- (id)config;
- (id)contentString;

@end