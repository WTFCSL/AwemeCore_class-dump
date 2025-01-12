//
//     Generated by private class-dump
//

@class BDXBridgeOpenHunterCommentInputPanelCommentGroupData, NSDictionary, BDXBridgeOpenHunterCommentInputPanelTrackParams, NSNumber;

@interface BDXBridgeOpenHunterCommentInputPanelMethodParamModel : BDXBridgeModel {
    NSNumber *_serviceID;
    BDXBridgeOpenHunterCommentInputPanelCommentGroupData *_commentGroupData;
    BDXBridgeOpenHunterCommentInputPanelTrackParams *_trackParams;
    NSDictionary *_businessParams;
    long long _generalCommentScene;
}

@property (retain, nonatomic) NSNumber *serviceID;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentInputPanelCommentGroupData *commentGroupData;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentInputPanelTrackParams *trackParams;
@property (copy, nonatomic) NSDictionary *businessParams;
@property (nonatomic) long long generalCommentScene;

+ (id)requiredKeyPaths;
+ (id)commentGroupDataJSONTransformer;
+ (id)trackParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)businessParams;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void)setBusinessParams:(id)arg0;
- (id)commentGroupData;
- (long long)generalCommentScene;
- (void)setCommentGroupData:(id)arg0;
- (void)setGeneralCommentScene:(long long)arg0;
- (void).cxx_destruct;
- (void)setServiceID:(id)arg0;
- (id)serviceID;

@end
