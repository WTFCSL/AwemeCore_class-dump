//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeCalculateFmpMethodParamModel : BDXBridgeModel {
    NSNumber *_containerInitTime;
    NSString *_page;
    NSNumber *_autoReport;
    NSDictionary *_extraTrackParams;
}

@property (retain, nonatomic) NSNumber *containerInitTime;
@property (copy, nonatomic) NSString *page;
@property (retain, nonatomic) NSNumber *autoReport;
@property (copy, nonatomic) NSDictionary *extraTrackParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtraTrackParams:(id)arg0;
- (id)extraTrackParams;
- (id)autoReport;
- (id)containerInitTime;
- (void)setContainerInitTime:(id)arg0;
- (void)setAutoReport:(id)arg0;
- (id)page;
- (void).cxx_destruct;
- (void)setPage:(id)arg0;

@end