//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDPBindingSystemInfoResult : NSObject {
    NSString *_brand;
    NSString *_model;
    double _pixelRatio;
    double _screenWidth;
    double _screenHeight;
    double _statusBarHeight;
    NSString *_language;
    NSString *_version;
    NSString *_system;
    NSString *_platform;
    NSString *_appName;
    NSDictionary *_safeArea;
    NSString *_SDKVersion;
    NSString *_channel;
    NSDictionary *_deviceScore;
}

@property (copy, nonatomic) NSString *brand;
@property (copy, nonatomic) NSString *model;
@property (nonatomic) double pixelRatio;
@property (nonatomic) double screenWidth;
@property (nonatomic) double screenHeight;
@property (nonatomic) double statusBarHeight;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *system;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSDictionary *safeArea;
@property (copy, nonatomic) NSString *SDKVersion;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSDictionary *deviceScore;

- (id)deviceScore;
- (void)setDeviceScore:(id)arg0;
- (id)safeArea;
- (void)setSafeArea:(id)arg0;
- (void)setAppName:(id)arg0;
- (id)appName;
- (void)setModel:(id)arg0;
- (double)statusBarHeight;
- (void)setStatusBarHeight:(double)arg0;
- (id)channel;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (double)screenWidth;
- (id)model;
- (id)language;
- (void)setScreenWidth:(double)arg0;
- (id)system;
- (void)setScreenHeight:(double)arg0;
- (void)setPlatform:(id)arg0;
- (id)platform;
- (double)screenHeight;
- (id)version;
- (id)SDKVersion;
- (void)setLanguage:(id)arg0;
- (void)setSDKVersion:(id)arg0;
- (void)setSystem:(id)arg0;
- (id)brand;
- (void)setBrand:(id)arg0;
- (double)pixelRatio;
- (void)setPixelRatio:(double)arg0;

@end
