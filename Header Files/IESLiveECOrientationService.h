//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveECOrientationService : NSObject <IESLiveECOrientationService> {
    unsigned long long _orientationType;
}

@property (nonatomic) unsigned long long orientationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceOf:(id)arg0;

- (void)setOrientationType:(unsigned long long)arg0;
- (unsigned long long)orientationType;
- (void)forceUpdateToOrientation:(long long)arg0;
- (BOOL)isCurrentLandscape;

@end
