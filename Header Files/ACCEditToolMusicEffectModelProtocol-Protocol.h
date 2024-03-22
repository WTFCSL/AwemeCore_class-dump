//
//     Generated by private class-dump
//

@class NSArray, NSString;

@protocol ACCEditToolMusicEffectModelProtocol <NSObject>

@property (readonly, copy, nonatomic) NSArray *useMusicIds;
@property (readonly, copy, nonatomic) NSArray *useLocalAudios;
@property (readonly, nonatomic) BOOL excludeMusic;
@property (readonly, nonatomic) BOOL hasEffectMusic;
@property (readonly, nonatomic) double volume;
@property (readonly, copy, nonatomic) NSString *effectResourcePath;

- (BOOL)excludeMusic;
- (BOOL)hasEffectMusic;
- (id)useLocalAudios;
- (id)effectResourcePath;
- (id)useMusicIds;
- (double)volume;

@end
