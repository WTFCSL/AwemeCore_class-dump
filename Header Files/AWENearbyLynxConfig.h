//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWENearbyLynxConfig : NSObject {
    BOOL _isHeightFitAndWidthFixed;
    BOOL _isEnableiPadConfig;
    long long _widthMode;
    long long _heightMode;
    NSNumber *_iPadRadio;
    NSString *_containerBgColor;
}

@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (nonatomic) BOOL isHeightFitAndWidthFixed;
@property (nonatomic) BOOL isEnableiPadConfig;
@property (retain, nonatomic) NSNumber *iPadRadio;
@property (copy, nonatomic) NSString *containerBgColor;

- (void)setWidthMode:(long long)arg0;
- (void)setHeightMode:(long long)arg0;
- (long long)widthMode;
- (long long)heightMode;
- (void)setContainerBgColor:(id)arg0;
- (BOOL)isEnableiPadConfig;
- (void)setIsEnableiPadConfig:(BOOL)arg0;
- (void)setIPadRadio:(id)arg0;
- (void)setIsHeightFitAndWidthFixed:(BOOL)arg0;
- (id)iPadRadio;
- (id)containerBgColor;
- (BOOL)isHeightFitAndWidthFixed;
- (void).cxx_destruct;

@end
