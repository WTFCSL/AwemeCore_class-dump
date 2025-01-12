//
//     Generated by private class-dump
//

@class NSString, HTSLiveNativeAnimationUser, HTSLiveMemberMessageEffectConfigModel, NSDictionary, NSNumber, HTSLiveMemberMessage;

@interface HTSLiveNativeAnimationUserEnterNode : NSObject <IESLiveUserEnterNodeProtocol> {
    BOOL discarded;
    BOOL shouldStayInPowerSaveMode;
    BOOL _hasEffectConfig;
    BOOL _isNeedEcomFansclubReverse;
    int priority;
    NSString *type;
    NSString *identifier;
    double maxWaitTime;
    NSDictionary *trackInfo;
    NSString *sceneName;
    NSString *subSceneName;
    NSNumber *showTime;
    NSNumber *_messageID;
    NSNumber *_enterType;
    NSString *_desc;
    unsigned long long _enterClass;
    unsigned long long _consumptionClass;
    HTSLiveNativeAnimationUser *_user;
    HTSLiveMemberMessageEffectConfigModel *_effectConfig;
    HTSLiveMemberMessage *_message;
}

@property (nonatomic) BOOL isNeedEcomFansclubReverse;
@property (retain, nonatomic) NSNumber *messageID;
@property (retain, nonatomic) NSNumber *enterType;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long enterClass;
@property (nonatomic) unsigned long long consumptionClass;
@property (retain, nonatomic) HTSLiveNativeAnimationUser *user;
@property (retain, nonatomic) HTSLiveMemberMessageEffectConfigModel *effectConfig;
@property (retain, nonatomic) HTSLiveMemberMessage *message;
@property (nonatomic) BOOL hasEffectConfig;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int priority;
@property (nonatomic) BOOL shouldStayInPowerSaveMode;
@property (nonatomic) BOOL discarded;
@property (nonatomic) double maxWaitTime;
@property (retain, nonatomic) NSNumber *showTime;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *subSceneName;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subSceneName;
- (void)setSubSceneName:(id)arg0;
- (id)showTime;
- (void)setShowTime:(id)arg0;
- (void)setEffectConfig:(id)arg0;
- (double)maxWaitTime;
- (void)setMaxWaitTime:(double)arg0;
- (BOOL)shouldStayInPowerSaveMode;
- (void)setShouldStayInPowerSaveMode:(BOOL)arg0;
- (BOOL)hasEffectConfig;
- (id)initWithMemberMessage:(id)arg0 ecomFansclubConfig:(BOOL)arg1;
- (void)setIsNeedEcomFansclubReverse:(BOOL)arg0;
- (id)transformToNativeAnimUserWithMessage:(id)arg0;
- (void)setEnterClass:(unsigned long long)arg0;
- (void)setConsumptionClass:(unsigned long long)arg0;
- (id)transformToEffectConfigWithMessage:(id)arg0;
- (void)setHasEffectConfig:(BOOL)arg0;
- (BOOL)isNeedEcomFansclubReverse;
- (id)initWithMemberMessage:(id)arg0;
- (BOOL)hasEnableEffect;
- (unsigned long long)enterClass;
- (unsigned long long)consumptionClass;
- (void)setUser:(id)arg0;
- (id)desc;
- (void)setMessage:(id)arg0;
- (id)messageID;
- (id)user;
- (void).cxx_destruct;
- (id)effectConfig;
- (BOOL)discarded;
- (id)type;
- (id)message;
- (void)setPriority:(int)arg0;
- (id)identifier;
- (void)setType:(id)arg0;
- (void)setMessageID:(id)arg0;
- (id)sceneName;
- (int)priority;
- (void)setDesc:(id)arg0;
- (void)setDiscarded:(BOOL)arg0;
- (void)setIdentifier:(id)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (id)enterType;
- (void)setEnterType:(id)arg0;
- (void)setSceneName:(id)arg0;

@end
