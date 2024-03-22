//
//     Generated by private class-dump
//

@class NSString;

@interface IESLivePuzzleAppInfo : NSObject <PuzzleAppInfoServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providePuzzleAppInfoServiceProtocol:(id)arg0;

- (double)currentFontScale;
- (id)appVersionCode;
- (BOOL)isTeenMode;
- (id)webcastSDKVersion;
- (long long)currentAPPUIMode;
- (BOOL)isBOEEnabled;
- (BOOL)isPPEEnabled;
- (id)lane;
- (double)veDeviceScore;
- (id)fpsInDuration:(double)arg0;
- (long long)netQuality;
- (double)bangsHeight;
- (BOOL)isHybridPPEEnabled;
- (id)appName;
- (id)region;
- (id)channel;
- (id)deviceID;
- (id)installID;
- (id)appID;
- (id)languageCode;
- (id)accessCode;
- (id)appBuildNumber;

@end