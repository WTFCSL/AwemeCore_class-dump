//
//     Generated by private class-dump
//

@class NSString;

@interface AWERepoGameModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryRequestParamsDeprecated, ACCRepositoryTrackContextDeprecated, NSCopying> {
    BOOL _publishBackToGame;
    unsigned long long _gameType;
    long long _game2DScore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long gameType;
@property (nonatomic) long long game2DScore;
@property (nonatomic) BOOL publishBackToGame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDraft:(id)arg0;
- (id)acc_publishRequestParams:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (void)setGame2DScore:(long long)arg0;
- (long long)game2DScore;
- (BOOL)publishBackToGame;
- (void)setPublishBackToGame:(BOOL)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)gameType;
- (void)setGameType:(unsigned long long)arg0;

@end
