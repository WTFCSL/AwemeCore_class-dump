//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@protocol IESIMSDKBaseConversationModel <NSObject>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long boxTypeMask;
@property (nonatomic) long long unreadNeglectMask;
@property (nonatomic) long long unreadCount;
@property (nonatomic) long long processedUnreadCount;
@property (retain, nonatomic) NSDictionary *localInfoDictionary;
@property (copy, nonatomic) NSString *lastHintMessageIdentifier;

- (id)localInfoDictionary;
- (void)setLocalInfoDictionary:(id)arg0;
- (id)iesim_normalModel;
- (long long)boxTypeMask;
- (void)setBoxTypeMask:(long long)arg0;
- (long long)unreadNeglectMask;
- (void)setUnreadNeglectMask:(long long)arg0;
- (id)lastHintMessageIdentifier;
- (long long)processedUnreadCount;
- (void)setProcessedUnreadCount:(long long)arg0;
- (void)setLastHintMessageIdentifier:(id)arg0;
- (id)iesim_coreInfo;
- (id)iesim_settingInfo;
- (id)iesim_participantList;
- (void)setUnreadCount:(long long)arg0;
- (unsigned long long)type;
- (id)identifier;
- (void)setType:(unsigned long long)arg0;
- (long long)unreadCount;
- (void)setIdentifier:(id)arg0;

@end
