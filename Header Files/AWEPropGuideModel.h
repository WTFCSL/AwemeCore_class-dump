//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEPropGuideModel : MTLModel <MTLJSONSerializing> {
    BOOL _showGuide;
    AWEURLModel *_iconURL;
    NSString *_propName;
    NSString *_propID;
}

@property (nonatomic) BOOL showGuide;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *propName;
@property (copy, nonatomic) NSString *propID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)showGuideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)showGuide;
- (void)setShowGuide:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setIconURL:(id)arg0;
- (id)iconURL;
- (id)propName;
- (void)setPropName:(id)arg0;
- (id)propID;
- (void)setPropID:(id)arg0;

@end
