//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@protocol AnnieXKitModelProtocol <NSObject>

@property (copy, nonatomic) NSDictionary *globalProps;
@property (nonatomic) BOOL fromAnnieX;
@property (nonatomic) double fontScale;
@property (nonatomic) double viewZoom;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) id /* block */ appThemeBlock;
@property (copy, nonatomic) NSString *bridgeNameSpace;

- (void)setGlobalProps:(id)arg0;
- (id)globalProps;
- (void)setBridgeNameSpace:(id)arg0;
- (id)bridgeNameSpace;
- (void)updateGlobalProps:(id)arg0;
- (void)setAppThemeBlock:(id /* block */)arg0;
- (void)setViewZoom:(double)arg0;
- (id /* block */)appThemeBlock;
- (void)setFromAnnieX:(BOOL)arg0;
- (double)viewZoom;
- (BOOL)fromAnnieX;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (double)fontScale;
- (void)setFontScale:(double)arg0;
- (id)getSessionId;

@end