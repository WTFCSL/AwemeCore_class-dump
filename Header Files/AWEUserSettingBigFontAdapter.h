//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserSettingBigFontAdapter : NSObject <AWEUserSettingBigFontAdapterProtocol> {
    BOOL _bigFontModeEnable;
}

@property (nonatomic) BOOL bigFontModeEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)adaptiveFontOfSize:(double)arg0 weight:(long long)arg1;
- (double)adaptiveChangeFontSize:(double)arg0;
- (void)setBigFontModeEnable:(BOOL)arg0;
- (BOOL)bigFontModeEnable;

@end