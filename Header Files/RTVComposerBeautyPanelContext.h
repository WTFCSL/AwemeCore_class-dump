//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface RTVComposerBeautyPanelContext : NSObject {
    BOOL _enableDetectGender;
    NSDictionary *_trackInfo;
    NSString *_trackKeyPrefix;
}

@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSString *trackKeyPrefix;
@property (nonatomic) BOOL enableDetectGender;

- (BOOL)enableDetectGender;
- (id)trackKeyPrefix;
- (void)setTrackKeyPrefix:(id)arg0;
- (void)setEnableDetectGender:(BOOL)arg0;
- (void).cxx_destruct;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;

@end
