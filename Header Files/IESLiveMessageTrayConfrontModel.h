//
//     Generated by private class-dump
//

@class HTSLiveToutiaoMatchData, NSString, NSArray, IESLivePSComponentConfigModel, NSMutableArray;

@interface IESLiveMessageTrayConfrontModel : NSObject {
    BOOL _sourceReady;
    BOOL _disableAnimation;
    NSMutableArray *_mainMessages;
    NSMutableArray *_guestMessages;
    NSArray *_confrontIcons;
    HTSLiveToutiaoMatchData *_matchData;
    IESLivePSComponentConfigModel *_configModel;
    NSString *_mainContent;
    NSString *_guestContent;
    long long _lastMainCount;
    long long _lastGuestCount;
}

@property (copy, nonatomic) NSString *mainContent;
@property (copy, nonatomic) NSString *guestContent;
@property (nonatomic) long long lastMainCount;
@property (nonatomic) long long lastGuestCount;
@property (retain, nonatomic) NSMutableArray *mainMessages;
@property (retain, nonatomic) NSMutableArray *guestMessages;
@property (retain, nonatomic) NSArray *confrontIcons;
@property (nonatomic) BOOL sourceReady;
@property (retain, nonatomic) HTSLiveToutiaoMatchData *matchData;
@property (nonatomic) BOOL disableAnimation;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;

- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (id)mainContent;
- (void)setMainContent:(id)arg0;
- (BOOL)didPrepared;
- (id)initWithMatchHotMessage:(id)arg0;
- (BOOL)doMergeMessage:(id)arg0;
- (void)consumeMessage:(id)arg0;
- (id)mainMessages;
- (void)mergeMessage:(id)arg0;
- (id)guestMessages;
- (id)guestContent;
- (long long)lastMainCount;
- (long long)lastGuestCount;
- (void)setGuestContent:(id)arg0;
- (void)setLastMainCount:(long long)arg0;
- (void)setLastGuestCount:(long long)arg0;
- (void)setSourceReady:(BOOL)arg0;
- (void)setMainMessages:(id)arg0;
- (void)setGuestMessages:(id)arg0;
- (id)confrontIcons;
- (void)setConfrontIcons:(id)arg0;
- (BOOL)sourceReady;
- (void).cxx_destruct;
- (void)clear;
- (BOOL)disableAnimation;
- (id)matchData;
- (void)setMatchData:(id)arg0;
- (void)setDisableAnimation:(BOOL)arg0;

@end
