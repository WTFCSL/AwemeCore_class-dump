//
//     Generated by private class-dump
//

@class NSString, AWEAlertDemotionStrategyModel, AWEAlertContext, NSObject;
@protocol AWEAlertEventProtocol, AWEAlertProtocol, NSCopying;

@interface AWEAlertInternalWrapper : NSObject <NSCopying> {
    BOOL _prepared;
    BOOL _displayFinished;
    BOOL _isHandling;
    BOOL _isSuspending;
    BOOL _needResume;
    long long _priority;
    id<AWEAlertEventProtocol> _eventItem;
    NSObject<NSCopying> *_identifier;
    id<AWEAlertProtocol> _alert;
    id /* block */ _completion;
    AWEAlertContext *_context;
    NSString *_uniqueID;
    NSString *_identifierString;
}

@property (readonly, nonatomic) AWEAlertDemotionStrategyModel *demotionStrategyModel;
@property (nonatomic) BOOL prepareIsCallback;
@property (nonatomic) BOOL oncloseIsCallback;
@property (nonatomic) BOOL prepared;
@property (nonatomic) BOOL displayFinished;
@property (nonatomic) BOOL isHandling;
@property (nonatomic) BOOL isSuspending;
@property (nonatomic) BOOL needResume;
@property (nonatomic) long long priority;
@property (retain, nonatomic) id<AWEAlertEventProtocol> eventItem;
@property (readonly, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSObject<NSCopying> *identifier;
@property (retain, nonatomic) id<AWEAlertProtocol> alert;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWEAlertContext *context;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *identifierString;

- (id)eventItem;
- (void)setIsHandling:(BOOL)arg0;
- (BOOL)isHandling;
- (id)demotionStrategyModel;
- (BOOL)prepareIsCallback;
- (BOOL)oncloseIsCallback;
- (void)setEventItem:(id)arg0;
- (BOOL)displayFinished;
- (void)setDisplayFinished:(BOOL)arg0;
- (BOOL)isSuspending;
- (void)setIsSuspending:(BOOL)arg0;
- (BOOL)needResume;
- (void)setNeedResume:(BOOL)arg0;
- (void)setDemotionStrategyModel:(id)arg0;
- (void)setOncloseIsCallback:(BOOL)arg0;
- (void)setPrepareIsCallback:(BOOL)arg0;
- (id)alert;
- (id /* block */)completion;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setCompletion:(id /* block */)arg0;
- (void)setContext:(id)arg0;
- (void)setUniqueID:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)identifierString;
- (void)setPriority:(long long)arg0;
- (id)identifier;
- (id)eventID;
- (id)context;
- (void)setPrepared:(BOOL)arg0;
- (void)setAlert:(id)arg0;
- (long long)priority;
- (void)setIdentifier:(id)arg0;
- (BOOL)prepared;
- (void)setIdentifierString:(id)arg0;

@end
