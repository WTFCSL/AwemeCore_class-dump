//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDoubleColumnSearchMerchandiseSchemeModel : MTLModel <MTLJSONSerializing> {
    NSString *_video;
    NSString *_live;
}

@property (copy, nonatomic) NSString *video;
@property (copy, nonatomic) NSString *live;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)live;
- (void).cxx_destruct;
- (void)setLive:(id)arg0;
- (void)setVideo:(id)arg0;
- (id)video;

@end
