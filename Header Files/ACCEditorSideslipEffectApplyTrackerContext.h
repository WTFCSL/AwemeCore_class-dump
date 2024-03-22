//
//     Generated by private class-dump
//

@class NSString;

@interface ACCEditorSideslipEffectApplyTrackerContext : NSObject {
    BOOL _hitCache;
    BOOL _isFirstApply;
    NSString *_scene;
    NSString *_applyType;
    NSString *_invokeType;
    NSString *_effectID;
    NSString *_lastEffectID;
    unsigned long long _templateType;
    unsigned long long _lastTemplateType;
    double _firstScrollDuration;
    unsigned long long _applyCountWhileScroll;
}

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *applyType;
@property (copy, nonatomic) NSString *invokeType;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *lastEffectID;
@property (nonatomic) unsigned long long templateType;
@property (nonatomic) unsigned long long lastTemplateType;
@property (nonatomic) BOOL hitCache;
@property (nonatomic) BOOL isFirstApply;
@property (nonatomic) double firstScrollDuration;
@property (nonatomic) unsigned long long applyCountWhileScroll;

- (BOOL)hitCache;
- (void)setHitCache:(BOOL)arg0;
- (void)setEffectID:(id)arg0;
- (void)setIsFirstApply:(BOOL)arg0;
- (BOOL)isFirstApply;
- (id)invokeType;
- (void)setInvokeType:(id)arg0;
- (id)lastEffectID;
- (void)setLastEffectID:(id)arg0;
- (unsigned long long)lastTemplateType;
- (void)setLastTemplateType:(unsigned long long)arg0;
- (double)firstScrollDuration;
- (void)setFirstScrollDuration:(double)arg0;
- (unsigned long long)applyCountWhileScroll;
- (void)setApplyCountWhileScroll:(unsigned long long)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)setTemplateType:(unsigned long long)arg0;
- (unsigned long long)templateType;
- (id)scene;
- (id)effectID;
- (id)applyType;
- (void)setApplyType:(id)arg0;

@end
