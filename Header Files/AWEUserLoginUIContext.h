//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol AWEUserLoginUIAmbientConfig, AWEUserLoginUILayoutConfig;

@interface AWEUserLoginUIContext : NSObject {
    NSString *_loginTitle;
    NSObject<AWEUserLoginUILayoutConfig> *_layoutConfig;
    NSObject<AWEUserLoginUIAmbientConfig> *_ambientConfig;
}

@property (retain, nonatomic) NSString *loginTitle;
@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) NSObject<AWEUserLoginUIAmbientConfig> *ambientConfig;

- (void)setLayoutConfig:(id)arg0;
- (id)loginTitle;
- (void)setLoginTitle:(id)arg0;
- (id)ambientConfig;
- (void)setAmbientConfig:(id)arg0;
- (void).cxx_destruct;
- (id)layoutConfig;

@end