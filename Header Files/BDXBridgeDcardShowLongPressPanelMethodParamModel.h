//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDXBridgeDcardShowLongPressPanelMethodParamModel : BDXBridgeModel {
    NSString *_scene;
    NSDictionary *_panelConfig;
    NSDictionary *_shareInfo;
}

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *panelConfig;
@property (copy, nonatomic) NSDictionary *shareInfo;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setPanelConfig:(id)arg0;
- (id)panelConfig;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)shareInfo;
- (void)setShareInfo:(id)arg0;
- (id)scene;

@end
