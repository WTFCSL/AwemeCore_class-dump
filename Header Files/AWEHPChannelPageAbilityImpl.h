//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEHPChannelPageAbilityImpl;

@interface AWEHPChannelPageAbilityImpl : AWEHPChannelBaseAbilityImpl <AWEHPChannelPageAbility> {
    id<AWEHPChannelPageAbilityImpl> _target;
}

@property (weak, nonatomic) id<AWEHPChannelPageAbilityImpl> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarFillBackground:(BOOL)arg0;
- (id)getFeedHomePageContext;
- (void)updateTopBarThemeStyle:(unsigned long long)arg0;
- (void)updateBottomBarThemeStyle:(unsigned long long)arg0;
- (void)updateBottomBarBackgroundImages:(BOOL)arg0;
- (void)updateViewControllerGreyMode:(BOOL)arg0;
- (void)updateViewControllerSkylight:(id)arg0;
- (void)removeChannel;
- (void).cxx_destruct;
- (void)setTarget:(id)arg0;
- (id)target;

@end