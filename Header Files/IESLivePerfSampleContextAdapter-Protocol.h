//
//     Generated by private class-dump
//

@class NSString;

@protocol IESLivePerfSampleContextAdapter <NSObject>

@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) long long roomScene;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) long long perfSampleScene;

@optional

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (void)setIsAnchor:(BOOL)arg0;
- (BOOL)isLiving;
- (id)anchorId;
- (void)setAnchorId:(id)arg0;
- (void)setIsLiving:(BOOL)arg0;
- (void)setRoomScene:(long long)arg0;
- (long long)roomScene;
- (id)toReportContextV2;
- (void)activateFeature:(id)arg0 info:(id)arg1;
- (void)deactivateFeature:(id)arg0;
- (void)setPerfSampleScene:(long long)arg0;
- (long long)perfSampleScene;
- (BOOL)isAnchor;

@end
