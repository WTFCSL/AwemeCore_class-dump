//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate;
@protocol TIMXMessageKVModelProtocol;

@protocol TIMXMessageModelProtocol <NSObject>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long serverMessageID;
@property (nonatomic) long long pullIndex;
@property (nonatomic) long long orderIndex;
@property (nonatomic) long long indexInConversationV2;
@property (retain, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) long long sender;
@property (retain, nonatomic) NSString *senderSecID;
@property (retain, nonatomic) NSDate *serverCreatedAt;
@property (retain, nonatomic) NSDate *localCreatedAt;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *ext;
@property (retain, nonatomic) NSString *localInfo;
@property (retain, nonatomic) NSString *userProfile;
@property (nonatomic) long long status;
@property (nonatomic) long long type;
@property (nonatomic) long long messageVersion;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL hasRead;
@property (nonatomic) BOOL unreadMention;
@property (nonatomic) long long hintType;
@property (readonly, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDictionary *extDictionary;
@property (retain, nonatomic) NSDictionary *userProfileDictionary;
@property (retain, nonatomic) NSDictionary *localInfoDictionary;
@property (retain, nonatomic) NSDictionary *contentDictionary;
@property (retain, nonatomic) NSDictionary *propertyMap;
@property (retain, nonatomic) NSDictionary *rawPropertyMap;
@property (retain, nonatomic) NSDictionary *userDefinedPropertyMap;
@property (retain, nonatomic) id<TIMXMessageKVModelProtocol> referMessageKVObj;
@property (nonatomic) long long belongingSubConvShortID;

- (void)setExt:(id)arg0;
- (long long)indexInConversationV2;
- (void)setIndexInConversationV2:(long long)arg0;
- (void)setServerMessageID:(long long)arg0;
- (long long)serverMessageID;
- (id)belongingConversationIdentifier;
- (long long)belongingSubConvShortID;
- (void)setHasRead:(BOOL)arg0;
- (id)localInfoDictionary;
- (void)setLocalInfoDictionary:(id)arg0;
- (long long)pullIndex;
- (id)extDictionary;
- (void)setExtDictionary:(id)arg0;
- (void)preSetupExt;
- (void)setPullIndex:(long long)arg0;
- (void)setBelongingConversationIdentifier:(id)arg0;
- (id)senderSecID;
- (void)setSenderSecID:(id)arg0;
- (id)serverCreatedAt;
- (void)setServerCreatedAt:(id)arg0;
- (id)localCreatedAt;
- (void)setLocalCreatedAt:(id)arg0;
- (id)localInfo;
- (void)setLocalInfo:(id)arg0;
- (BOOL)unreadMention;
- (void)setUnreadMention:(BOOL)arg0;
- (id)userProfileDictionary;
- (void)setUserProfileDictionary:(id)arg0;
- (void)setContentDictionary:(id)arg0;
- (id)rawPropertyMap;
- (void)setRawPropertyMap:(id)arg0;
- (void)setBelongingSubConvShortID:(long long)arg0;
- (id)referMessageKVObj;
- (void)setReferMessageKVObj:(id)arg0;
- (long long)hintType;
- (id)userDefinedPropertyMap;
- (void)setUserDefinedPropertyMap:(id)arg0;
- (void)setHintType:(long long)arg0;
- (long long)orderIndex;
- (void)setSender:(long long)arg0;
- (long long)sender;
- (long long)status;
- (long long)type;
- (id)content;
- (id)identifier;
- (void)setDeleted:(BOOL)arg0;
- (void)setType:(long long)arg0;
- (void)setStatus:(long long)arg0;
- (void)setContent:(id)arg0;
- (BOOL)deleted;
- (id)createdAt;
- (void)setIdentifier:(id)arg0;
- (void)setOrderIndex:(long long)arg0;
- (id)userProfile;
- (id)contentDictionary;
- (void)setUserProfile:(id)arg0;
- (long long)messageVersion;
- (void)setMessageVersion:(long long)arg0;
- (id)propertyMap;
- (BOOL)hasRead;
- (id)ext;
- (void)setPropertyMap:(id)arg0;

@end
