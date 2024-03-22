//
//     Generated by private class-dump
//

@class AWEHPSkylightContainer, NSString;
@protocol AWEHPSkylightAccessApproachProtocol;

@interface AWEHPSkylightAbilityImpl : NSObject <AWEHomepageSkylightAbility> {
    AWEHPSkylightContainer *_skylightContainer;
    id<AWEHPSkylightAccessApproachProtocol> _accessApproach;
}

@property (weak, nonatomic) AWEHPSkylightContainer *skylightContainer;
@property (weak, nonatomic) id<AWEHPSkylightAccessApproachProtocol> accessApproach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)skylightContainer;
- (void)setSkylightContainer:(id)arg0;
- (id)accessApproach;
- (void)setAccessApproach:(id)arg0;
- (void)p_trackSkylightChangeState:(BOOL)arg0 withErrorMessage:(id)arg1 withFromStatus:(long long)arg2 withToStatus:(long long)arg3;
- (void)p_updateHomepageSkylightFromState:(long long)arg0 toState:(long long)arg1 withProgressState:(long long)arg2 withAnimate:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)p_updateHomepageSkylightExpandedUIConfigIfNeed;
- (void)updateHomepageSkylightExpandedUIConfig:(id)arg0 withAnimate:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateHomepageSkylightState:(long long)arg0 withAnimate:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateHomepageSkylightExpandedHeight:(double)arg0 withAnimate:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)initWithSkylightContainer:(id)arg0 withAccessApproach:(id)arg1;
- (void).cxx_destruct;

@end
