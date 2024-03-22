//
//     Generated by private class-dump
//

@class HTSEventContext, NSMutableDictionary;

@interface IESLivePlaybackComponentTracker : NSObject {
    BOOL _hasReported;
    HTSEventContext *_trackContext;
    NSMutableDictionary *_itemsDic;
    NSMutableDictionary *_componentsInitMetrics;
    NSMutableDictionary *_componentsWillMountMetrics;
    NSMutableDictionary *_componentsDidMountMetrics;
    NSMutableDictionary *_componentsUnMountMetrics;
    NSMutableDictionary *_componentsWillAppearMetrics;
    NSMutableDictionary *_componentsDidAppearMetrics;
    NSMutableDictionary *_componentsWillDisAppearMetrics;
    NSMutableDictionary *_componentsDidDisAppearMetrics;
}

@property (retain, nonatomic) NSMutableDictionary *itemsDic;
@property (retain, nonatomic) NSMutableDictionary *componentsInitMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsWillMountMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsDidMountMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsUnMountMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsWillAppearMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsDidAppearMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsWillDisAppearMetrics;
@property (retain, nonatomic) NSMutableDictionary *componentsDidDisAppearMetrics;
@property (nonatomic) BOOL hasReported;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)setComponentsInitMetrics:(id)arg0;
- (void)setComponentsUnMountMetrics:(id)arg0;
- (void)setComponentsWillAppearMetrics:(id)arg0;
- (void)setComponentsDidAppearMetrics:(id)arg0;
- (void)setComponentsWillDisAppearMetrics:(id)arg0;
- (void)setComponentsDidDisAppearMetrics:(id)arg0;
- (id)componentsInitMetrics;
- (id)componentsUnMountMetrics;
- (id)componentsWillAppearMetrics;
- (id)componentsDidAppearMetrics;
- (id)componentsWillDisAppearMetrics;
- (id)componentsDidDisAppearMetrics;
- (void)reportForEvent:(id)arg0 para:(id)arg1;
- (void)recordComponentStartSatge:(unsigned long long)arg0;
- (void)recordComponentEndSatge:(unsigned long long)arg0;
- (void)recordComponent:(id)arg0 cycle:(unsigned long long)arg1 duration:(double)arg2;
- (id)itemsDic;
- (id)componentsWillMountMetrics;
- (id)componentsDidMountMetrics;
- (id)getNameWithComponentStage:(unsigned long long)arg0;
- (void)setItemsDic:(id)arg0;
- (void)setComponentsWillMountMetrics:(id)arg0;
- (void)setComponentsDidMountMetrics:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)report;
- (BOOL)hasReported;
- (void)setHasReported:(BOOL)arg0;

@end
