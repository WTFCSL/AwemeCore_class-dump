//
//     Generated by private class-dump
//

@class AWEIMIncentiveChatIdentity, AWEIMIncentiveChatActivityInfo, AWEIMIncentiveChatCellConf, NSDictionary, AWEIMIncentiveChatUIConf;

@interface AWEIMIncentiveChatInfo : NSObject {
    BOOL _hasTopWithdrawEntery;
    AWEIMIncentiveChatCellConf *_cellConf;
    AWEIMIncentiveChatUIConf *_uiConf;
    AWEIMIncentiveChatActivityInfo *_privateActivityInfo;
    AWEIMIncentiveChatActivityInfo *_groupActivityInfo;
    AWEIMIncentiveChatIdentity *_privateChatIdentity;
    AWEIMIncentiveChatIdentity *_groupChatIdentity;
    NSDictionary *_incentiveTasks;
}

@property (retain, nonatomic) AWEIMIncentiveChatCellConf *cellConf;
@property (retain, nonatomic) AWEIMIncentiveChatUIConf *uiConf;
@property (retain, nonatomic) AWEIMIncentiveChatActivityInfo *privateActivityInfo;
@property (retain, nonatomic) AWEIMIncentiveChatActivityInfo *groupActivityInfo;
@property (retain, nonatomic) AWEIMIncentiveChatIdentity *privateChatIdentity;
@property (retain, nonatomic) AWEIMIncentiveChatIdentity *groupChatIdentity;
@property (copy, nonatomic) NSDictionary *incentiveTasks;
@property (nonatomic) BOOL hasTopWithdrawEntery;

- (id)cellConf;
- (void)setCellConf:(id)arg0;
- (id)uiConf;
- (void)setUiConf:(id)arg0;
- (id)privateActivityInfo;
- (void)setPrivateActivityInfo:(id)arg0;
- (id)groupActivityInfo;
- (void)setGroupActivityInfo:(id)arg0;
- (id)privateChatIdentity;
- (void)setPrivateChatIdentity:(id)arg0;
- (id)groupChatIdentity;
- (void)setGroupChatIdentity:(id)arg0;
- (id)incentiveTasks;
- (void)setIncentiveTasks:(id)arg0;
- (BOOL)hasTopWithdrawEntery;
- (void)setHasTopWithdrawEntery:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;

@end