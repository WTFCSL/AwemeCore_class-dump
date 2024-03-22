//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPadGameChannelInfo : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_contentUrlPath;
    NSString *_skyLightUrlPath;
    NSString *_totalUrlPath;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *contentUrlPath;
@property (copy, nonatomic) NSString *skyLightUrlPath;
@property (copy, nonatomic) NSString *totalUrlPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)totalUrlPath;
- (id)contentUrlPath;
- (id)skyLightUrlPath;
- (void)setContentUrlPath:(id)arg0;
- (void)setSkyLightUrlPath:(id)arg0;
- (void)setTotalUrlPath:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;

@end