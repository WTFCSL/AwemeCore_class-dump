//
//     Generated by private class-dump
//

@class NSString;

@interface BDSCSceneInfo : NSObject {
    BOOL _dayMode;
    BOOL _isInLVScene;
    unsigned long long _sceneType;
    NSString *_sceneId;
    double _zoomFactor;
}

@property (nonatomic) unsigned long long sceneType;
@property (nonatomic) BOOL dayMode;
@property (nonatomic) BOOL isInLVScene;
@property (copy, nonatomic) NSString *sceneId;
@property (nonatomic) double zoomFactor;

- (void)setDayMode:(BOOL)arg0;
- (void)setIsInLVScene:(BOOL)arg0;
- (BOOL)isInLVScene;
- (BOOL)dayMode;
- (double)zoomFactor;
- (id)init;
- (void).cxx_destruct;
- (void)setZoomFactor:(double)arg0;
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg0;
- (id)sceneId;
- (void)setSceneId:(id)arg0;

@end
