//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveLGameDuringLiveInfoCardModel : NSObject {
    long long _exposureCount;
    long long _clickCount;
    long long _playCount;
    NSString *_gameIconURL;
    NSString *_gameName;
    NSString *_gameDescription;
    unsigned long long _explainStatus;
}

@property (nonatomic) long long exposureCount;
@property (nonatomic) long long clickCount;
@property (nonatomic) long long playCount;
@property (copy, nonatomic) NSString *gameIconURL;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameDescription;
@property (nonatomic) unsigned long long explainStatus;

+ (id)modelWithJson:(id)arg0;

- (id)gameName;
- (void)setGameName:(id)arg0;
- (id)gameDescription;
- (void)setGameDescription:(id)arg0;
- (unsigned long long)explainStatus;
- (void)setExplainStatus:(unsigned long long)arg0;
- (id)gameIconURL;
- (void)setGameIconURL:(id)arg0;
- (void)appendWithDuringLiveModel:(id)arg0;
- (void)handleJson:(id)arg0;
- (long long)exposureCount;
- (void)setExposureCount:(long long)arg0;
- (long long)playCount;
- (void)setPlayCount:(long long)arg0;
- (void).cxx_destruct;
- (void)setClickCount:(long long)arg0;
- (long long)clickCount;

@end
