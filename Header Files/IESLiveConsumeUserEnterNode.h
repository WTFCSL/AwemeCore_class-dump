//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;

@interface IESLiveConsumeUserEnterNode : NSObject <IESLiveUserEnterNodeProtocol> {
    BOOL discarded;
    BOOL shouldStayInPowerSaveMode;
    int priority;
    NSString *type;
    NSString *identifier;
    double maxWaitTime;
    NSString *sceneName;
    NSString *subSceneName;
    NSDictionary *trackInfo;
    NSNumber *showTime;
    id _message;
    NSNumber *_purchaseCount;
    NSString *_nickName;
    NSString *_consumeText;
    NSString *_iconURLString;
    NSString *_iconPlaceholder;
}

@property (retain, nonatomic) id message;
@property (retain, nonatomic) NSNumber *purchaseCount;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *consumeText;
@property (copy, nonatomic) NSString *iconURLString;
@property (copy, nonatomic) NSString *iconPlaceholder;
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
- (double)maxWaitTime;
- (void)setMaxWaitTime:(double)arg0;
- (BOOL)shouldStayInPowerSaveMode;
- (void)setShouldStayInPowerSaveMode:(BOOL)arg0;
- (id)purchaseCount;
- (void)setPurchaseCount:(id)arg0;
- (id)consumeText;
- (void)setConsumeText:(id)arg0;
- (void)setMessage:(id)arg0;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (BOOL)discarded;
- (id)type;
- (id)message;
- (void)setPriority:(int)arg0;
- (id)identifier;
- (void)setType:(id)arg0;
- (id)nickName;
- (id)sceneName;
- (int)priority;
- (void)setDiscarded:(BOOL)arg0;
- (void)setIdentifier:(id)arg0;
- (id)iconURLString;
- (void)setIconURLString:(id)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (void)setSceneName:(id)arg0;
- (id)iconPlaceholder;
- (void)setIconPlaceholder:(id)arg0;

@end
