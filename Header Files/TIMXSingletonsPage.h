//
//     Generated by private class-dump
//

@class TIMXOIMClient, TIMXRequestManager, TIMXOConversationNotifier, TIMXDatabaseInterface, TIMXECOMMessageStoreInterface, TIMXOSendMessageProcessTraceUtility, TIMXOMessageSenderObserver, TIMXMachOProtocolManager, TIMXPBAutoFallbackRequestManager, NSMutableDictionary, TIMXECOMGetUserMessageMarkerStore, TIMXLongConnectionChangeObserver, TIMXInboxPullerGroupManager, TIMXOTotalUnreadCountManager, TIMXOMessageNotifier, TIMXMessageReadManager, TIMXOConversationIdentifierTrick, TIMXMessagePuller, TIMXDatabaseTracker, TIMXDatabaseStatistical, TIMXFixOrderIndexHelper, TIMXOParticipantsInConversationDataManager, TIMXSendMessageCacheManager, NSObject, TIMXOMessageReadReceiptFlushDataManager, TIMXKVStorageTestTrigger, TIMXStrangerConVersionManager, TIMXMessageDB, TIMXImplManager, TIMXOStrangerExplicit, TIMXOAppInteractionManager, TIMXBatchUpdateAggregaterManager, TIMXECOMConversationStore, TIMXUnreadCountChangeLogger, TIMXOClient, TIMXSettingManager, TIMXFilePathManager, TIMXECOMConversationBridgeIMPL, TIMXECOMMessageReadBridgeIMPL, TIMXBroadCast, TIMXTrackEventManager, TIMXConversationGroupManagementManager, TIMXOConversationAuditDataManager, TIMXOPollingChain, TIMXDebugOptions, TIMXDispatchQueueElapsedTimeManager, TIMXConversationManager, TIMXClientTTNetworkImp, TIMXOStartUpObserver, TIMXECOMMessageBridgeIMPL, TIMXOConversationReadReceipt, TIMXDBConversationORMBatchUpdateManager, TIMXPullerManager, TIMXStrangerConversationsFetcherManager, TIMXStartUpJobManager, TIMXOModelManager, TIMXOConversationManager, TIMXOFriendManager, TIMXNotifier, TIMXSDKInstance, TIMXClient, NSString, TIMXSendMessageProcessTraceUtility, TIMXPullerInserter, TIMXMessagesIteratorManager, TIMXOMessageManager, TIMXCloudConfigManager, TIMXECOMMessageStore, TIMXOChangeObserver, TIMXStrangerRecentMessagePuller, TIMXOPagingConversationsDataManager, TIMXFriendService, TIMXUserDefaultsManager, TIMXOConversationAuditUnreadManager, TIMXLongConnectionClient, TIMXEventLogger, TIMXECOMConversationStoreInterface, TIMXPBAutoFallbackRequestTracker, TIMXNewAppLogManager, TIMXMachOReader, TIMXCoreBridgeManager, TIMXOAttachmentDownloader, TIMXRequestCommonInfoFill;
@protocol OS_dispatch_semaphore;

