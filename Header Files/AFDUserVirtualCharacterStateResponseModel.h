//
//     Generated by private class-dump
//

@class NSNumber, AFDUserVirtualCharacterModel;

@interface AFDUserVirtualCharacterStateResponseModel : AWEBaseApiModel {
    NSNumber *_characterState;
    AFDUserVirtualCharacterModel *_virtualCharacter;
}

@property (retain, nonatomic) NSNumber *characterState;
@property (retain, nonatomic) AFDUserVirtualCharacterModel *virtualCharacter;

+ (id)virtualCharacterJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)characterState;
- (id)virtualCharacter;
- (void)setCharacterState:(id)arg0;
- (void)setVirtualCharacter:(id)arg0;
- (void).cxx_destruct;

@end
