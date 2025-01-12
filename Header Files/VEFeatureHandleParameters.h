//
//     Generated by private class-dump
//

@class NSString, VEColorSpaceInfo;

@interface VEFeatureHandleParameters : NSObject {
    NSString *_resPath;
    NSString *_identifier;
    VEColorSpaceInfo *_colorSpaceInfo;
    unsigned long long _featureType;
}

@property (retain, nonatomic) NSString *resPath;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) VEColorSpaceInfo *colorSpaceInfo;
@property (nonatomic) unsigned long long featureType;

- (void)setResPath:(id)arg0;
- (id)resPath;
- (id)colorSpaceInfo;
- (void)setColorSpaceInfo:(id)arg0;
- (unsigned long long)featureType;
- (void).cxx_destruct;
- (id)identifier;
- (void)setIdentifier:(id)arg0;
- (void)setFeatureType:(unsigned long long)arg0;

@end
