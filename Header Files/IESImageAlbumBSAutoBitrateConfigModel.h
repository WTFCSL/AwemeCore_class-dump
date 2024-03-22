//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESImageAlbumBSAutoBitrateConfigModel : MTLModel <IESImageAlbumBSAutoBitrateConfigModelProtocol, MTLJSONSerializing> {
    NSString *_defaultGear;
    NSArray *_imageAlbumBSConfigModelArray;
}

@property (copy, nonatomic) NSString *defaultGear;
@property (copy, nonatomic) NSArray *imageAlbumBSConfigModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageAlbumBSConfigModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)defaultGear;
- (void)setDefaultGear:(id)arg0;
- (id)imageAlbumBSConfigModelArray;
- (void)setImageAlbumBSConfigModelArray:(id)arg0;
- (void).cxx_destruct;

@end
