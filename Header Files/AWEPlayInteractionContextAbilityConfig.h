//
//     Generated by private class-dump
//

@protocol AWEPlayInteractionContextUIAbility, AWEPlayInteractionContextToolAbility;

@interface AWEPlayInteractionContextAbilityConfig : NSObject {
    id<AWEPlayInteractionContextUIAbility> _uiAbility;
    id<AWEPlayInteractionContextToolAbility> _toolAbility;
}

@property (retain, nonatomic) id<AWEPlayInteractionContextUIAbility> uiAbility;
@property (retain, nonatomic) id<AWEPlayInteractionContextToolAbility> toolAbility;

- (id)toolAbility;
- (void)setToolAbility:(id)arg0;
- (id)uiAbility;
- (void)setUiAbility:(id)arg0;
- (void).cxx_destruct;

@end
