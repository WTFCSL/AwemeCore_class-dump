//
//     Generated by private class-dump
//

@class NSString, IESECTabKitTrackConfigModel;

@interface IESECTabKitBizConfigModel : MTLModel <MTLJSONSerializing> {
    NSString *_accessibilityLabel;
    IESECTabKitTrackConfigModel *_trackConfig;
}

@property (copy, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) IESECTabKitTrackConfigModel *trackConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setTrackConfig:(id)arg0;
- (id)trackConfig;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg0;
- (void).cxx_destruct;

@end