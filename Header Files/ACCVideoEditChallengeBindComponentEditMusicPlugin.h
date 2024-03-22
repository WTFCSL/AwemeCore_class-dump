//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCFeatureComponent;

@interface ACCVideoEditChallengeBindComponentEditMusicPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable> {
    id<ACCFeatureComponent> _component;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hostIdentifier;

- (void)bindServices:(id)arg0;
- (id)hostComponent;
- (void).cxx_destruct;
- (id)component;
- (void)setComponent:(id)arg0;

@end
