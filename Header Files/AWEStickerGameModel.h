//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStickerGameModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _gameType;
    long long _gameScore;
}

@property (nonatomic) unsigned long long gameType;
@property (nonatomic) long long gameScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gameTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)gameScore;
- (void)setGameScore:(long long)arg0;
- (unsigned long long)gameType;
- (void)setGameType:(unsigned long long)arg0;

@end