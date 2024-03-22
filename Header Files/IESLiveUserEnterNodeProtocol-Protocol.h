//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@protocol IESLiveUserEnterNodeProtocol <NSObject>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id message;
@property (nonatomic) int priority;
@property (nonatomic) BOOL shouldStayInPowerSaveMode;
@property (nonatomic) BOOL discarded;
@property (nonatomic) double maxWaitTime;
@property (retain, nonatomic) NSNumber *showTime;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *subSceneName;
@property (copy, nonatomic) NSDictionary *trackInfo;

- (id)subSceneName;
- (void)setSubSceneName:(id)arg0;
- (id)showTime;
- (void)setShowTime:(id)arg0;
- (double)maxWaitTime;
- (void)setMaxWaitTime:(double)arg0;
- (BOOL)shouldStayInPowerSaveMode;
- (void)setShouldStayInPowerSaveMode:(BOOL)arg0;
- (void)setMessage:(id)arg0;
- (BOOL)discarded;
- (id)type;
- (id)message;
- (void)setPriority:(int)arg0;
- (id)identifier;
- (void)setType:(id)arg0;
- (id)sceneName;
- (int)priority;
- (void)setDiscarded:(BOOL)arg0;
- (void)setIdentifier:(id)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (void)setSceneName:(id)arg0;

@end