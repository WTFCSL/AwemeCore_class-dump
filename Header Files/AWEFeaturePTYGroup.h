//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeaturePTYGroup : NSObject <PTYFeatureGroup>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (id)trackEvents;
- (id)featureDescriptions;
- (id)groupName;

@end