@interface TIMXSingletonsPage : NSObject <TIMXStartUpTaskProtocol> {
    NSObject<OS_dispatch_semaphore> *p_propertyAccessSemphore;
    NSMutableDictionary *p_propertyLocks;
    BOOL _canLog;
    TIMXImplManager *_TIMXImplManager;
    TIMXMachOReader *_TIMXMachOReader;
    TIMXCoreBridgeManager *_TIMXCoreBridgeManager;
    TIMXOIMClient *_TIMXOIMClient;
    TIMXCloudConfigManager *_TIMXCloudConfigManager;
    TIMXPBAutoFallbackRequestManager *_TIMXPBAutoFallbackRequestManager;
    TIMXNewAppLogManager *_TIMXNewAppLogManager;
    TIMXFixOrderIndexHelper *_TIMXFixOrderIndexHelper;
    TIMXPullerInserter *_TIMXPullerInserter;
    TIMXMessageReadManager *_TIMXMessageReadManager;
    TIMXUnreadCountChangeLogger *_TIMXUnreadCountChangeLogger;
    TIMXDatabaseTracker *_TIMXDatabaseTracker;
    TIMXMessageDB *_TIMXMessageDB;
    TIMXDatabaseInterface *_TIMXDatabaseInterface;
    TIMXOConversationReadReceipt *_TIMXOConversationReadReceipt;
    TIMXPBAutoFallbackRequestTracker *_TIMXPBAutoFallbackRequestTracker;
    TIMXRequestCommonInfoFill *_TIMXRequestCommonInfoFill;
    TIMXDatabaseStatistical *_TIMXDatabaseStatistical;
    TIMXEventLogger *_TIMXEventLogger;
    TIMXStrangerRecentMessagePuller *_TIMXStrangerRecentMessagePuller;
    TIMXStrangerConVersionManager *_TIMXStrangerConVersionManager;
    TIMXClient *_TIMXClient;
    TIMXLongConnectionClient *_TIMXLongConnectionClient;
    TIMXClientTTNetworkImp *_TIMXClientTTNetworkImp;
    TIMXOClient *_TIMXOClient;
    TIMXOChangeObserver *_TIMXOChangeObserver;
    TIMXOAttachmentDownloader *_TIMXOAttachmentDownloader;
    TIMXOAppInteractionManager *_TIMXOAppInteractionManager;
    TIMXOConversationIdentifierTrick *_TIMXOConversationIdentifierTrick;
    TIMXOStrangerExplicit *_TIMXOStrangerExplicit;
    TIMXSettingManager *_TIMXSettingManager;
    TIMXDBConversationORMBatchUpdateManager *_TIMXDBConversationORMBatchUpdateManager;
    TIMXBroadCast *_TIMXBroadCast;
    TIMXConversationGroupManagementManager *_TIMXConversationGroupManagementManager;
    TIMXOFriendManager *_TIMXOFriendManager;
    TIMXTrackEventManager *_TIMXTrackEventManager;
    TIMXOMessageReadReceiptFlushDataManager *_TIMXOMessageReadReceiptFlushDataManager;
    TIMXOTotalUnreadCountManager *_TIMXOTotalUnreadCountManager;
    TIMXDebugOptions *_TIMXDebugOptions;
    TIMXOStartUpObserver *_TIMXOStartUpObserver;
    TIMXOMessageSenderObserver *_TIMXOMessageSenderObserver;
    TIMXOConversationAuditUnreadManager *_TIMXOConversationAuditUnreadManager;
    TIMXOConversationNotifier *_TIMXOConversationNotifier;
    TIMXOMessageNotifier *_TIMXOMessageNotifier;
    TIMXMachOProtocolManager *_TIMXMachOProtocolManager;
    TIMXOPollingChain *_TIMXOPollingChain;
    TIMXOConversationManager *_TIMXOConversationManager;
    TIMXOConversationAuditDataManager *_TIMXOConversationAuditDataManager;
    TIMXMessagePuller *_TIMXMessagePuller;
    TIMXNotifier *_TIMXNotifier;
    TIMXOMessageManager *_TIMXOMessageManager;
    TIMXOParticipantsInConversationDataManager *_TIMXOParticipantsInConversationDataManager;
    TIMXOPagingConversationsDataManager *_TIMXOPagingConversationsDataManager;
    TIMXFriendService *_TIMXFriendService;
    TIMXStartUpJobManager *_TIMXStartUpJobManager;
    TIMXConversationManager *_TIMXConversationManager;
    TIMXKVStorageTestTrigger *_TIMXKVStorageTestTrigger;
    TIMXInboxPullerGroupManager *_TIMXInboxPullerGroupManager;
    TIMXPullerManager *_TIMXPullerManager;
    TIMXMessagesIteratorManager *_TIMXMessagesIteratorManager;
    TIMXRequestManager *_TIMXRequestManager;
    TIMXStrangerConversationsFetcherManager *_TIMXStrangerConversationsFetcherManager;
    TIMXBatchUpdateAggregaterManager *_TIMXBatchUpdateAggregaterManager;
    TIMXOModelManager *_TIMXOModelManager;
    TIMXFilePathManager *_TIMXFilePathManager;
    TIMXUserDefaultsManager *_TIMXUserDefaultsManager;
    TIMXSendMessageProcessTraceUtility *_TIMXSendMessageProcessTraceUtility;
    TIMXOSendMessageProcessTraceUtility *_TIMXOSendMessageProcessTraceUtility;
    TIMXSendMessageCacheManager *_TIMXSendMessageCacheManager;
    TIMXDispatchQueueElapsedTimeManager *_TIMXDispatchQueueElapsedTimeManager;
    TIMXLongConnectionChangeObserver *_TIMXLongConnectionChangeObserver;
    TIMXECOMGetUserMessageMarkerStore *_TIMXECOMGetUserMessageMarkerStore;
    TIMXECOMMessageStore *_TIMXECOMMessageStore;
    TIMXECOMConversationBridgeIMPL *_TIMXECOMConversationBridgeIMPL;
    TIMXECOMConversationStore *_TIMXECOMConversationStore;
    TIMXECOMMessageBridgeIMPL *_TIMXECOMMessageBridgeIMPL;
    TIMXECOMMessageReadBridgeIMPL *_TIMXECOMMessageReadBridgeIMPL;
    TIMXECOMConversationStoreInterface *_TIMXECOMConversationStoreInterface;
    TIMXECOMMessageStoreInterface *_TIMXECOMMessageStoreInterface;
    TIMXSDKInstance *_r;
    NSMutableDictionary *_proToInstanceDict;
}

