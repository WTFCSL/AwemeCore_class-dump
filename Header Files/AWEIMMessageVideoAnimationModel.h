//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEIMMessageVideoAnimationModel : MTLModel <MTLJSONSerializing> {
    NSString *_resourceName;
    AWEURLModel *_resourceUrl;
}

@property (copy, nonatomic) NSString *resourceName;
@property (retain, nonatomic) AWEURLModel *resourceUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setResourceName:(id)arg0;
- (id)resourceName;
- (id)resourceUrl;
- (void)setResourceUrl:(id)arg0;

@end
