//
//     Generated by private class-dump
//

@class NSDate, NSString, NSArray, NSLock, TIMXOReferMessageInfo, NSMutableDictionary, NSDictionary, TIMXOSenderProfile, TIMXOMessageEditInfo, NSNumber;
@protocol TIMXMessageModelProtocol, IESIMReferMessageInfoProtocol, IESIMMessageEditInfoProtocol;

@interface TIMXOMessage : TIMXOModel <IESIMMessageProtocol, IESIMMessagePrivateProtocol, TIMXMessageStoreChangesObserver, TIMXNotifierDelegate> {
    BOOL _referIsRootMessage;
    BOOL _recalled;
    BOOL _isFromServer;
    BOOL _isPined;
    BOOL _isMarkedUnRead;
    int _fileUploadProgressPercentage;
    int _fileDownloadProgressPercentage;
    int _fileSendingProgressPercentage;
    NSNumber *_orderInConversation;
    NSNumber *_indexInConversation;
    long long _pullIndex;
    NSString *_identifier;
    NSString *_belongingConversationIdentifier;
    long long _sender;
    NSString *_senderSecID;
    NSDictionary *_content;
    long long _messageType;
    NSDate *_createdAt;
    long long _status;
    NSNumber *_serverMessageID;
    NSArray *_mentionedUsers;
    long long _hintType;
    NSDictionary *_syncedExt;
    long long _belongingSubConvShortID;
    NSDictionary *_localExt;
    NSDictionary *_userProfileExt;
    NSDictionary *_properties;
    TIMXOSenderProfile *_senderProfile;
    TIMXOReferMessageInfo *_referMessageInfo;
    long long _referChildMessageCount;
    NSArray *_fileAttachments;
    NSArray *_messageBodyFiles;
    NSDictionary *_recalledContent;
    long long _recallerRole;
    long long _recallerUserID;
    long long _conversationShortID;
    unsigned long long _conversationType;
    TIMXOMessageEditInfo *_editInfo;
    NSDictionary *_syncedExtInternal;
    NSDictionary *_localExtInternal;
    id<TIMXMessageModelProtocol> _internalModelStore;
    long long _orderIndex;
    long long _indexV2;
    NSString *_observerID;
    NSArray *_fileIDs;
    NSString *_fileObserverID;
    NSLock *_fileProgressLock;
    NSMutableDictionary *_fileProgresses;
    NSString *_fileUploadObserverID;
    NSString *_fileDownloadObserverID;
    NSMutableDictionary *_dicmFileUploadProgress;
    NSMutableDictionary *_dicmFileDownloadProgress;
    NSDictionary *_propertyMap;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *belongingConversationIdentifier;
@property (readonly) NSDictionary *content;
@property (readonly) BOOL recalled;
@property (readonly) long long recallerRole;
@property (readonly) NSDictionary *recalledContent;
@property (readonly) NSNumber *serverMessageID;
@property (readonly) NSDate *createdAt;
@property (readonly) long long messageType;
@property (readonly) long long sender;
@property (readonly, nonatomic) BOOL isInvalided;
@property (readonly) NSString *senderSecID;
@property (readonly) long long hintType;
@property (readonly) long long status;
@property (readonly) NSDictionary *syncedExt;
@property (readonly) NSDictionary *localExt;
@property (readonly) NSDictionary *properties;
@property (readonly) id<IESIMReferMessageInfoProtocol> referMessageInfo;
@property (readonly) id<IESIMMessageEditInfoProtocol> editInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isFromServer;
@property (retain) NSDictionary *syncedExtInternal;
@property (retain) NSDictionary *localExtInternal;
@property (readonly) int fileSendingProgressPercentage;
@property (readonly, copy, nonatomic) NSArray *markMessageFiles;
@property (retain) NSString *identifier;
@property (retain) NSString *belongingConversationIdentifier;
@property (retain, nonatomic) NSNumber *orderInConversation;
@property (retain, nonatomic) NSNumber *indexInConversation;
@property long long sender;
@property (retain) NSString *senderSecID;
@property (retain) NSDictionary *content;
@property long long messageType;
@property (retain) NSArray *mentionedUsers;
@property long long hintType;
@property (retain) NSDictionary *syncedExtInternal;
@property (retain) NSDictionary *syncedExt;
@property (retain) NSDictionary *localExt;
@property (retain) NSDictionary *localExtInternal;
@property (retain) NSDate *createdAt;
@property (retain) NSArray *fileAttachments;
@property (retain) NSNumber *serverMessageID;
@property long long status;
@property int fileSendingProgressPercentage;
@property (retain) id<TIMXMessageModelProtocol> internalModel;
@property (retain) id<TIMXMessageModelProtocol> internalModelStore;
@property long long pullIndex;
@property long long orderIndex;
@property long long indexV2;
@property (retain) NSString *observerID;
@property (retain) NSArray *fileIDs;
@property (retain) NSString *fileObserverID;
@property (retain) NSLock *fileProgressLock;
@property (retain) NSMutableDictionary *fileProgresses;
@property (retain) NSString *fileUploadObserverID;
@property (retain) NSString *fileDownloadObserverID;
@property (retain) NSMutableDictionary *dicmFileUploadProgress;
@property (retain) NSMutableDictionary *dicmFileDownloadProgress;
@property int fileUploadProgressPercentage;
@property int fileDownloadProgressPercentage;
@property BOOL recalled;
@property (retain) NSDictionary *recalledContent;
@property long long recallerRole;
@property long long recallerUserID;
@property (copy) NSDictionary *propertyMap;
@property (retain) NSDictionary *properties;
@property (retain) TIMXOSenderProfile *senderProfile;
@property (retain) TIMXOReferMessageInfo *referMessageInfo;
@property (nonatomic) BOOL referIsRootMessage;
@property (nonatomic) long long referChildMessageCount;
@property (nonatomic) BOOL isFromServer;
@property (copy, nonatomic) NSArray *messageBodyFiles;
@property (nonatomic) long long conversationShortID;
@property (nonatomic) unsigned long long conversationType;
@property (nonatomic) BOOL isPined;
@property (nonatomic) BOOL isMarkedUnRead;
@property (retain) TIMXOMessageEditInfo *editInfo;
@property long long belongingSubConvShortID;
@property (readonly) NSDictionary *userProfileExt;
@property (readonly) long long broadCastPullIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithRootObject:(id)arg0 identifier:(id)arg1 inConversation:(id)arg2;
+ (BOOL)isPined:(id)arg0;
+ (BOOL)isMarkedUnRead:(id)arg0;
+ (id)instanceWithRootObject:(id)arg0 messageModel:(id)arg1 useCache:(BOOL)arg2;
+ (id)noCachedInstanceWithRootObject:(id)arg0 dbModel:(id)arg1;
+ (id)instanceWithRootObject:(id)arg0 messageServerID:(long long)arg1 conversationID:(id)arg2;
+ (id)instanceWithRootObject:(id)arg0 messageServerID:(long long)arg1 conversationShortID:(long long)arg2;
+ (id)cachedInstanceWithRootObject:(id)arg0 identifier:(id)arg1;
+ (id)noCachedInstanceWithRootObject:(id)arg0 messageModel:(id)arg1;
+ (id)getEditInfo:(id)arg0;

- (void)deleteWithMode:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (id)localExt;
- (id)syncedExt;
- (void)setSyncedExt:(id)arg0;
- (void)setLocalExt:(id)arg0;
- (unsigned long long)conversationType;
- (void)setConversationType:(unsigned long long)arg0;
- (id)indexInConversation;
- (void)setIndexInConversation:(id)arg0;
- (id)orderInConversation;
- (void)setOrderInConversation:(id)arg0;
- (void)setServerMessageID:(id)arg0;
- (void)setLocalExtEntry:(id)arg0 value:(id)arg1 completion:(id /* block */)arg2;
- (void)setLocalExtWithKeys:(id)arg0 values:(id)arg1 completion:(id /* block */)arg2;
- (id)serverMessageID;
- (id)syncedExtInternal;
- (id)belongingConversationIdentifier;
- (long long)belongingSubConvShortID;
- (void)updateMessage:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)setConversationShortID:(long long)arg0;
- (long long)conversationShortID;
- (id)mentionedUsers;
- (void)setMentionedUsers:(id)arg0;
- (void)forceRefreshFromDB;
- (long long)pullIndex;
- (void)file:(id)arg0 uploadProgressChangedTo:(float)arg1;
- (void)file:(id)arg0 downloadProgressChangedTo:(float)arg1;
- (void)setPullIndex:(long long)arg0;
- (void)setBelongingConversationIdentifier:(id)arg0;
- (id)senderSecID;
- (void)setSenderSecID:(id)arg0;
- (void)setBelongingSubConvShortID:(long long)arg0;
- (void)onConversationsDeleted:(id)arg0;
- (void)onConversationCleared:(id)arg0;
- (void)setSyncedExtInternal:(id)arg0;
- (void)applyAttributesFromModel:(id)arg0;
- (void)setObserverID:(id)arg0;
- (void)setUpWithModel:(id)arg0;
- (void)setIsFromServer:(BOOL)arg0;
- (void)setIsPined:(BOOL)arg0;
- (void)setIsMarkedUnRead:(BOOL)arg0;
- (id)recalledContent;
- (void)setRecalledContent:(id)arg0;
- (long long)recallerRole;
- (void)setRecallerRole:(long long)arg0;
- (long long)recallerUserID;
- (void)setRecallerUserID:(long long)arg0;
- (id)localExtInternal;
- (void)setLocalExtInternal:(id)arg0;
- (void)recallMessageWithCompletion:(id /* block */)arg0;
- (BOOL)isFromServer;
- (BOOL)isPined;
- (BOOL)isMarkedUnRead;
- (id)fileUploadObserverID;
- (void)setFileUploadObserverID:(id)arg0;
- (id)fileDownloadObserverID;
- (void)setFileDownloadObserverID:(id)arg0;
- (id)dicmFileUploadProgress;
- (void)setDicmFileUploadProgress:(id)arg0;
- (id)dicmFileDownloadProgress;
- (void)setDicmFileDownloadProgress:(id)arg0;
- (long long)indexV2;
- (long long)hintType;
- (id)initWithRootObject:(id)arg0 model:(id)arg1;
- (void)onMessagesCreated:(id)arg0 belongingConversationMap:(id)arg1 reason:(id)arg2 context:(id)arg3;
- (void)onMessagesUpdated:(id)arg0 belongingConversationMap:(id)arg1 updateReasonMap:(id)arg2;
- (void)onMessagesDeleted:(id)arg0 belongingConversationMap:(id)arg1 reason:(id)arg2 context:(id)arg3;
- (void)modifyPropertyItems:(id)arg0 onCompletion:(id /* block */)arg1;
- (void)markMessageWithActionType:(unsigned long long)arg0 doAction:(BOOL)arg1 sortTime:(long long)arg2 completion:(id /* block */)arg3;
- (id)referMessageInfo;
- (id)editInfo;
- (void)setHintType:(long long)arg0;
- (void)setIndexV2:(long long)arg0;
- (void)setReferMessageInfo:(id)arg0;
- (void)setInternalModelStore:(id)arg0;
- (id)internalModelStore;
- (void)setFileObserverID:(id)arg0;
- (id)fileObserverID;
- (void)setSenderProfile:(id)arg0;
- (id)senderProfile;
- (void)setMessageBodyFiles:(id)arg0;
- (id)messageBodyFiles;
- (void)setEditInfo:(id)arg0;
- (BOOL)referIsRootMessage;
- (void)setReferIsRootMessage:(BOOL)arg0;
- (long long)referChildMessageCount;
- (void)setReferChildMessageCount:(long long)arg0;
- (id)fileIDs;
- (void)setFileIDs:(id)arg0;
- (void)setFileAttachments:(id)arg0;
- (id)fileProgressLock;
- (void)setFileProgresses:(id)arg0;
- (BOOL)existAllFiles;
- (void)p_file:(id)arg0 uploadProgressChangedTo_DouYinIMP:(float)arg1;
- (void)p_file:(id)arg0 uploadProgressChangedTo_DefaultIMP:(float)arg1;
- (id)fileProgresses;
- (void)setFileSendingProgressPercentage:(int)arg0;
- (void)setFileUploadProgressPercentage:(int)arg0;
- (void)setFileDownloadProgressPercentage:(int)arg0;
- (int)fileDownloadProgressPercentage;
- (id)fileAttachmentIdentifierWithDisplayType:(id)arg0;
- (void)downloadAllFiles;
- (void)cancelSendingFileAttachments;
- (long long)broadCastPullIndex;
- (void)updateSyncedExt:(id)arg0;
- (void)fetchReferRelatedMessagesWithCompletion:(id /* block */)arg0;
- (id)userProfileExt;
- (int)fileUploadProgressPercentage;
- (int)fileSendingProgressPercentage;
- (void)setFileProgressLock:(id)arg0;
- (long long)messageType;
- (void)setProperties:(id)arg0;
- (long long)orderIndex;
- (void)setSender:(long long)arg0;
- (void).cxx_destruct;
- (long long)sender;
- (long long)status;
- (void)setCreatedAt:(id)arg0;
- (id)content;
- (long long)compare:(id)arg0;
- (id)identifier;
- (void)setStatus:(long long)arg0;
- (void)setContent:(id)arg0;
- (void)setMessageType:(long long)arg0;
- (id)properties;
- (id)createdAt;
- (void)setIdentifier:(id)arg0;
- (void)setOrderIndex:(long long)arg0;
- (id)internalModel;
- (void)setInternalModel:(id)arg0;
- (id)fileAttachments;
- (id)observerID;
- (BOOL)recalled;
- (void)setRecalled:(BOOL)arg0;
- (id)propertyMap;
- (void)setPropertyMap:(id)arg0;

@end