@property (readonly, nonatomic) BOOL canLog;
@property (retain, nonatomic) NSMutableDictionary *proToInstanceDict;
@property (readonly) TIMXImplManager *TIMXImplManager;
@property (readonly) TIMXMachOReader *TIMXMachOReader;
@property (readonly) TIMXCoreBridgeManager *TIMXCoreBridgeManager;
@property (readonly) TIMXOIMClient *TIMXOIMClient;
@property (readonly) TIMXCloudConfigManager *TIMXCloudConfigManager;
@property (readonly) TIMXPBAutoFallbackRequestManager *TIMXPBAutoFallbackRequestManager;
@property (readonly) TIMXNewAppLogManager *TIMXNewAppLogManager;
@property (readonly) TIMXFixOrderIndexHelper *TIMXFixOrderIndexHelper;
@property (readonly) TIMXPullerInserter *TIMXPullerInserter;
@property (readonly) TIMXMessageReadManager *TIMXMessageReadManager;
@property (readonly) TIMXUnreadCountChangeLogger *TIMXUnreadCountChangeLogger;
@property (readonly) TIMXDatabaseTracker *TIMXDatabaseTracker;
@property (readonly) TIMXMessageDB *TIMXMessageDB;
@property (readonly) TIMXDatabaseInterface *TIMXDatabaseInterface;
@property (readonly) TIMXOConversationReadReceipt *TIMXOConversationReadReceipt;
@property (readonly) TIMXPBAutoFallbackRequestTracker *TIMXPBAutoFallbackRequestTracker;
@property (readonly) TIMXRequestCommonInfoFill *TIMXRequestCommonInfoFill;
@property (readonly) TIMXDatabaseStatistical *TIMXDatabaseStatistical;
@property (readonly) TIMXEventLogger *TIMXEventLogger;
@property (readonly) TIMXStrangerRecentMessagePuller *TIMXStrangerRecentMessagePuller;
@property (readonly) TIMXStrangerConVersionManager *TIMXStrangerConVersionManager;
@property (readonly) TIMXClient *TIMXClient;
@property (readonly) TIMXLongConnectionClient *TIMXLongConnectionClient;
@property (readonly) TIMXClientTTNetworkImp *TIMXClientTTNetworkImp;
@property (readonly) TIMXOClient *TIMXOClient;
@property (readonly) TIMXOChangeObserver *TIMXOChangeObserver;
@property (readonly) TIMXOAttachmentDownloader *TIMXOAttachmentDownloader;
@property (readonly) TIMXOAppInteractionManager *TIMXOAppInteractionManager;
@property (readonly) TIMXOConversationIdentifierTrick *TIMXOConversationIdentifierTrick;
@property (readonly) TIMXOStrangerExplicit *TIMXOStrangerExplicit;
@property (readonly) TIMXSettingManager *TIMXSettingManager;
@property (readonly) TIMXDBConversationORMBatchUpdateManager *TIMXDBConversationORMBatchUpdateManager;
@property (readonly) TIMXBroadCast *TIMXBroadCast;
@property (readonly) TIMXConversationGroupManagementManager *TIMXConversationGroupManagementManager;
@property (readonly) TIMXOFriendManager *TIMXOFriendManager;
@property (readonly) TIMXTrackEventManager *TIMXTrackEventManager;
@property (readonly) TIMXOMessageReadReceiptFlushDataManager *TIMXOMessageReadReceiptFlushDataManager;
@property (readonly) TIMXOTotalUnreadCountManager *TIMXOTotalUnreadCountManager;
@property (readonly) TIMXDebugOptions *TIMXDebugOptions;
@property (readonly) TIMXOStartUpObserver *TIMXOStartUpObserver;
@property (readonly) TIMXOMessageSenderObserver *TIMXOMessageSenderObserver;
@property (readonly) TIMXOConversationAuditUnreadManager *TIMXOConversationAuditUnreadManager;
@property (readonly) TIMXOConversationNotifier *TIMXOConversationNotifier;
@property (readonly) TIMXOMessageNotifier *TIMXOMessageNotifier;
@property (readonly) TIMXMachOProtocolManager *TIMXMachOProtocolManager;
@property (readonly) TIMXOPollingChain *TIMXOPollingChain;
@property (readonly) TIMXOConversationManager *TIMXOConversationManager;
@property (readonly) TIMXOConversationAuditDataManager *TIMXOConversationAuditDataManager;
@property (readonly) TIMXMessagePuller *TIMXMessagePuller;
@property (readonly) TIMXNotifier *TIMXNotifier;
@property (readonly) TIMXOMessageManager *TIMXOMessageManager;
@property (readonly) TIMXOParticipantsInConversationDataManager *TIMXOParticipantsInConversationDataManager;
@property (readonly) TIMXOPagingConversationsDataManager *TIMXOPagingConversationsDataManager;
@property (readonly) TIMXFriendService *TIMXFriendService;
@property (readonly) TIMXStartUpJobManager *TIMXStartUpJobManager;
@property (readonly) TIMXConversationManager *TIMXConversationManager;
@property (readonly) TIMXKVStorageTestTrigger *TIMXKVStorageTestTrigger;
@property (readonly) TIMXInboxPullerGroupManager *TIMXInboxPullerGroupManager;
@property (readonly) TIMXPullerManager *TIMXPullerManager;
@property (readonly) TIMXMessagesIteratorManager *TIMXMessagesIteratorManager;
@property (readonly) TIMXRequestManager *TIMXRequestManager;
@property (readonly) TIMXStrangerConversationsFetcherManager *TIMXStrangerConversationsFetcherManager;
@property (readonly) TIMXBatchUpdateAggregaterManager *TIMXBatchUpdateAggregaterManager;
@property (readonly) TIMXOModelManager *TIMXOModelManager;
@property (readonly) TIMXFilePathManager *TIMXFilePathManager;
@property (readonly) TIMXUserDefaultsManager *TIMXUserDefaultsManager;
@property (readonly) TIMXSendMessageProcessTraceUtility *TIMXSendMessageProcessTraceUtility;
@property (readonly) TIMXOSendMessageProcessTraceUtility *TIMXOSendMessageProcessTraceUtility;
@property (readonly) TIMXSendMessageCacheManager *TIMXSendMessageCacheManager;
@property (readonly) TIMXDispatchQueueElapsedTimeManager *TIMXDispatchQueueElapsedTimeManager;
@property (readonly) TIMXLongConnectionChangeObserver *TIMXLongConnectionChangeObserver;
@property (readonly) TIMXECOMGetUserMessageMarkerStore *TIMXECOMGetUserMessageMarkerStore;
@property (readonly) TIMXECOMMessageStore *TIMXECOMMessageStore;
@property (readonly) TIMXECOMConversationBridgeIMPL *TIMXECOMConversationBridgeIMPL;
@property (readonly) TIMXECOMConversationStore *TIMXECOMConversationStore;
@property (readonly) TIMXECOMMessageBridgeIMPL *TIMXECOMMessageBridgeIMPL;
@property (readonly) TIMXECOMMessageReadBridgeIMPL *TIMXECOMMessageReadBridgeIMPL;
@property (readonly) TIMXECOMConversationStoreInterface *TIMXECOMConversationStoreInterface;
@property (readonly) TIMXECOMMessageStoreInterface *TIMXECOMMessageStoreInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)arg0;

