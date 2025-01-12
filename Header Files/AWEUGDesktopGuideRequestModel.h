//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEUGDesktopGuideRequestModel : MTLModel <MTLJSONSerializing> {
    BOOL _needLoading;
    NSString *_scene;
    NSString *_enterFrom;
    NSString *_passControlLevel;
    NSString *_guideStyleType;
    NSDictionary *_extraParams;
}

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *passControlLevel;
@property (copy, nonatomic) NSString *guideStyleType;
@property (nonatomic) BOOL needLoading;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (BOOL)needLoading;
- (void)setNeedLoading:(BOOL)arg0;
- (void)setPassControlLevel:(id)arg0;
- (void)setGuideStyleType:(id)arg0;
- (id)guideStyleType;
- (id)sceneUniqueKey;
- (id)passControlLevel;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)scene;

@end
