//
//     Generated by private class-dump
//

@class NSString;

@interface IESLivePlayerStoredResolutionKeyProvider : NSObject <IESLivePlayerStoredResolutionKeyProvider> {
    BOOL _isVSRoom;
    BOOL _isVRRoom;
}

@property (nonatomic) BOOL isVSRoom;
@property (nonatomic) BOOL isVRRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isVRRoom;
- (BOOL)isVSRoom;
- (void)setIsVSRoom:(BOOL)arg0;
- (void)setIsVRRoom:(BOOL)arg0;
- (id)initWithVSRoom:(BOOL)arg0 vrRoom:(BOOL)arg1;
- (id)storedResolutionLevelStorageKey;
- (id)storedResolutionSDKKeyStorageKey;

@end