- (id)TIMXOIMClient;
- (id)TIMXOClient;
- (id)TIMXOConversationManager;
- (id)TIMXCoreBridgeManager;
- (id)TIMXOChangeObserver;
- (id)TIMXOMessageSenderObserver;
- (id)TIMXMessageReadManager;
- (id)TIMXLongConnectionChangeObserver;
- (id)TIMXConversationGroupManagementManager;
- (id)TIMXOSendMessageProcessTraceUtility;
- (id)TIMXOConversationAuditDataManager;
- (id)TIMXOConversationReadReceipt;
- (id)TIMXOConversationIdentifierTrick;
- (id)TIMXFilePathManager;
- (id)TIMXOParticipantsInConversationDataManager;
- (id)TIMXDBConversationORMBatchUpdateManager;
- (id)TIMXSendMessageCacheManager;
- (id)TIMXOMessageManager;
- (id)TIMXOStrangerExplicit;
- (id)TIMXOTotalUnreadCountManager;
- (id)TIMXLongConnectionClient;
- (id)TIMXTrackEventManager;
- (id)TIMXBatchUpdateAggregaterManager;
- (id)TIMXPBAutoFallbackRequestManager;
- (id)TIMXClientTTNetworkImp;
- (id)TIMXEventLogger;
- (id)TIMXDispatchQueueElapsedTimeManager;
- (id)TIMXCloudConfigManager;
- (id)TIMXInboxPullerGroupManager;
- (id)TIMXConversationManager;
- (id)TIMXUnreadCountChangeLogger;
- (id)TIMXUserDefaultsManager;
- (id)TIMXImplManager;
- (id)TIMXDatabaseInterface;
- (id)TIMXDatabaseTracker;
- (id)TIMXMessagePuller;
- (id)TIMXStrangerConVersionManager;
- (id)TIMXStrangerRecentMessagePuller;
- (id)TIMXECOMConversationBridgeIMPL;
- (id)TIMXDatabaseStatistical;
- (id)TIMXECOMConversationStoreInterface;
- (id)TIMXPullerInserter;
- (id)TIMXECOMGetUserMessageMarkerStore;
- (id)TIMXECOMMessageBridgeIMPL;
- (id)TIMXFixOrderIndexHelper;
- (id)TIMXECOMMessageReadBridgeIMPL;
- (id)TIMXECOMMessageStore;
- (id)TIMXECOMMessageStoreInterface;
- (id)TIMXFriendService;
- (id)TIMXRequestManager;
- (id)TIMXMachOReader;
- (id)proToInstanceDict;
- (BOOL)canLog;
- (id)TIMXKVStorageTestTrigger;
- (id)TIMXRequestCommonInfoFill;
- (id)TIMXOModelManager;
- (id)TIMXMessagesIteratorManager;
- (id)TIMXMessageDB;
- (id)TIMXMachOProtocolManager;
- (id)TIMXNewAppLogManager;
- (id)TIMXNotifier;
- (id)TIMXOAppInteractionManager;
- (id)TIMXOConversationNotifier;
- (id)TIMXPullerManager;
- (id)TIMXOAttachmentDownloader;
- (id)TIMXOMessageNotifier;
- (id)TIMXOMessageReadReceiptFlushDataManager;
- (id)TIMXOStartUpObserver;
- (id)TIMXPBAutoFallbackRequestTracker;
- (id)TIMXClient;
- (id)TIMXStartUpJobManager;
- (id)TIMXSendMessageProcessTraceUtility;
- (id)TIMXSettingManager;
- (void)setProToInstanceDict:(id)arg0;
- (id)p_lazyLoadInstanceOfClass:(Class)arg0 viaStore:(id *)arg1;
- (void)p_lockPropertyOfAddress:(void *)arg0;
- (void)p_unlockPropertyOfAddress:(void *)arg0;
- (id)TIMXBroadCast;
- (id)TIMXOFriendManager;
- (id)TIMXDebugOptions;
- (id)TIMXOConversationAuditUnreadManager;
- (id)TIMXOPollingChain;
- (id)TIMXOPagingConversationsDataManager;
- (id)TIMXStrangerConversationsFetcherManager;
- (id)TIMXECOMConversationStore;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)arg0;

@end
