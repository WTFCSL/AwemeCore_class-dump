//
//     Generated by private class-dump
//

@interface AWELiveXtabPreStreamViewModel : NSObject {
    BOOL _showXtab;
    BOOL _skyLightAnimated;
    BOOL _showSkyLight;
    BOOL _enableSkyLight;
}

@property (nonatomic) BOOL showXtab;
@property (nonatomic) BOOL skyLightAnimated;
@property (nonatomic) BOOL showSkyLight;
@property (nonatomic) BOOL enableSkyLight;

- (BOOL)enableSkyLight;
- (void)setEnableSkyLight:(BOOL)arg0;
- (BOOL)showSkyLight;
- (BOOL)showXtab;
- (void)showSkyLight:(BOOL)arg0 showXtab:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowSkyLight:(BOOL)arg0;
- (BOOL)skyLightAnimated;
- (void)setSkyLightAnimated:(BOOL)arg0;
- (void)setShowXtab:(BOOL)arg0;
- (id)init;

@end
