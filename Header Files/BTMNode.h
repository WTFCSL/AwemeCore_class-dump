//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableDictionary, UIResponder;

@interface BTMNode : NSObject <BTMAssociateStorageType, NSCopying> {
    BOOL _preserve;
    BOOL _isModifiedTargetPage;
    BOOL _isSourceBtmToken;
    BOOL _sourceBtmTokenConsumed;
    BOOL _sourceBtmTokenOverTimeReported;
    NSString *_info;
    NSString *_timeStamp;
    BTMNode *_previousNode;
    UIResponder *_invokePage;
    NSArray *_allowedTargetPageIdentifiers;
    UIResponder *_targetPage;
    NSString *_identifier;
    NSString *_showId;
    NSString *_eventName;
    NSMutableDictionary *_associateStorage;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _readWriteLock;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *timeStamp;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } readWriteLock;
@property (retain, nonatomic) BTMNode *previousNode;
@property (copy, nonatomic) NSString *info;
@property (weak, nonatomic) UIResponder *invokePage;
@property (retain, nonatomic) NSArray *allowedTargetPageIdentifiers;
@property (weak, nonatomic) UIResponder *targetPage;
@property (nonatomic) BOOL preserve;
@property (copy, nonatomic) NSString *showId;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSMutableDictionary *associateStorage;
@property (nonatomic) BOOL isModifiedTargetPage;
@property (nonatomic) BOOL isSourceBtmToken;
@property (nonatomic) BOOL sourceBtmTokenConsumed;
@property (nonatomic) BOOL sourceBtmTokenOverTimeReported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)btm_getValueForKey:(id)arg0;
- (void)btm_setValue:(id)arg0 forKey:(id)arg1;
- (id)invokePage;
- (BOOL)sourceBtmTokenConsumed;
- (void)setInvokePage:(id)arg0;
- (void)setAllowedTargetPageIdentifiers:(id)arg0;
- (BOOL)isSourceBtmToken;
- (id)allowedTargetPageIdentifiers;
- (void)setPreserve:(BOOL)arg0;
- (BOOL)sourceBtmTokenOverTimeReported;
- (BOOL)preserve;
- (void)setSourceBtmTokenConsumed:(BOOL)arg0;
- (void)setIsModifiedTargetPage:(BOOL)arg0;
- (BOOL)isModifiedTargetPage;
- (void)setIsSourceBtmToken:(BOOL)arg0;
- (id)associateStorage;
- (void)setAssociateStorage:(id)arg0;
- (id)createDefaultCopy;
- (void)setSourceBtmTokenOverTimeReported:(BOOL)arg0;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })readWriteLock;
- (void)setReadWriteLock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;
- (id)init;
- (id)info;
- (id)previousNode;
- (void).cxx_destruct;
- (id)timeStamp;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setEventName:(id)arg0;
- (void)setInfo:(id)arg0;
- (id)identifier;
- (void)setPreviousNode:(id)arg0;
- (id)eventName;
- (void)setIdentifier:(id)arg0;
- (void)setTimeStamp:(id)arg0;
- (id)targetPage;
- (void)setTargetPage:(id)arg0;
- (id)showId;
- (void)setShowId:(id)arg0;

@end
